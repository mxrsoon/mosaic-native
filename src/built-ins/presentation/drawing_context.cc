#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/drawing_context.h>
#include <stdio.h>
#include <glib.h>
#include "loader.h"

using namespace v8;
using namespace std::placeholders;

namespace mosaic::presentation {
	bool DrawingContext::lock_constructor_ = true;

	DrawingContext::DrawingContext(cairo_t* cairo_context) {
		this->SetCairoContext(cairo_context);
	}

	Local<Object> DrawingContext::FromCairoContext(Local<Context> context, cairo_t* cairo_context) {
		Isolate* isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		// TODO: Cache constructor per context
		Local<Function> constructor = DrawingContext::Init(context);

		DrawingContext::UnlockConstructor();
		Local<Object> instance = constructor->NewInstance(context).ToLocalChecked();
		DrawingContext::LockConstructor();

		DrawingContext* native_instance = new DrawingContext(cairo_context);
		native_instance->Wrap(instance);

		return handle_scope.Escape(instance);
	}

	Local<Function> DrawingContext::Init(Local<Context> context) {
		Isolate* isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "DrawingContext").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		Local<Function> constructor = class_tpl->GetFunction(context).ToLocalChecked();

		return handle_scope.Escape(constructor);
	}

	void DrawingContext::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);

		if (DrawingContext::IsConstructorLocked()) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Unable to instantiate protected class.").ToLocalChecked()
			));
		} else {
			if (args.IsConstructCall()) {
				args.GetReturnValue().Set(args.This());
			} else {
				isolate->ThrowException(Exception::TypeError(
					String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
				));
			}
		}
	}
}