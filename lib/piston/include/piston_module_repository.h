#pragma once

#include <unordered_map>
#include <v8.h>
#include <piston_module_info.h>
#include <string>
#include <functional>

using namespace v8;
using namespace std;

namespace piston {
    class ModuleRepository {
        public:
            using ResolveSpecifierCallback = function<string(string specifier, string referrer)>;

            ModuleRepository(Local<Context> context, ResolveSpecifierCallback resolve_specifier_callback);
            ~ModuleRepository();

            ModuleInfo* Add(string specifier, Local<Module> module);
            ModuleInfo* Add(ModuleInfo* info);

            ModuleInfo* GetModuleInfo(Local<Module> module);
            ModuleInfo* GetModuleInfo(string specifier);

            MaybeLocal<Module> GetOrLoadModule(string specifier, string referrer = string());
            
            Isolate* GetIsolate() { return isolate_; }
            Local<Context> GetContext() { return Local<Context>::New(isolate_, context_); }
            ResolveSpecifierCallback GetResolveSpecifierCallback() { return resolve_specifier_callback_; }

            static ModuleRepository* Get(Local<Context> context);

        protected:
            MaybeLocal<Module> LoadModule(string specifier);
            std::unordered_map<string, ModuleInfo*> specifier_to_info_map_;
            std::unordered_map<int, ModuleInfo*> module_to_info_map_;

            static MaybeLocal<Module> ResolveModule(Local<Context> context, Local<String> specifier, Local<FixedArray> import_assertions, Local<Module> referrer);

        private:
            Isolate* isolate_;
            Persistent<Context> context_;
            ResolveSpecifierCallback resolve_specifier_callback_;

            static std::unordered_map<int, ModuleRepository*> instances_;
    };
}