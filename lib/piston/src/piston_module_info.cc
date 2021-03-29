#include <unordered_map>
#include <v8.h>
#include <piston_module_info.h>

namespace piston {
	using namespace v8;

	std::unordered_multimap<int, ModuleInfo*> module_info_map;

	ModuleInfo::ModuleInfo(Local<Module> module, const ScriptOrigin* origin) {
		this->module = module;
		this->origin = origin;

		module_info_map.emplace(module->GetIdentityHash(), this);
	}

	ModuleInfo* ModuleInfo::Get(Local<Module> module) {
		auto range = module_info_map.equal_range(module->GetIdentityHash());

		for (auto it = range.first; it != range.second; ++it) {
			if (it->second->module == module)
			return it->second;
		}

		return nullptr;
	}
}