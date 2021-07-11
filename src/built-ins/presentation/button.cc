#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/button.h>
#include <stdio.h>
#include <glib.h>
#include "loader.h"

using namespace v8;
using namespace std::placeholders;

namespace mosaic::presentation {
	Button::Button(char* label = "") {
		this->SetGtkWidget(gtk_button_new_with_label(label));
		gtk_widget_show(this->GetGtkWidget());

		g_signal_connect(this->GetGtkWidget(), "clicked", G_CALLBACK(+[](GtkButton* button, gpointer user_data) {
			Isolate* isolate = Isolate::GetCurrent();
			HandleScope handle_scope(isolate);
			Local<Context> context = isolate->GetCurrentContext();

			Button* self = (Button*)user_data;
			Local<Function> callback = Local<Function>::New(isolate, self->click_callback_);

			if (!callback.IsEmpty()) {
				callback->Call(context, context->Global(), 0, NULL);
			}
		}), this);
	}

	const char* Button::GetLabel() {
		return gtk_button_get_label(GTK_BUTTON(this->GetGtkWidget()));
	}

	void Button::SetLabel(const char* value) {
		gtk_button_set_label(GTK_BUTTON(this->GetGtkWidget()), value);
	}

	Local<Function> Button::Make(Local<Context> context) {
		Isolate * isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "Button").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "title").ToLocalChecked(), GetLabelCallback, SetLabelCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "onClick").ToLocalChecked(), GetOnClickCallback, SetOnClickCallback);

		return handle_scope.Escape(class_tpl->GetFunction(context).ToLocalChecked());
	}

	void Button::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);

		if (args.IsConstructCall()) {
			if (args.Length() < 1) {
				isolate->ThrowException(Exception::TypeError(
					String::NewFromUtf8(isolate, "Failed to construct 'Button': 1 argument required.").ToLocalChecked()
				));
			}

			String::Utf8Value label(isolate, args[0]);
			char* label_str = *label;

			Button* instance = new Button(label_str);
			instance->Wrap(args.This());
			args.GetReturnValue().Set(args.This());
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
			));
		}
	}

	void Button::GetLabelCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Button* self = NativeClass::Unwrap(info.This());

		Local<String> value = String::NewFromUtf8(isolate, self->GetLabel()).ToLocalChecked();
		info.GetReturnValue().Set(value);
	}

	void Button::SetLabelCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Button* self = NativeClass::Unwrap(info.This());

		if (value->IsString()) {
			String::Utf8Value str(isolate, value);
			self->SetLabel(*str);
		}
	}

	void Button::GetOnClickCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Button* self = NativeClass::Unwrap(info.This());

		Local<Function> callback = Local<Function>::New(isolate, self->click_callback_);
		info.GetReturnValue().Set(callback);
	}

	void Button::SetOnClickCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Button* self = NativeClass::Unwrap(info.This());

		if (value->IsFunction()) {
			self->click_callback_.Reset(isolate, Local<Function>::Cast(value));
		} else if (value->IsNullOrUndefined()) {
			self->click_callback_.Empty();
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Failed to set callback. It must be a function.").ToLocalChecked()
			));
		}
	}

	Local<Module> ButtonModule::Make(Isolate* isolate) {
		EscapableHandleScope handle_scope(isolate);

		Local<Module> module = Module::CreateSyntheticModule(
			isolate, 
			String::NewFromUtf8(isolate, "Button").ToLocalChecked(),
			{
				String::NewFromUtf8(isolate, "default").ToLocalChecked(),
				String::NewFromUtf8(isolate, "Button").ToLocalChecked() 
			},
			[](Local<Context> context, Local<Module> module) -> MaybeLocal<Value> {
				Isolate* isolate = context->GetIsolate();
				HandleScope handle_scope(isolate);

				Local<Function> constructor = Button::GetConstructor(context);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "default").ToLocalChecked(), 
					constructor
				);

				module->SetSyntheticModuleExport(
					isolate,
					String::NewFromUtf8(isolate, "Button").ToLocalChecked(), 
					constructor
				);
				
				return MaybeLocal<Value>(True(isolate));
			}
		);

		return handle_scope.Escape(module);
	}
}