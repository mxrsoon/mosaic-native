#include <functional>
#include <v8.h>
#include <gtk-3.0/gtk/gtk.h>
#include <piston_native_class.h>
#include <piston_native_module.h>
#include <built-ins/presentation/window.h>
#include <built-ins/presentation/button.h>
#include <stdio.h>
#include <glib.h>
#include "loader.h"

using namespace v8;
using namespace std::placeholders;

namespace mosaic::presentation {
	Window::Window(char* title, int width, int height) {
		this->SetGtkWidget(gtk_application_window_new(gtk_app));
		gtk_window_set_title(GTK_WINDOW(this->GetGtkWidget()), title);
		gtk_window_set_default_size(GTK_WINDOW(this->GetGtkWidget()), width, height);

		g_signal_connect(this->GetGtkWidget(), "configure-event", G_CALLBACK(+[](GtkWidget* widget, GdkEvent* event, gpointer user_data) {
			Isolate* isolate = Isolate::GetCurrent();
			HandleScope handle_scope(isolate);
			Local<Context> context = isolate->GetCurrentContext();

			Window* self = (Window*)user_data;

			int width = self->GetWidth();
			int height = self->GetHeight();

			if (width != self->_last_width || height != self->_last_height) {
				Local<Function> resize_callback = Local<Function>::New(isolate, self->resize_callback_);

				self->_last_width = width;
				self->_last_height = height;

				if (!resize_callback.IsEmpty()) {
					Local<Value> args[2];
					args[0] = Number::New(isolate, width);
					args[1] = Number::New(isolate, height);

					resize_callback->Call(context, context->Global(), 2, args);
				}
			}
		}), this);
	}

	void Window::Show() {
		gtk_window_present(GTK_WINDOW(this->GetGtkWidget()));
	}

	void Window::Close() {
		gtk_window_close(GTK_WINDOW(this->GetGtkWidget()));
	}
	
	void Window::AddChild(GtkWidget* widget) {
		gtk_container_add(GTK_CONTAINER(widget_), widget);
	}

	void Window::Invalidate() {
		gtk_widget_queue_draw(this->GetGtkWidget());
	}

	int Window::GetWidth() {
    	return gtk_widget_get_allocated_width(this->GetGtkWidget());
	}

	void Window::SetWidth(int value) {
		gtk_window_resize(GTK_WINDOW(this->GetGtkWidget()), value, this->GetHeight());
	}

	int Window::GetHeight() {
    	return gtk_widget_get_allocated_height(this->GetGtkWidget());
	}

	void Window::SetHeight(int value) {
		gtk_window_resize(GTK_WINDOW(this->GetGtkWidget()), this->GetWidth(), value);
	}

	int Window::GetMinWidth() {
		gint requested_width;
		gtk_widget_get_size_request(this->GetGtkWidget(), &requested_width, NULL);
		return requested_width;
	}

	void Window::SetMinWidth(int value) {
		gtk_widget_set_size_request(this->GetGtkWidget(), value, this->GetMinHeight());
	}

	int Window::GetMinHeight() {
		gint requested_height;
		gtk_widget_get_size_request(this->GetGtkWidget(), NULL, &requested_height);
		return requested_height;
	}

	void Window::SetMinHeight(int value) {
		gtk_widget_set_size_request(this->GetGtkWidget(), this->GetMinWidth(), value);
	}

	bool Window::GetResizable() {
		return gtk_window_get_resizable(GTK_WINDOW(this->GetGtkWidget()));
	}

	void Window::SetResizable(bool value) {
		gtk_window_set_resizable(GTK_WINDOW(this->GetGtkWidget()), value);
	}

	const char* Window::GetTitle() {
		return gtk_window_get_title(GTK_WINDOW(this->GetGtkWidget()));
	}

	void Window::SetTitle(const char* value) {
		gtk_window_set_title(GTK_WINDOW(this->GetGtkWidget()), value);
	}

	Local<Function> Window::Init(Local<Context> context) {
		Isolate * isolate = context->GetIsolate();
		EscapableHandleScope handle_scope(isolate);

		Local<FunctionTemplate> class_tpl = FunctionTemplate::New(isolate, ConstructorCallback);
		class_tpl->SetClassName(String::NewFromUtf8(isolate, "Window").ToLocalChecked());
		class_tpl->InstanceTemplate()->SetInternalFieldCount(1);

		Local<FunctionTemplate> show_tpl = FunctionTemplate::New(isolate, ShowCallback);
		Local<FunctionTemplate> add_child_tpl = FunctionTemplate::New(isolate, AddChildCallback);
		Local<FunctionTemplate> invalidate_tpl = FunctionTemplate::New(isolate, InvalidateCallback);

		Local<ObjectTemplate> proto_tpl = class_tpl->PrototypeTemplate();
		proto_tpl->Set(String::NewFromUtf8(isolate, "show").ToLocalChecked(), show_tpl);
		proto_tpl->Set(String::NewFromUtf8(isolate, "close").ToLocalChecked(), show_tpl);
		proto_tpl->Set(String::NewFromUtf8(isolate, "addChild").ToLocalChecked(), add_child_tpl);
		proto_tpl->Set(String::NewFromUtf8(isolate, "invalidate").ToLocalChecked(), invalidate_tpl);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "width").ToLocalChecked(), GetWidthCallback, SetWidthCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "height").ToLocalChecked(), GetHeightCallback, SetHeightCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "minWidth").ToLocalChecked(), GetMinWidthCallback, SetMinWidthCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "minHeight").ToLocalChecked(), GetMinHeightCallback, SetMinHeightCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "resizable").ToLocalChecked(), GetResizableCallback, SetResizableCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "title").ToLocalChecked(), GetTitleCallback, SetTitleCallback);
		proto_tpl->SetAccessor(String::NewFromUtf8(isolate, "onResize").ToLocalChecked(), GetOnResizeCallback, SetOnResizeCallback);

		return handle_scope.Escape(class_tpl->GetFunction(context).ToLocalChecked());
	}

	void Window::ConstructorCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);

		if (args.IsConstructCall()) {
			if (args.Length() < 3) {
				isolate->ThrowException(Exception::TypeError(
					String::NewFromUtf8(isolate, "Failed to construct 'Window': 3 arguments required.").ToLocalChecked()
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
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Please use the 'new' operator, this constructor cannot be called as a function.").ToLocalChecked()
			));
		}
	}

	void Window::ShowCallback(const FunctionCallbackInfo<Value> &args) {
		Window* self = NativeClass::Unwrap(args.This());
		self->Show();
	}

	void Window::CloseCallback(const FunctionCallbackInfo<Value> &args) {
		Window* self = NativeClass::Unwrap(args.This());
		self->Close();
	}

	void Window::AddChildCallback(const FunctionCallbackInfo<Value> &args) {
		Isolate* isolate = args.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(args.This());
		
		if (args.Length() < 1) {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Unable to execute method: 1 argument required.").ToLocalChecked()
			));
		}

		if (args[0]->IsObject()) {
			Local<Object> widget = Local<Object>::Cast(args[0]);
			
			if (!widget.IsEmpty() && widget->InternalFieldCount() > 0) {
				void* ptr = widget->GetAlignedPointerFromInternalField(0);

				// TODO: Generalize widget type
				Button* native_widget = static_cast<Button *>(ptr);
				self->AddChild(native_widget->GetGtkWidget());
			}
		}
	}

	void Window::InvalidateCallback(const FunctionCallbackInfo<Value> &args) {
		Window* self = NativeClass::Unwrap(args.This());
		self->Invalidate();
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

	void Window::GetOnResizeCallback(Local<String> property, const PropertyCallbackInfo<Value>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Window* self = NativeClass::Unwrap(info.This());

		Local<Function> callback = Local<Function>::New(isolate, self->resize_callback_);
		info.GetReturnValue().Set(callback);
	}

	void Window::SetOnResizeCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info) {
		Isolate* isolate = info.GetIsolate();
		HandleScope handle_scope(isolate);
		Local<Context> context = isolate->GetCurrentContext();
		Window* self = NativeClass::Unwrap(info.This());

		if (value->IsFunction()) {
			self->resize_callback_.Reset(isolate, Local<Function>::Cast(value));
		} else {
			isolate->ThrowException(Exception::TypeError(
				String::NewFromUtf8(isolate, "Failed to set callback. It must be a function.").ToLocalChecked()
			));
		}
	}

	Local<Module> WindowModule::Make() {
		Isolate* isolate = this->GetIsolate();
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