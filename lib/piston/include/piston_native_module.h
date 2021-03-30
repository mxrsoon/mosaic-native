#pragma once

#include <v8.h>
#include <unordered_map>
using namespace v8;

namespace piston {
	class NativeModuleBase {
		public:
			virtual Local<Module> Make() = 0;
			Isolate* GetIsolate() { return isolate_; }

		protected:
			NativeModuleBase(Isolate* isolate): isolate_(isolate) {};

		private:
			Isolate* isolate_;
	};

	template <class T>
	class NativeModule: public NativeModuleBase {
		public:
			static T* GetInstance(Isolate* isolate) {
				if (instances_.contains(isolate)) {
					return instances_[isolate];
				}

				T* instance = new T(isolate);
				instances_[isolate] = instance;
				return instance;
			}

		protected:
			NativeModule(Isolate* isolate): NativeModuleBase(isolate) {};

		private:
			static std::unordered_map<Isolate*, T*> instances_;
	};

	template<class T> std::unordered_map<Isolate*, T*> NativeModule<T>::instances_;
}