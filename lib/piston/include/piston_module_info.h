#pragma once

#include <v8.h>
using namespace v8;

namespace piston {
	class ModuleInfo {
		public:
			ModuleInfo(Local<Module> module, const ScriptOrigin* origin);
			Local<Module> module;
			const ScriptOrigin* origin;
			static ModuleInfo* Get(Local<Module> module);
	};
}