#pragma once

#include "v8.h"
#include "piston_native_class.h"
#include "piston_native_module.h"
#include <gtk-3.0/gtk/gtk.h>

using namespace v8;
using namespace piston;

namespace mosaic::presentation {
	class DrawingArea : public NativeClass<DrawingArea> {
		public:
			/* Native members */
			int GetWidth();
			int GetHeight();
			inline GtkWidget* GetGtkWidget() { return widget_; };
			
			/* V8 members */
			static Local<Function> Init(Local<Context> context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void GetWidthCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void GetHeightCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void GetOnDrawCallback(Local<String> property, const PropertyCallbackInfo<Value>& info);
			static void SetOnDrawCallback(Local<String> property, Local<Value> value, const PropertyCallbackInfo<void>& info);

		protected:
			DrawingArea();
			~DrawingArea() {};
			inline void SetGtkWidget(GtkWidget* widget) { widget_ = widget; };
			GtkWidget* widget_;
			Persistent<Function> draw_callback_;
	};

	class DrawingAreaModule : public NativeModule<DrawingAreaModule> {
		public:
			Local<Module> Make() override;
		
		protected:
			using NativeModule<DrawingAreaModule>::NativeModule;
	};
}