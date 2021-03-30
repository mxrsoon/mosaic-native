#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/window.h>
#include <stdio.h>
#include <glib.h>
#include "loader.h"

using namespace v8;
using namespace std::placeholders;

namespace mosaic::presentation {
	Window::Window(char* title, int width, int height) {

		window_ = gtk_application_window_new(gtk_app);
		gtk_window_set_title(GTK_WINDOW(window_), title);
		gtk_window_set_default_size(GTK_WINDOW(window_), width, height);

		GtkWidget* button;
		button = gtk_button_new_with_label("Click here");
		gtk_container_add(GTK_CONTAINER(window_), button);
		gtk_widget_show(button);

		g_signal_connect(button, "clicked", G_CALLBACK(+[](GtkButton* button, gpointer user_data) {
			Isolate* isolate = Isolate::GetCurrent();
			HandleScope handle_scope(isolate);
			Local<Context> context = isolate->GetCurrentContext();

			Window* self = (Window*)user_data;
			Local<Function> callback = Local<Function>::New(isolate, self->callback_);

			if (!callback.IsEmpty()) {
				callback->Call(context, context->Global(), 0, NULL);
			}
		}), this);
	}

	Local<Function> Window::Init(Local<Context> context) {
		Isolate * isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "Window").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<FunctionTemplate> show_tpl = FunctionTemplate::New(isolate, ShowCallback);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->Set(String::NewFromUtf8(isolate, "show").ToLocalChecked(), show_tpl);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "width").ToLocalChecked(), GetWidthCallback, SetWidthCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "height").ToLocalChecked(), GetHeightCallback, SetHeightCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "minWidth").ToLocalChecked(), GetMinWidthCallback, SetMinWidthCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "minHeight").ToLocalChecked(), GetMinHeightCallback, SetMinHeightCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "resizable").ToLocalChecked(), GetResizableCallback, SetResizableCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "title").ToLocalChecked(), GetTitleCallback, SetTitleCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "onClick").ToLocalChecked(), GetOnClickCallback, SetOnClickCallback);

		return handle_scope.Escape(class_tpl->GetFunction(context).ToLocalChecked());
	}

	void Window::Show() {
		gtk_window_present(GTK_WINDOW(this->window_));
	}

	int Window::GetWidth() {
    	return gtk_widget_get_allocated_width(this->window_);
	}

	void Window::SetWidth(int value) {
		gtk_window_resize(GTK_WINDOW(this->window_), value, this->GetHeight());
	}

	int Window::GetHeight() {
    	return gtk_widget_get_allocated_height(this->window_);
	}

	void Window::SetHeight(int value) {
		gtk_window_resize(GTK_WINDOW(this->window_), this->GetWidth(), value);
	}

	int Window::GetMinWidth() {
		gint requested_width;
		gtk_widget_get_size_request(this->window_, &requested_width, NULL);
		return requested_width;
	}

	void Window::SetMinWidth(int value) {
		gtk_widget_set_size_request(this->window_, value, this->GetMinHeight());
	}

	int Window::GetMinHeight() {
		gint requested_height;
		gtk_widget_get_size_request(this->window_, NULL, &requested_height);
		return requested_height;
	}

	void Window::SetMinHeight(int value) {
		gtk_widget_set_size_request(this->window_, this->GetMinWidth(), value);
	}

	bool Window::GetResizable() {
		return gtk_window_get_resizable(GTK_WINDOW(this->window_));
	}

	void Window::SetResizable(bool value) {
		gtk_window_set_resizable(GTK_WINDOW(this->window_), value);
	}

	const char* Window::GetTitle() {
		return gtk_window_get_title(GTK_WINDOW(this->window_));
	}

	void Window::SetTitle(const char* value) {
		gtk_window_set_title(GTK_WINDOW(this->window_), value);
	}

	void Window::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);

		if (args.IsConstructCall()) {
			if (args.Length() < 3) {
				isolate->ThrowException(Exception::TypeError(
					String::NewFromUtf8(isolate, "Failed to construct 'Window': 3 argument required.").ToLocalChecked()
				));
			}

			String::Utf8Value title(isolate, args[0]);
			char* title_str = *title;
			int width = args[1]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);
			int height = args[2]->Int32Value(isolate->GetCurrentContext()).FromMaybe(0);

			Window* instance = new Window(title_str, width, height);
			instance->Wrap(args.This());
			args.GetReturnValue().Set(args.This());
		} else {
			Isolate * isolate = args.GetIsolate();
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
			));
		}
	}

	void Window::GetWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetWidth());
		info.GetReturnValue().Set(value);
	}

	void Window::SetWidthCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsInt32()) {
			self->SetWidth(value->Int32Value(context).FromMaybe(0));
		}
	}

	void Window::GetHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetHeight());
		info.GetReturnValue().Set(value);
	}

	void Window::SetHeightCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsInt32()) {
			self->SetHeight(value->Int32Value(context).FromMaybe(0));
		}
	}

	void Window::GetMinWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetMinWidth());
		info.GetReturnValue().Set(value);
	}

	void Window::SetMinWidthCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsInt32()) {
			self->SetMinWidth(value->Int32Value(context).FromMaybe(0));
		}
	}

	void Window::GetMinHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Number> value = Number::New(isolate, self->GetMinHeight());
		info.GetReturnValue().Set(value);
	}

	void Window::SetMinHeightCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsInt32()) {
			self->SetMinHeight(value->Int32Value(context).FromMaybe(0));
		}
	}

	void Window::GetResizableCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Boolean> value = Boolean::New(isolate, self->GetResizable());
		info.GetReturnValue().Set(value);
	}

	void Window::SetResizableCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsBoolean()) {
			self->SetResizable(value->BooleanValue(isolate));
		}
	}

	void Window::GetTitleCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<String> value = String::NewFromUtf8(isolate, self->GetTitle()).ToLocalChecked();
		info.GetReturnValue().Set(value);
	}

	void Window::SetTitleCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsString()) {
			String::Utf8Value str(isolate, value);
			self->SetTitle(*str);
		}
	}

	void Window::ShowCallback(const FunctionCallbackInfo<Value> &args) {
		Window* self = NativeClass::Unwrap(args.Holder());
		self->Show();
	}

	void Window::GetOnClickCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Function> callback = Local<Function>::New(isolate, self->callback_);
		info.GetReturnValue().Set(callback);
	}

	void Window::SetOnClickCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsFunction()) {
			self->callback_.Reset(isolate, Local<Function>::Cast(value));
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Failed to set callback. It must be a function.").ToLocalChecked()
			));
		}
	}

	Local<Module> WindowModule::GetModule() {
		if (!this->module_.IsEmpty()) {
			return this->module_;
		}

		Isolate* isolate = this->GetContext()->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<Module> module = Module::CreateSyntheticModule(
			isolate, 
			String::NewFromUtf8(isolate, "Window").ToLocalChecked(),
			{
				String::NewFromUtf8(isolate, "default").ToLocalChecked(),
				String::NewFromUtf8(isolate, "Window").ToLocalChecked() 
			},
			[](Local<Context> context, Local<Module> module) -> MaybeLocal<Value> {
				Isolate* isolate = context->GetIsolate();
				HandleScope handle_scope(isolate);

				Local<Function> constructor = Window::Init(context);

				module->SetSyntheticModuleExport(
					String::NewFromUtf8(isolate, "default").ToLocalChecked(), 
					constructor
				);

				module->SetSyntheticModuleExport(
					String::NewFromUtf8(isolate, "Window").ToLocalChecked(), 
					constructor
				);
				
				return MaybeLocal<Value>(True(isolate));
			}
		);

		return handle_scope.Escape(module);
	}
}