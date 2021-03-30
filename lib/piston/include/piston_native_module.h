#pragma once

#include <v8.h>
using namespace v8;

namespace piston {
	template <class T>
	class NativeModule {
		public:
			static Local<Module> Make(Isolate* isolate) {
				return T::Make(context);
			}

		private:
			NativeModule();
			virtual ~NativeModule() = 0;
	};
}