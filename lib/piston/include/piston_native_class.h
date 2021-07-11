#pragma once

#include <cassert>
#include <v8.h>
using namespace v8;

namespace piston {
	template <class T>
	class NativeClass {
		public:
			Persistent<Object>& GetPersistentHandle() { return persistent_; }

			Local<Object> GetLocalHandle() {
				return GetLocalHandle(Isolate::GetCurrent());
			}

			Local<Object> GetLocalHandle(Isolate* isolate) {
				return Local<Object>::New(isolate, GetPersistentHandle());
			}
			
			static T* Unwrap(Local<Object> handle) { 
				assert(!handle.IsEmpty());
				assert(handle->InternalFieldCount() > 0);

				// Cast to NativeClass before casting to T. A direct cast from void
				// to T won't work right when T has more than one base class.
				void* ptr = handle->GetAlignedPointerFromInternalField(0);

				NativeClass* wrap = static_cast<NativeClass*>(ptr);
				return static_cast<T*>(wrap);
			}

			static Local<Function> GetConstructor(Local<Context> context) {
				Isolate* isolate = context->GetIsolate();
				EscapableHandleScope handle_scope(isolate);
				Local<Function> local_handle;
				Local<Number> context_id_value = Local<Number>::Cast(context->GetEmbedderData(1));
				int context_id = context_id_value->Int32Value(context).ToChecked();

				if (constructors_.contains(context_id)) {
					local_handle = Local<Function>::New(isolate, constructors_[context_id]);
				} else {
					local_handle = T::Make(context);

					Persistent<Function, CopyablePersistentTraits<Function>> persistent_handle(isolate, local_handle);
					constructors_.emplace(context_id, persistent_handle);
				}

				return handle_scope.Escape(local_handle);
			}

			virtual ~NativeClass() {
				Persistent<Object>& persistent = this->GetPersistentHandle();

				if (persistent.IsEmpty()) return;

				persistent.ClearWeak();
				persistent.Reset();
			}

			
		protected:
			void Wrap(Local<Object> handle) {
				Persistent<Object>& persistent = GetPersistentHandle();

				assert(persistent.IsEmpty());
				assert(handle->InternalFieldCount() > 0);

				handle->SetAlignedPointerInInternalField(0, this);
				persistent.Reset(Isolate::GetCurrent(), handle);
			}

			static Local<Function> Make(Local<Context> context) {
				return T::Make(context);
			}

		private:
			Persistent<Object> persistent_;
			static std::unordered_map<int, Persistent<Function, CopyablePersistentTraits<Function>>> constructors_;
	};

	template<class T> std::unordered_map<int, Persistent<Function, CopyablePersistentTraits<Function>>> NativeClass<T>::constructors_;
}