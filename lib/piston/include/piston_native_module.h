#pragma once

#include <v8.h>
#include <unordered_map>
using namespace v8;

namespace piston {
	template <class T>
	class NativeModule {
		public:
			static Local<Module> GetInstance(Isolate* isolate) {
				EscapableHandleScope handle_scope(isolate);
				Local<Module> local_handle;

				if (instances_.contains(isolate)) {
					local_handle = Local<Module>::New(isolate, instances_[isolate]);
				} else {
					local_handle = T::Make(isolate);

					Persistent<Module, CopyablePersistentTraits<Module>> persistent_handle(isolate, local_handle);
					instances_.emplace(isolate, persistent_handle);
				}

				return handle_scope.Escape(local_handle);
			}

		protected:
			static Local<Module> Make(Isolate* isolate) {
				T::Make(isolate);
			}

		private:
			NativeModule();
			~NativeModule();
			static std::unordered_map<Isolate*, Persistent<Module, CopyablePersistentTraits<Module>>> instances_;
	};

	template<class T> std::unordered_map<Isolate*, Persistent<Module, CopyablePersistentTraits<Module>>> NativeModule<T>::instances_;
}