#include <functional>
#include <v8.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/diagnostics/debug.h>

using namespace v8;
using namespace std::placeholders;

namespace mosaic::diagnostics {

	Local<Function> Debug::Init(Local<Context> context) {
		Isolate * isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "Debug").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<FunctionTemplate> log_tpl = FunctionTemplate::New(isolate, LogCallback);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->Set(String::NewFromUtf8(isolate, "log").ToLocalChecked(), log_tpl);

		return handle_scope.Escape(class_tpl->GetFunction(context).ToLocalChecked());
	}

	void Debug::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		if (args.IsConstructCall()) {
			Debug* instance = new Debug();
			instance->Wrap(args.This());
			args.GetReturnValue().Set(args.This());
		} else {
			Isolate * isolate = args.GetIsolate();
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
			));
		}
	}

	void Debug::LogCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		bool first = true;

		for (int i = 0; i < args.Length(); i++) {
			HandleScope handle_scope(isolate);

			if (first) {
				first = false;
			} else {
				printf(" ");
			}

			if (args[i]->IsString()) {
				String::Utf8Value str(isolate, args[i]);
				printf("%s", *str);
			} else {
				String::Utf8Value str(isolate, JSON::Stringify(isolate->GetCurrentContext(), args[i]).ToLocalChecked());
				printf("%s", *str);
			}

		}

		printf("\n");
		fflush(stdout);
	}

	Local<Module> DebugModule::Make(Isolate* isolate) {
		EscapableHandleScope handle_scope(isolate);

		Local<Module> module = Module::CreateSyntheticModule(
			isolate, 
			String::NewFromUtf8(isolate, "Debug").ToLocalChecked(),
			{
				String::NewFromUtf8(isolate, "default").ToLocalChecked(),
				String::NewFromUtf8(isolate, "log").ToLocalChecked() 
			},
			[](Local<Context> context, Local<Module> module) -> MaybeLocal<Value> {
				Isolate* isolate = context->GetIsolate();
				HandleScope handle_scope(isolate);

				Local<Function> constructor = Debug::Init(context);
				Local<Object> instance = constructor->NewInstance(context).ToLocalChecked();

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "default").ToLocalChecked(), 
					instance
				);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "log").ToLocalChecked(), 
					instance->Get(context, String::NewFromUtf8(isolate, "log").ToLocalChecked()).ToLocalChecked().As<Function>()
				);
				
				return MaybeLocal<Value>(True(isolate));
			}
		);

		return handle_scope.Escape(module);
	}
}