#pragma once

#include <v8.h>
using namespace v8;

namespace piston {
	class NativeModule {
		public:
			NativeModule(Local<Context> context): context_(context) {};
			virtual Local<Module> GetModule() = 0;
			Local<Context> GetContext() { return context_; }

		private:
			Local<Context> context_;
	};
}