#include <v8.h>
#include <piston_module_info.h>
#include <string>

using namespace v8;
using namespace std;

namespace piston {

	ModuleInfo::ModuleInfo(Local<Module> module, string path) {
		this->persistent_.Reset(Isolate::GetCurrent(), module);
		this->path_ = path;
	}
	
	string ModuleInfo::GetPath() {
		return string(path_);
	}

	Local<Module> ModuleInfo::GetModule() {
		return GetModule(Isolate::GetCurrent());
	}

	Local<Module> ModuleInfo::GetModule(Isolate* isolate) {
		return Local<Module>::New(isolate, persistent_);
	}
}