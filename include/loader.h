#include <v8.h>
#include <libplatform/libplatform.h>

using namespace v8;
using namespace piston;

typedef struct {
	Persistent<Function> callback;
	Persistent<Context> context;
} JSTimeoutMetadata;

extern GtkApplication* gtk_app;

const char* get_current_dir();
const char* get_dirname(const char* path);
const char* path_to_file_uri(const char* path);
const char* read_file(const char* path);
const char* resolve_module_specifier(const char* referrer, const char* specifier, bool allow_bare_relative);
void report_exception(Isolate* isolate, TryCatch* try_catch);
void initialize_import_meta_object_callback(Local<Context> context, Local<Module> module, Local<Object> meta);
MaybeLocal<Module> resolve_module_callback(Local<Context> context, Local<String> specifier, Local<FixedArray> import_assertions, Local<Module> referrer);
MaybeLocal<Module> load_module(Isolate* isolate, Local<Context> context, const char* path);
Local<Value> json_stringify(Local<Context> context, Local<Value> value);
Local<ObjectTemplate> create_mosaic_template(Isolate* isolate);
Local<Context> create_global_context(Isolate* isolate);
void run_module(Isolate* isolate, Local<Context> context, const char* path);
void run_application(const char* path);
std::unique_ptr<Platform> initialize_v8(const char* exec_path);
void shutdown_v8();

GtkApplication* initialize_gtk_app(const char* package_name, int argc, char* argv[]);
GtkWidget* create_gtk_window(const char* title, int default_width, int default_height);
void mosaic_create_window_callback(const FunctionCallbackInfo<Value>& args);
void mosaic_print_callback(const FunctionCallbackInfo<Value>& args);
void mosaic_version_callback(Local<Name> property, const PropertyCallbackInfo<Value> &info);
int global_set_timeout_g_callback(void* callback_ptr);
void global_set_timeout_callback(const FunctionCallbackInfo<Value> &args);