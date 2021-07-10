#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/drawing_area.h>
#include <built-ins/presentation/drawing_context.h>
#include <stdio.h>
#include <glib.h>
#include "loader.h"

using namespace v8;
using namespace std::placeholders;

namespace mosaic::presentation {
	DrawingArea::DrawingArea() {
		this->SetGtkWidget(gtk_drawing_area_new());
		gtk_widget_show(this->GetGtkWidget());

		g_signal_connect(this->GetGtkWidget(), "draw", G_CALLBACK(+[](GtkWidget* widget, cairo_t* cairo_context, gpointer user_data) {
			Isolate* isolate = Isolate::GetCurrent();
			HandleScope handle_scope(isolate);
			Local<Context> context = isolate->GetCurrentContext();

			DrawingArea* self = (DrawingArea*)user_data;
			Local<Function> callback = Local<Function>::New(isolate, self->draw_callback_);

			if (!callback.IsEmpty()) {
				Local<Value> args[1];
				args[0] = DrawingContext::FromCairoContext(context, cairo_context);

				callback->Call(context, context->Global(), 1, args);
			}
		}), this);
	}

	int DrawingArea::GetWidth() {
    	return gtk_widget_get_allocated_width(this->GetGtkWidget());
	}

	int DrawingArea::GetHeight() {
    	return gtk_widget_get_allocated_height(this->GetGtkWidget());
	}

	Local<Function> DrawingArea::Init(Local<Context> context) {
		Isolate * isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "DrawingArea").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "width").ToLocalChecked(), GetWidthCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "height").ToLocalChecked(), GetHeightCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "onDraw").ToLocalChecked(), GetOnDrawCallback, SetOnDrawCallback);

		return handle_scope.Escape(class_tpl->GetFunction(context).ToLocalChecked());
	}

	void DrawingArea::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);

		if (args.IsConstructCall()) {
			DrawingArea* instance = new DrawingArea();
			instance->Wrap(args.This());
			args.GetReturnValue().Set(args.This());
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
			));
		}
	}

	void DrawingArea::GetWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		DrawingArea* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetWidth());
		info.GetReturnValue().Set(value);
	}

	void DrawingArea::GetHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		DrawingArea* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetHeight());
		info.GetReturnValue().Set(value);
	}

	void DrawingArea::GetOnDrawCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		DrawingArea* self = NativeClass::Unwrap(info.This());

		Local<Function> callback = Local<Function>::New(isolate, self->draw_callback_);
		info.GetReturnValue().Set(callback);
	}

	void DrawingArea::SetOnDrawCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		DrawingArea* self = NativeClass::Unwrap(info.This());

		if (value->IsFunction()) {
			self->draw_callback_.Reset(isolate, Local<Function>::Cast(value));
		} else if (value->IsNullOrUndefined()) {
			self->draw_callback_.Empty();
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Failed to set callback. It must be a function.").ToLocalChecked()
			));
		}
	}

	Local<Module> DrawingAreaModule::Make(Isolate* isolate) {
		EscapableHandleScope handle_scope(isolate);

		Local<Module> module = Module::CreateSyntheticModule(
			isolate, 
			String::NewFromUtf8(isolate, "DrawingArea").ToLocalChecked(),
			{
				String::NewFromUtf8(isolate, "default").ToLocalChecked(),
				String::NewFromUtf8(isolate, "DrawingArea").ToLocalChecked() ,
				String::NewFromUtf8(isolate, "DrawingContext").ToLocalChecked() 
			},
			[](Local<Context> context, Local<Module> module) -> MaybeLocal<Value> {
				Isolate* isolate = context->GetIsolate();
				HandleScope handle_scope(isolate);

				Local<Function> constructor = DrawingArea::Init(context);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "default").ToLocalChecked(), 
					constructor
				);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "DrawingArea").ToLocalChecked(), 
					constructor
				);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "DrawingContext").ToLocalChecked(), 
					DrawingContext::Init(context)
				);
				
				return MaybeLocal<Value>(True(isolate));
			}
		);

		return handle_scope.Escape(module);
	}
}