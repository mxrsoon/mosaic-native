#pragma once

#include <v8.h>
#include <string>

using namespace v8;
using namespace std;

namespace piston {
	class ModuleInfo {
		public:
			ModuleInfo(Local<Module> module, string path);
			string GetPath();
			Local<Module> GetModule();
			Local<Module> GetModule(Isolate* isolate);

		private:
			string path_;
			Persistent<Module> persistent_;
	};
}