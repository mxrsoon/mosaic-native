// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <v8.h>
#include <libplatform/libplatform.h>
#include <cwalk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <gtk-3.0/gtk/gtk.h>

#include <piston_module_info.h>
#include <piston_native_module.h>
#include <piston_module_repository.h>
#include <built-ins/diagnostics/debug.h>
#include <built-ins/presentation/window.h>
#include <built-ins/presentation/button.h>
#include <built-ins/presentation/drawing_area.h>

#include "loader.h"

#ifdef WINDOWS
	#include <direct.h>
	#define GetCurrentDir _getcwd
#else
	#include <unistd.h>
	#define GetCurrentDir getcwd
#endif

using namespace v8;
using namespace piston;
namespace fs = std::filesystem;

char* executable_path;
char* main_src;

GtkApplication* gtk_app;
int next_context_id = 1;

std::unique_ptr<Platform> v8_platform;
Local<Context> v8_context;
Isolate* v8_isolate;
TryCatch* v8_trycatch;
UniquePersistent<Function> v8_set_timeout_latest_callback;
ModuleRepository* module_repository;

const char* get_current_dir() {
	char* buffer = (char*)malloc(FILENAME_MAX);
	GetCurrentDir(buffer, FILENAME_MAX);
	return buffer;
}

const char* path_to_file_uri(const char* path) {
	const char* uri_prefix = "file:///";

	// Get path and prefix length
	size_t path_length = strlen(path);
	size_t prefix_length = strlen(uri_prefix);

	// Ignore first path slash
	if (path[0] == '/' || path[0] == '\\') {
		path++;
		path_length--;
	}

	// Allocate memory for full URI
	size_t uri_length = prefix_length + path_length;
	char* uri = (char*) calloc(uri_length, sizeof(char));

	strcpy(uri, "file:///");

	// Copy path to URI
	for (int i = 0; i < path_length; i++) {
		char current_char = path[i];

		// Replace backwards slash
		if (path[i] == '\\') {
			current_char = '/';
		}

		uri[i + prefix_length] = current_char;
	}

	return uri;
}

// TODO: Clean up this function (remove cwalk dep.)
string resolve_module_specifier(string specifier, string referrer = string()) {
	bool absolute = specifier[0] == '/';
	bool relative = specifier[0] == '.' && (specifier[1] == '/' || specifier[1] == '.' && specifier[2] == '/');

	if (absolute || relative) {
		fs::path module_path;
		
		if (absolute) {
			module_path = specifier;
		} else {
			fs::path referrer_path = referrer;
			fs::path specifier_path = specifier;
			referrer_path.remove_filename();

			if (referrer_path.empty()) {
				referrer_path = get_current_dir();

				if (referrer_path.has_filename()) {
					referrer_path += "/";
				}
			}

			char* buffer = (char*)malloc(FILENAME_MAX);
			cwk_path_get_absolute(referrer_path.c_str(), specifier.c_str(), buffer, FILENAME_MAX);
			module_path = buffer;

			if (!specifier_path.has_filename() && module_path.has_filename()) {
				module_path += "/";
			}
		}

		if (fs::exists(module_path)) {
			module_path = fs::canonical(module_path);
			
			if (fs::is_directory(module_path)) {
				module_path = module_path / "index.js";
			}
		}

		return string(module_path);
	} else if (specifier[0] == '@') {
		// TODO: Prevent access to file system in those special cases.
		// If a specifier starts with @ but the full specifier doesn't match anything in
		// the repository, it will try to find the module in the file system. This is a
		// potential vulnerability and should be fixed. 
		return specifier;
	}

	return "";
}

void report_exception(Isolate* isolate, TryCatch* try_catch) {
	HandleScope handle_scope(isolate);
	String::Utf8Value exception_str(isolate, try_catch->Exception());
	printf("\x1b[31m%s\x1b[0m\n", *exception_str);
}

void initialize_import_meta_object_callback(Local<Context> context, Local<Module> module, Local<Object> meta) {
	Isolate* isolate = context->GetIsolate();
	ModuleInfo* mod_info = module_repository->GetModuleInfo(module);

	MaybeLocal<String> uri = String::NewFromUtf8(isolate, path_to_file_uri(mod_info->GetPath().c_str()));
	meta->Set(context, String::NewFromUtf8(isolate, "url").ToLocalChecked(), uri.ToLocalChecked());
}

Local<Context> create_global_context(Isolate* isolate) {
	EscapableHandleScope handle_scope(isolate);

	// Create new global template
	Local<ObjectTemplate> global_template = ObjectTemplate::New(isolate);

	// Add 'setTimeout' function to 'global' template
	global_template->Set(String::NewFromUtf8(isolate, "setTimeout").ToLocalChecked(), FunctionTemplate::New(isolate, global_set_timeout_callback));

	// Create new context using the template
	Local<Context> context = Context::New(isolate, NULL, global_template);
	context->SetEmbedderData(1, Number::New(isolate, next_context_id));
	next_context_id++;

	return handle_scope.Escape(context);
}

void run_application() {
	// Initialize V8
	v8_platform = initialize_v8(executable_path);

	// Create a new Isolate and make it the current one.
	Isolate::CreateParams create_params;
	create_params.array_buffer_allocator = ArrayBuffer::Allocator::NewDefaultAllocator();

	v8_isolate = Isolate::New(create_params);

	{
		Isolate::Scope isolate_scope(v8_isolate);

		// Use a TryCatch to handle exceptions
		TryCatch try_catch(v8_isolate);
		v8_trycatch = &try_catch;

		// Create a stack-allocated handle scope
		HandleScope handle_scope(v8_isolate);

		// Create a new context
		v8_context = create_global_context(v8_isolate);
		Context::Scope context_scope(v8_context);

		// Create a new module repository
		module_repository = setup_module_repository(v8_context);

		// Set meta object init callback.
		v8_isolate->SetHostInitializeImportMetaObjectCallback(initialize_import_meta_object_callback);

		// Initialize GTK application
		initialize_gtk_app("dev.wazy.mosaic", 0, NULL);

		// TODO: Use GApplication instead of GTKApplication to keep app running
		// while there are timers set even without GTKWindow instances present
	}
}

ModuleRepository* setup_module_repository(Local<Context> context) {
	// Setup callbacks
	function<string(string, string)> resolve_specifier_callback = resolve_module_specifier;

	// Create repository
	ModuleRepository* repository = new ModuleRepository(context, resolve_specifier_callback);
	setup_builtin_modules(repository);

	return repository;
}

void setup_builtin_modules(ModuleRepository* repository) {
	Isolate* isolate = repository->GetIsolate();

	repository->Add("@mosaic/diagnostics/Debug", mosaic::diagnostics::DebugModule::GetInstance(isolate));
	repository->Add("@mosaic/presentation/Window", mosaic::presentation::WindowModule::GetInstance(isolate));
	repository->Add("@mosaic/presentation/Button", mosaic::presentation::ButtonModule::GetInstance(isolate));
	repository->Add("@mosaic/presentation/DrawingArea", mosaic::presentation::DrawingAreaModule::GetInstance(isolate));
}

/**
 * Initialize V8's internals and default platform.
 * @param exec_path Base path where the platform will be executed.
 * @returns Pointer to the new platform instance.
 */
std::unique_ptr<Platform> initialize_v8(const char* exec_path) {
	V8::SetFlagsFromString("--harmony-top-level-await");
	V8::InitializeICUDefaultLocation(exec_path);
	V8::InitializeExternalStartupData(exec_path);

	std::unique_ptr<Platform> platform = platform::NewDefaultPlatform();

	V8::InitializePlatform(platform.get());
	V8::Initialize();

	return platform;
}

/**
 * Shutdown and dispose V8.
 */
void shutdown_v8() {
	// Get current isolate
	Isolate* isolate = Isolate::GetCurrent();

	if (isolate != NULL) {
		// Dispose the isolate.
		isolate->Dispose();
		delete isolate->GetArrayBufferAllocator();
	}

	V8::ShutdownPlatform();
	V8::Dispose();
}

int main(int argc, char* argv[]) {
	// Setup global variables
	executable_path = argv[0];
	main_src = argv[1];

	// Create GTK application
	run_application();

	// Tear down V8
	shutdown_v8();
	
	// Tear down GTK
	g_object_unref(gtk_app);
	gtk_app = NULL;

	return 0;
}

void run_module(Isolate* isolate, Local<Context> context, string path) {
	HandleScope handle_scope(v8_isolate);

	MaybeLocal<Module> maybe_module = module_repository->GetOrLoadModule(path);
	Local<Module> module;
	
	if (maybe_module.ToLocal(&module)) {
		Local<Promise> promise = Local<Promise>::Cast(module->Evaluate(context).ToLocalChecked());

		if (promise->State() == Promise::PromiseState::kRejected) {
			Local<Value> result = promise->Result();
			isolate->ThrowException(result);
		}
	}

	if (v8_trycatch->HasCaught()) {
		// Print thrown exception
		report_exception(isolate, v8_trycatch);
		exit(0);
	}
}

static void gtk_app_activate_callback(GtkApplication* app, gpointer user_data) {	
	// Run the module
	run_module(v8_isolate, v8_context, string(main_src));
}

GtkApplication* initialize_gtk_app(const char* package_name, int argc, char* argv[]) {
	int status;

	gtk_app = gtk_application_new("dev.wazy.mosaic", G_APPLICATION_FLAGS_NONE);
	g_signal_connect(gtk_app, "activate", G_CALLBACK(gtk_app_activate_callback), NULL);
	status = g_application_run(G_APPLICATION(gtk_app), 0, NULL);

	return gtk_app;
}

int global_set_timeout_g_callback(void* callback_ptr) {
	// TODO: Fix receiving callback as argument
	Local<Function> callback = v8_set_timeout_latest_callback.Get(v8_isolate);
	Local<Context> context = v8_context;

	callback->Call(context, context->Global(), 0, NULL);

	if (v8_trycatch->HasCaught()) {
		report_exception(v8_isolate, v8_trycatch);
	}

	return false;
}

void global_set_timeout_callback(const FunctionCallbackInfo<Value> &args) {
	Isolate* isolate = args.GetIsolate();

	if (args.Length() < 2) {
		isolate->ThrowException(String::NewFromUtf8(isolate, "You must pass 2 arguments to this function").ToLocalChecked());
	}

	if (!args[0]->IsFunction()) {
		isolate->ThrowException(String::NewFromUtf8(isolate, "Callback must be a function").ToLocalChecked());
	}

	if (!args[1]->IsNumber()) {
		isolate->ThrowException(String::NewFromUtf8(isolate, "Timeout must be a number").ToLocalChecked());
	}

	v8_set_timeout_latest_callback = UniquePersistent<Function>(isolate, Local<Function>::Cast(args[0]));
	Local<Function> callback = v8_set_timeout_latest_callback.Get(v8_isolate);
	int timeout = args[1]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);

	if (timeout < 0) {
		isolate->ThrowException(String::NewFromUtf8(isolate, "Timeout must be greater or equal to zero").ToLocalChecked());
	}

	g_timeout_add(timeout, global_set_timeout_g_callback, &v8_set_timeout_latest_callback);
}