#pragma once

#include "v8.h"
#include "piston_native_class.h"
#include "piston_native_module.h"

using namespace v8;
using namespace piston;

namespace mosaic::diagnostics {
	class Debug : public NativeClass<Debug> {
		public:
			static void Log();
			static void Log(int argc, char* argv[], bool newLine = true);
			static void Log(char* arg, bool newLine = true);
			static void Error();
			static void Error(int argc, char* argv[], bool newLine = true);
			static void Error(char* arg, bool newLine = true);

			static Local<Function> Init(Local<Context> context);
			static void ConstructorCallback(const FunctionCallbackInfo<Value> &args);
			static void LogCallback(const FunctionCallbackInfo<Value> &args);
			static void ErrorCallback(const FunctionCallbackInfo<Value> &args);

		private:
			Debug() {};
			~Debug() {};
	};

	class DebugModule : public NativeModule<DebugModule> {
		public:
			static Local<Module> Make(Isolate* isolate);

		protected:
			using NativeModule<DebugModule>::NativeModule;
	};
}