inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(Isolate* isolate, FeedbackVector p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_int32_0(Isolate* isolate, int32_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots(Isolate* isolate, FeedbackVector p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  int32_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = (p_o).ReadField<int32_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_int32_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 32);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_MaybeObject_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFeedbackVectorRawFeedbackSlots

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
inline intptr_t TqRuntimeConvert_intptr_int32_0(Isolate* isolate, int32_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(isolate, p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0

template <class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::length() const {
  return this->template ReadField<int32_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::invocation_count() const {
  return this->template ReadField<int32_t>(kInvocationCountOffset);
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_invocation_count(int32_t value) {
  this->template WriteField<int32_t>(kInvocationCountOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedFeedbackVector<D, P>::profiler_ticks() const {
  return this->template ReadField<int32_t>(kProfilerTicksOffset);
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_profiler_ticks(int32_t value) {
  this->template WriteField<int32_t>(kProfilerTicksOffset, value);
}

template <class D, class P>
uint32_t TorqueGeneratedFeedbackVector<D, P>::flags() const {
  return this->template ReadField<uint32_t>(kFlagsOffset);
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

template <class D, class P>
SharedFunctionInfo TorqueGeneratedFeedbackVector<D, P>::shared_function_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFeedbackVector::shared_function_info(isolate);
}
template <class D, class P>
SharedFunctionInfo TorqueGeneratedFeedbackVector<D, P>::shared_function_info(IsolateRoot isolate) const {
  auto value = TaggedField<SharedFunctionInfo, kSharedFunctionInfoOffset>::load(isolate, *this);
  DCHECK(value.IsSharedFunctionInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_shared_function_info(SharedFunctionInfo value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

template <class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::maybe_optimized_code() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFeedbackVector::maybe_optimized_code(isolate);
}
template <class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::maybe_optimized_code(IsolateRoot isolate) const {
  auto value = TaggedField<MaybeObject, kMaybeOptimizedCodeOffset>::load(isolate, *this);
  DCHECK(value.IsCleared() || (value.IsWeak() && value.GetHeapObjectOrSmi().IsCode()));
  return value;
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_maybe_optimized_code(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (value.IsWeak() && value.GetHeapObjectOrSmi().IsCode()));
  RELAXED_WRITE_WEAK_FIELD(*this, kMaybeOptimizedCodeOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kMaybeOptimizedCodeOffset, value, mode);
}

template <class D, class P>
ClosureFeedbackCellArray TorqueGeneratedFeedbackVector<D, P>::closure_feedback_cell_array() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFeedbackVector::closure_feedback_cell_array(isolate);
}
template <class D, class P>
ClosureFeedbackCellArray TorqueGeneratedFeedbackVector<D, P>::closure_feedback_cell_array(IsolateRoot isolate) const {
  auto value = TaggedField<ClosureFeedbackCellArray, kClosureFeedbackCellArrayOffset>::load(isolate, *this);
  DCHECK(value.IsClosureFeedbackCellArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_closure_feedback_cell_array(ClosureFeedbackCellArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsClosureFeedbackCellArray());
  WRITE_FIELD(*this, kClosureFeedbackCellArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kClosureFeedbackCellArrayOffset, value, mode);
}

template <class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::raw_feedback_slots(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFeedbackVector::raw_feedback_slots(isolate, i);
}
template <class D, class P>
MaybeObject TorqueGeneratedFeedbackVector<D, P>::raw_feedback_slots(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kRawFeedbackSlotsOffset + i * kTaggedSize;
  auto value = TaggedField<MaybeObject>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}
template <class D, class P>
void TorqueGeneratedFeedbackVector<D, P>::set_raw_feedback_slots(int i, MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kRawFeedbackSlotsOffset + i * kTaggedSize;
  RELAXED_WRITE_WEAK_FIELD(*this, offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFeedbackVector<D, P>::TorqueGeneratedFeedbackVector(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFeedbackVector_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFeedbackVector<D, P>::TorqueGeneratedFeedbackVector(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFeedbackVector_NonInline(*this));
}
