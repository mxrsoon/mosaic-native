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
			void Show();
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
			
			static Local<Function> Init(Local<Context> context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void ShowCallback(const FunctionCallbackInfo<Value> &args);
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

		private:
			Window(char* title, int width, int height);
			~Window() {};
			GtkWidget * window_ = nullptr;

			// TODO: Map constructors to contexts
			Persistent<Context> constructor_;
	};

	class WindowModule : public NativeModule<WindowModule> {
		public:
			Local<Module> Make() override;
		
		protected:
			using NativeModule<WindowModule>::NativeModule;
	};
}