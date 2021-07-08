#pragma once

#include "v8.h"
#include "piston_native_class.h"
#include "piston_native_module.h"
#include <gtk-3.0/gtk/gtk.h>

using namespace v8;
using namespace piston;

namespace mosaic::presentation {
	class DrawingContext : public NativeClass<DrawingContext> {
		public:
			/* Native members */
			inline cairo_t* GetCairoContext() { return cairo_context_; };
			void Rect(int x, int y, int width, int height);
			void SetColor(double r, double g, double b);
			void SetColor(double r, double g, double b, double a);
			void Fill();
			
			/* V8 members */
			static Local<Function> Init(Local<Context> context);
			static Local<Object> FromCairoContext(Local<Context> context, cairo_t* cairo_context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void RectCallback(const FunctionCallbackInfo<Value> &args);
			static void SetColorCallback(const FunctionCallbackInfo<Value> &args);
			static void FillCallback(const FunctionCallbackInfo<Value> &args);

		protected:
			DrawingContext(cairo_t* cairo_context);
			~DrawingContext() {};
			inline void SetCairoContext(cairo_t* cairo_context) { cairo_context_ = cairo_context; };
			cairo_t* cairo_context_;

			/* Constructor locking */
			static inline void UnlockConstructor() { lock_constructor_ = false; }
			static inline void LockConstructor() { lock_constructor_ = true; }
			static inline bool IsConstructorLocked() { return lock_constructor_; }
			static bool lock_constructor_;
	};
}