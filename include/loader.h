#include <v8.h>
#include <libplatform/libplatform.h>
#include <string>
#include <piston_module_repository.h>

using namespace v8;
using namespace piston;
using namespace std;

typedef struct {
	Persistent<Function> callback;
	Persistent<Context> context;
} JSTimeoutMetadata;

extern GtkApplication* gtk_app;

const char* get_current_dir();
const char* path_to_file_uri(const char* path);
string resolve_module_specifier(string referrer, string specifier);
void report_exception(Isolate* isolate, TryCatch* try_catch);
void initialize_import_meta_object_callback(Local<Context> context, Local<Module> module, Local<Object> meta);
Local<Context> create_global_context(Isolate* isolate);
void run_module(Isolate* isolate, Local<Context> context, string path);
void run_application(const char* path);
ModuleRepository* setup_module_repository(Local<Context> context);
void setup_builtin_modules(ModuleRepository* repository);
unique_ptr<Platform> initialize_v8(const char* exec_path);
void shutdown_v8();

GtkApplication* initialize_gtk_app(const char* package_name, int argc, char* argv[]);
GtkWidget* create_gtk_window(const char* title, int default_width, int default_height);
int global_set_timeout_g_callback(void* callback_ptr);
void global_set_timeout_callback(const FunctionCallbackInfo<Value> &args);