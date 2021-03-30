#pragma once

#include "v8.h"
#include "piston_native_class.h"
#include "piston_native_module.h"
#include <gtk-3.0/gtk/gtk.h>

using namespace v8;
using namespace piston;

namespace mosaic::presentation {
	class Button : public NativeClass<Button> {
		public:
			/* Native members */
			const char* GetLabel();
			void SetLabel(const char* value);
			inline GtkWidget* GetGtkWidget() { return widget_; };
			
			/* V8 members */
			static Local<Function> Init(Local<Context> context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void GetLabelCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetLabelCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);
			static void GetOnClickCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetOnClickCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);

		protected:
			Button(char* label);
			~Button() {};
			inline void SetGtkWidget(GtkWidget* widget) { widget_ = widget; };
			GtkWidget* widget_;
			Persistent<Function> click_callback_;
	};

	class ButtonModule : public NativeModule<ButtonModule> {
		public:
			Local<Module> Make() override;
		
		protected:
			using NativeModule<ButtonModule>::NativeModule;
	};
}