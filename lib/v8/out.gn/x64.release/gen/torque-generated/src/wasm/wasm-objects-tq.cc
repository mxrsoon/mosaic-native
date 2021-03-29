#include "src/wasm/wasm-objects-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

bool IsWasmCapiFunctionData_NonInline(HeapObject o) {
  return o.IsWasmCapiFunctionData();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmCapiFunctionData<WasmCapiFunctionData, HeapObject>::WasmCapiFunctionDataVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmCapiFunctionDataVerify(WasmCapiFunctionData::cast(*this), isolate);
}
#endif  // VERIFY_HEAP

bool IsWasmExceptionTag_NonInline(HeapObject o) {
  return o.IsWasmExceptionTag();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmExceptionTag<WasmExceptionTag, Struct>::WasmExceptionTagVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmExceptionTagVerify(WasmExceptionTag::cast(*this), isolate);
}
#endif  // VERIFY_HEAP

bool IsWasmTypeInfo_NonInline(HeapObject o) {
  return o.IsWasmTypeInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmTypeInfo<WasmTypeInfo, Foreign>::WasmTypeInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmTypeInfoVerify(WasmTypeInfo::cast(*this), isolate);
}
#endif  // VERIFY_HEAP

bool IsWasmStruct_NonInline(HeapObject o) {
  return o.IsWasmStruct();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmStruct<WasmStruct, HeapObject>::WasmStructVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmStructVerify(WasmStruct::cast(*this), isolate);
}
#endif  // VERIFY_HEAP

bool IsWasmArray_NonInline(HeapObject o) {
  return o.IsWasmArray();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedWasmArray<WasmArray, HeapObject>::WasmArrayVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::WasmArrayVerify(WasmArray::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
} // namespace v8
} // namespace internal
