#include "src/objects/stack-frame-info-inl.h"

#include "torque-generated/class-verifiers.h"
#include "src/objects/instance-type-inl.h"

namespace v8 {
namespace internal {

bool IsStackFrameInfo_NonInline(HeapObject o) {
  return o.IsStackFrameInfo();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStackFrameInfo<StackFrameInfo, Struct>::StackFrameInfoVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StackFrameInfoVerify(StackFrameInfo::cast(*this), isolate);
}
#endif  // VERIFY_HEAP

bool IsStackTraceFrame_NonInline(HeapObject o) {
  return o.IsStackTraceFrame();
}

#ifdef VERIFY_HEAP

template <>
void TorqueGeneratedStackTraceFrame<StackTraceFrame, Struct>::StackTraceFrameVerify(Isolate* isolate) {
  TorqueGeneratedClassVerifiers::StackTraceFrameVerify(StackTraceFrame::cast(*this), isolate);
}
#endif  // VERIFY_HEAP
} // namespace v8
} // namespace internal
