#pragma once

#include <cassert>
#include <v8.h>
using namespace v8;

namespace piston {
	template <class T>
	class NativeClass {
		private:
			Persistent<Object> persistent_;

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

			virtual ~NativeClass() {
				Persistent<Object>& persistent = this->GetPersistentHandle();

				if (persistent.IsEmpty()) return;

				persistent.ClearWeak();
				persistent.Reset();
			}

			static Local<Function> Init(Local<Context> context) {
				return T::Init(context);
			}
			
		protected:
			void Wrap(Local<Object> handle) {
				Persistent<Object>& persistent = GetPersistentHandle();

				assert(persistent.IsEmpty());
				assert(handle->InternalFieldCount() > 0);

				handle->SetAlignedPointerInInternalField(0, this);
				persistent.Reset(Isolate::GetCurrent(), handle);
			}
	};
}