#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/drawing_context.h>
#include <stdio.h>
#include <glib.h>
#include <cairo.h>
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

		Local<FunctionTemplate> rect_tpl = FunctionTemplate::New(isolate, RectCallback);
		Local<FunctionTemplate> set_color_tpl = FunctionTemplate::New(isolate, SetColorCallback);
		Local<FunctionTemplate> fill_tpl = FunctionTemplate::New(isolate, FillCallback);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->Set(String::NewFromUtf8(isolate, "rect").ToLocalChecked(), rect_tpl);
		proto_tpl->Set(String::NewFromUtf8(isolate, "setColor").ToLocalChecked(), set_color_tpl);
		proto_tpl->Set(String::NewFromUtf8(isolate, "fill").ToLocalChecked(), fill_tpl);

		Local<Function> constructor = class_tpl->GetFunction(context).ToLocalChecked();
		return handle_scope.Escape(constructor);
	}

	void DrawingContext::Rect(int x, int y, int width, int height) {
		cairo_t* cr = this->GetCairoContext();
		cairo_rectangle(cr, x, y, width, height);
	}

	void DrawingContext::SetColor(double r, double g, double b) {
		cairo_t* cr = this->GetCairoContext();
		cairo_set_source_rgb(cr, r / 255, g / 255, b / 255);
	}

	void DrawingContext::SetColor(double r, double g, double b, double a) {
		cairo_t* cr = this->GetCairoContext();
		cairo_set_source_rgba(cr, r / 255, g / 255, b / 255, a);
	}

	void DrawingContext::Fill() {
		cairo_t* cr = this->GetCairoContext();
		cairo_fill(cr);
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

	void DrawingContext::RectCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);
		DrawingContext* self = DrawingContext::Unwrap(args.This());

		if (args.Length() < 4) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Unable to execute method: 4 arguments required.").ToLocalChecked()
			));
		}

		int x = args[0]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);
		int y = args[1]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);
		int width = args[2]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);
		int height = args[3]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);

		self->Rect(x, y, width, height);
	}

	void DrawingContext::SetColorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);
		DrawingContext* self = DrawingContext::Unwrap(args.This());

		if (args.Length() < 3) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Unable to execute method: at least 3 arguments required.").ToLocalChecked()
			));
		}

		if (args.Length() == 3) {
			int r = args[0]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);
			int g = args[1]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);
			int b = args[2]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);

			self->SetColor(r, g, b);
		} else if (args.Length() == 4) {
			int r = args[0]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);
			int g = args[1]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);
			int b = args[2]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);
			int a = args[3]->NumberValue(isolate->GetCurrentContext()).FromMaybe(0.0);

			self->SetColor(r, g, b, a);
		}
	}

	void DrawingContext::FillCallback(const FunctionCallbackInfo<Value> &args) {
		DrawingContext* self = DrawingContext::Unwrap(args.This());
		self->Fill();
	}
}