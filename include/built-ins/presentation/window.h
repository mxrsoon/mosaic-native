#pragma once

#include "v8.h"
#include "piston_native_class.h"
#include "piston_native_module.h"
#include <gtk-3.0/gtk/gtk.h>

using namespace v8;
using namespace piston;

namespace mosaic::presentation {
	class Window : public NativeClass<Window> {
		public:
			/* Native members */
			void Show();
			void Close();
			void AddChild(GtkWidget* widget);
			void Invalidate();
			int GetWidth();
			void SetWidth(int value);
			int GetHeight();
			void SetHeight(int value);
			int GetMinWidth();
			void SetMinWidth(int value);
			int GetMinHeight();
			void SetMinHeight(int value);
			bool GetResizable();
			void SetResizable(bool value);
			const char* GetTitle();
			void SetTitle(const char* value);
			inline GtkWidget* GetGtkWidget() { return widget_; };
			
			/* V8 members */
			static Local<Function> Init(Local<Context> context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void ShowCallback(const FunctionCallbackInfo<Value> &args);
			static void CloseCallback(const FunctionCallbackInfo<Value> &args);
			static void AddChildCallback(const FunctionCallbackInfo<Value> &args);
			static void InvalidateCallback(const FunctionCallbackInfo<Value> &args);
			static void GetWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetWidthCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetHeightCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetMinWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetMinWidthCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetMinHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetMinHeightCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetResizableCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetResizableCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetTitleCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetTitleCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetOnResizeCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetOnResizeCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);

		protected:
			Window(char* title, int width, int height);
			~Window() {};
			inline void SetGtkWidget(GtkWidget* widget) { widget_ = widget; };
			GtkWidget* widget_;
			Persistent<Function> resize_callback_;
			int _last_width;
			int _last_height;
	};

	class WindowModule : public NativeModule<WindowModule> {
		public:
			Local<Module> Make() override;
		
		protected:
			using NativeModule<WindowModule>::NativeModule;
	};
}