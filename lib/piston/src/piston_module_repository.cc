#include <v8.h>
#include <piston_module_info.h>
#include <piston_module_repository.h>
#include <string>
#include <fstream>
#include <functional>
#include <iostream>

using namespace v8;
using namespace std;

namespace piston {
    std::unordered_map<int, ModuleRepository*> ModuleRepository::instances_;

    ModuleRepository::ModuleRepository(Local<Context> context, ResolveSpecifierCallback resolve_specifier_callback) {
        Local<Number> context_id_value = Local<Number>::Cast(context->GetEmbedderData(1));
        int context_id = context_id_value->Int32Value(context).ToChecked();

        this->isolate_ = context->GetIsolate();
        this->context_.Reset(this->isolate_, context);
        this->resolve_specifier_callback_ = resolve_specifier_callback;

        ModuleRepository::instances_[context_id] = this;
    }

    ModuleInfo* ModuleRepository::Add(string specifier, Local<Module> module) {
        ResolveSpecifierCallback resolve_specifier = this->GetResolveSpecifierCallback();
        specifier = resolve_specifier(specifier, "");

        ModuleInfo* info = new ModuleInfo(module, specifier);
        return this->Add(info);
    }

    ModuleInfo* ModuleRepository::Add(ModuleInfo* info) {
        string specifier = info->GetPath();
        Local<Module> module = info->GetModule(this->GetIsolate());

        this->module_to_info_map_[module->GetIdentityHash()] = info;
        this->specifier_to_info_map_[specifier] = info;

        return info;
    }

    ModuleInfo* ModuleRepository::GetModuleInfo(Local<Module> module) {
        if (this->module_to_info_map_.contains(module->GetIdentityHash())) {
            return this->module_to_info_map_[module->GetIdentityHash()];
        }

        return nullptr;
    }

    ModuleInfo* ModuleRepository::GetModuleInfo(string specifier) {
        if (this->specifier_to_info_map_.contains(specifier)) {
            return this->specifier_to_info_map_[specifier];
        }

        return nullptr;
    }

    MaybeLocal<Module> ModuleRepository::GetOrLoadModule(string specifier, string referrer) {
        Isolate* isolate = this->GetIsolate();
        EscapableHandleScope handle_scope(isolate);
        Local<Context> context = this->GetContext();

        ResolveSpecifierCallback resolve_specifier = this->GetResolveSpecifierCallback();
        specifier = resolve_specifier(specifier, referrer);

        MaybeLocal<Module> maybe_module;
        ModuleInfo* info = this->GetModuleInfo(specifier);

        if (info != nullptr) {
            maybe_module = info->GetModule(this->GetIsolate());
        } else {
            maybe_module = this->LoadModule(specifier);
        }

        if (maybe_module.IsEmpty()) {
            return handle_scope.EscapeMaybe(MaybeLocal<Module>());
        }

        Local<Module> module = maybe_module.ToLocalChecked();
        bool needs_instantiation = module->GetStatus() == Module::Status::kUninstantiated;

        // Resolve imports ahead-of-time. Useful for async.
        for (int i = 0; i < module->GetModuleRequestsLength(); i++) {
        	String::Utf8Value req_specifier(isolate, module->GetModuleRequest(i));
            string req_specifier_str(*req_specifier);
            
            this->GetOrLoadModule(req_specifier_str, specifier);
        }

        if (needs_instantiation && module->InstantiateModule(context, ModuleRepository::ResolveModule).IsNothing()) {
            return handle_scope.EscapeMaybe(MaybeLocal<Module>());
        }

        return handle_scope.EscapeMaybe(MaybeLocal<Module>(module));
    }

    MaybeLocal<Module> ModuleRepository::LoadModule(string specifier) {
        Isolate* isolate = this->GetIsolate();
        EscapableHandleScope handle_scope(isolate);

        if (this->specifier_to_info_map_.contains(specifier)) {
            // Return from cache
            Local<Module> module = this->specifier_to_info_map_[specifier]->GetModule(isolate);
            return handle_scope.EscapeMaybe(MaybeLocal<Module>(module));
        }

        ScriptOrigin* origin = new ScriptOrigin(
            String::NewFromUtf8(              // specifier
                isolate, 
                specifier.c_str(), 
                NewStringType::kNormal
            ).ToLocalChecked(),
            0,                                // line offset
            0,                                // column offset
            false,                            // is cross origin
            -1,                               // script id
            Local<Value>(),                   // source map URL
            false,                            // is opaque
            false,                            // is WASM
            true                              // is ES6 module
        );

        // Load file contents
        ifstream ifs(specifier);
        string content;
        content.assign(istreambuf_iterator<char>(ifs), istreambuf_iterator<char>());

        // Load module
        Local<Module> module;
        Local<String> source_text = String::NewFromUtf8(isolate, content.c_str(), NewStringType::kNormal).ToLocalChecked();
        ScriptCompiler::Source source(source_text, *origin);
        ScriptCompiler::CompileModule(isolate, &source).ToLocal(&module);

        if (module.IsEmpty()) {
            return handle_scope.EscapeMaybe(MaybeLocal<Module>());
        }

        this->Add(specifier, module);
        return handle_scope.EscapeMaybe(MaybeLocal<Module>(module));
    }

    MaybeLocal<Module> ModuleRepository::ResolveModule(Local<Context> context, Local<String> specifier, Local<FixedArray> import_assertions, Local<Module> referrer) {
        Isolate* isolate = context->GetIsolate();
        EscapableHandleScope handle_scope(isolate);

        ModuleRepository* repository = ModuleRepository::Get(context);
        ModuleInfo* referrer_info = repository->GetModuleInfo(referrer);

        String::Utf8Value utf8_specifier(isolate, specifier);

        MaybeLocal<Module> mod = repository->GetOrLoadModule(string(*utf8_specifier), referrer_info->GetPath());
        return handle_scope.EscapeMaybe(mod);
    }

    ModuleRepository* ModuleRepository::Get(Local<Context> context) {
        Local<Number> context_id_value = Local<Number>::Cast(context->GetEmbedderData(1));
        int context_id = context_id_value->Int32Value(context).ToChecked();

        if (instances_.contains(context_id)) {
            return instances_[context_id];
        }
        
        return nullptr;
    }
}