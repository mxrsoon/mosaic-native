// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <v8.h>
#include <libplatform/libplatform.h>
#include <cwalk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <gtk-3.0/gtk/gtk.h>

#include <piston_module_info.h>
#include <piston_native_module.h>
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

char* executable_path;
char* main_src;

GtkApplication* gtk_app;

std::unique_ptr<Platform> v8_platform;
Local<Context> v8_context;
Isolate* v8_isolate;
TryCatch* v8_trycatch;
UniquePersistent<Function> v8_set_timeout_latest_callback;

const char* get_current_dir() {
	char* buffer = (char*)malloc(FILENAME_MAX);
	GetCurrentDir(buffer, FILENAME_MAX);
	return buffer;
}

const char* get_dirname(const char* path) {
	size_t dirname_length;
	cwk_path_get_dirname(path, &dirname_length);

	char* dirname = (char*)malloc(dirname_length);
	memcpy(dirname, path, dirname_length);
	dirname[dirname_length] = '\0';

	return dirname;
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

const char* read_file(const char* path) {
	FILE* file = fopen(path, "rb");
	if (file == NULL) return "";

	fseek(file, 0, SEEK_END);
	size_t size = ftell(file);
	rewind(file);

	char* chars = new char[size + 1];
	chars[size] = '\0';

	for (size_t i = 0; i < size;) {
		i += fread(&chars[i], 1, size - i, file);

		if (ferror(file)) {
			fclose(file);
			return "";
		}
	}

	fclose(file);
	return chars;
}

const char* resolve_module_specifier(const char* referrer, const char* specifier, bool allow_bare_relative = false) {
	if (specifier[0] == '/' || specifier[0] == '@') {
		return specifier;
	} else if (specifier[0] == '.' && (specifier[1] == '/' || specifier[1] == '.' && specifier[2]) == '/' || allow_bare_relative) {
		char* buffer = (char*)malloc(FILENAME_MAX);
		cwk_path_get_absolute(referrer, specifier, buffer, FILENAME_MAX);
		return buffer;
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

	ModuleInfo* mod_info = ModuleInfo::Get(module);

	String::Utf8Value source(isolate, mod_info->origin->ResourceName());
	MaybeLocal<String> uri = String::NewFromUtf8(isolate, path_to_file_uri(*source));

	meta->Set(context, String::NewFromUtf8(isolate, "url").ToLocalChecked(), uri.ToLocalChecked());
}

MaybeLocal<Module> resolve_module_callback(Local<Context> context, Local<String> specifier, Local<FixedArray> import_assertions, Local<Module> referrer) {
	ModuleInfo* referrer_info = ModuleInfo::Get(referrer);
	String::Utf8Value referrer_origin(context->GetIsolate(), referrer_info->origin->ResourceName());

	String::Utf8Value utf8_specifier(context->GetIsolate(), specifier);
	const char* resolved = resolve_module_specifier(get_dirname(*referrer_origin), *utf8_specifier, true);

	MaybeLocal<Module> mod = load_module(context->GetIsolate(), context, resolved);
	return mod;
}

MaybeLocal<Module> load_module(Isolate* isolate, Local<Context> context, const char* path) {
	Local<Module> module;
	std::string path_str(path);

	ScriptOrigin* origin = new ScriptOrigin(
		String::NewFromUtf8(isolate, path, NewStringType::kNormal).ToLocalChecked(),   // specifier
		Integer::New(isolate, 0),                                                      // line offset
		Integer::New(isolate, 0),                                                      // column offset
		False(isolate),                                                                // is cross origin
		Local<Integer>(),                                                              // script id
		Local<Value>(),                                                                // source map URL
		False(isolate),                                                                // is opaque
		False(isolate),                                                                // is WASM
		True(isolate),                                                                 // is ES6 module
		Local<PrimitiveArray>()                                                        // host options
	);

	if (path_str.starts_with("@mosaic")) {
		NativeModuleBase* native_module;

		if (strcmp(path, "@mosaic/diagnostics/Debug") == 0) {
			native_module = (NativeModuleBase*)mosaic::diagnostics::DebugModule::GetInstance(isolate);
		} else if (strcmp(path, "@mosaic/presentation/Window") == 0) {
			native_module = (NativeModuleBase*)mosaic::presentation::WindowModule::GetInstance(isolate);
		} else if (strcmp(path, "@mosaic/presentation/Button") == 0) {
			native_module = (NativeModuleBase*)mosaic::presentation::ButtonModule::GetInstance(isolate);
		} else if (strcmp(path, "@mosaic/presentation/DrawingArea") == 0) {
			native_module = (NativeModuleBase*)mosaic::presentation::DrawingAreaModule::GetInstance(isolate);
		}

		if (native_module != nullptr) {
			module = native_module->Make();
		}
	} else {
		const char* contents = read_file(path);
		Local<String> source_text = String::NewFromUtf8(isolate, contents, NewStringType::kNormal).ToLocalChecked();
		
		Context::Scope context_scope(context);
		ScriptCompiler::Source source(source_text, *origin);
		ScriptCompiler::CompileModule(isolate, &source).ToLocal(&module);
	}

	if (module.IsEmpty()) {
		return MaybeLocal<Module>();
	}

	ModuleInfo* mod_info = new ModuleInfo(module, origin);

	// TODO: Resolve import requests ahead of time (useful for async)
	// for (int i = 0; i < module->GetModuleRequestsLength(); i++) {
	// 	Local<String> specifier = module->GetModuleRequest(i); // "some thing"
	// }

	if (module->InstantiateModule(context, resolve_module_callback).IsNothing()) {
		return MaybeLocal<Module>();
	}

	return MaybeLocal<Module>(module);
}

Local<Context> create_global_context(Isolate* isolate) {
	// Create new template
	Local<ObjectTemplate> global_template = ObjectTemplate::New(isolate);

	// Add 'setTimeout' function to 'global' template
	global_template->Set(String::NewFromUtf8(isolate, "setTimeout").ToLocalChecked(), FunctionTemplate::New(isolate, global_set_timeout_callback));

	// Create new context using the template
	Local<Context> context = Context::New(isolate, NULL, global_template);

	return context;
}

void run_module(Isolate* isolate, Local<Context> context, const char* path) {
	const char* cwd = get_current_dir();
	path = resolve_module_specifier(cwd, main_src, true);

	MaybeLocal<Module> maybe_module = load_module(isolate, context, path);
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

		// Set meta object init callback.
		v8_isolate->SetHostInitializeImportMetaObjectCallback(initialize_import_meta_object_callback);

		// Initialize GTK application
		initialize_gtk_app("dev.wazy.mosaic", 0, NULL);

		// TODO: Use GApplication instead of GTKApplication to keep app running
		// while there are timers set even without GTKWindow instances present
	}
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

static void gtk_app_activate_callback(GtkApplication* app, gpointer user_data) {	
	// Run the module
	run_module(v8_isolate, v8_context, main_src);
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