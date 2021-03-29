inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceCoverageInfoSlots(Isolate* isolate, CoverageInfo p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_int32_0(Isolate* isolate, int32_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_CoverageInfoSlot_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceCoverageInfoSlots
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceCoverageInfoSlots
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceCoverageInfoSlots(Isolate* isolate, CoverageInfo p_o) {
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
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_CoverageInfoSlot_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceCoverageInfoSlots

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_CoverageInfoSlot_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_CoverageInfoSlot_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_CoverageInfoSlot_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_CoverageInfoSlot_0

template <class D, class P>
int TorqueGeneratedBreakPoint<D, P>::id() const {
  return TaggedField<Smi, kIdOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedBreakPoint<D, P>::set_id(int value) {
  WRITE_FIELD(*this, kIdOffset, Smi::FromInt(value));
}

template <class D, class P>
String TorqueGeneratedBreakPoint<D, P>::condition() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedBreakPoint::condition(isolate);
}
template <class D, class P>
String TorqueGeneratedBreakPoint<D, P>::condition(IsolateRoot isolate) const {
  auto value = TaggedField<String, kConditionOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedBreakPoint<D, P>::set_condition(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kConditionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConditionOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedBreakPoint<D, P>::TorqueGeneratedBreakPoint(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsBreakPoint_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedBreakPoint<D, P>::TorqueGeneratedBreakPoint(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsBreakPoint_NonInline(*this));
}
template <class D, class P>
int TorqueGeneratedBreakPointInfo<D, P>::source_position() const {
  return TaggedField<Smi, kSourcePositionOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedBreakPointInfo<D, P>::set_source_position(int value) {
  WRITE_FIELD(*this, kSourcePositionOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedBreakPointInfo<D, P>::break_points() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedBreakPointInfo::break_points(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedBreakPointInfo<D, P>::break_points(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBreakPointsOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsBreakPoint());
  return value;
}
template <class D, class P>
void TorqueGeneratedBreakPointInfo<D, P>::set_break_points(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsBreakPoint());
  WRITE_FIELD(*this, kBreakPointsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBreakPointsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedBreakPointInfo<D, P>::TorqueGeneratedBreakPointInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsBreakPointInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedBreakPointInfo<D, P>::TorqueGeneratedBreakPointInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsBreakPointInfo_NonInline(*this));
}
template <class D, class P>
SharedFunctionInfo TorqueGeneratedDebugInfo<D, P>::shared() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::shared(isolate);
}
template <class D, class P>
SharedFunctionInfo TorqueGeneratedDebugInfo<D, P>::shared(IsolateRoot isolate) const {
  auto value = TaggedField<SharedFunctionInfo, kSharedOffset>::load(isolate, *this);
  DCHECK(value.IsSharedFunctionInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_shared(SharedFunctionInfo value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedDebugInfo<D, P>::debugger_hints() const {
  return TaggedField<Smi, kDebuggerHintsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_debugger_hints(int value) {
  WRITE_FIELD(*this, kDebuggerHintsOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::script() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::script(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::script(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kScriptOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsScript());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_script(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsScript());
  WRITE_FIELD(*this, kScriptOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::original_bytecode_array() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::original_bytecode_array(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::original_bytecode_array(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kOriginalBytecodeArrayOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsBytecodeArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_original_bytecode_array(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsBytecodeArray());
  WRITE_FIELD(*this, kOriginalBytecodeArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kOriginalBytecodeArrayOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::debug_bytecode_array() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::debug_bytecode_array(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::debug_bytecode_array(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kDebugBytecodeArrayOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsBytecodeArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_debug_bytecode_array(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsBytecodeArray());
  WRITE_FIELD(*this, kDebugBytecodeArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDebugBytecodeArrayOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedDebugInfo<D, P>::break_points() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::break_points(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedDebugInfo<D, P>::break_points(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kBreakPointsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_break_points(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kBreakPointsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBreakPointsOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedDebugInfo<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::coverage_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDebugInfo::coverage_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedDebugInfo<D, P>::coverage_info(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kCoverageInfoOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCoverageInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedDebugInfo<D, P>::set_coverage_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCoverageInfo());
  WRITE_FIELD(*this, kCoverageInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCoverageInfoOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedDebugInfo<D, P>::TorqueGeneratedDebugInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsDebugInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedDebugInfo<D, P>::TorqueGeneratedDebugInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsDebugInfo_NonInline(*this));
}
template <class D, class P>
int32_t TorqueGeneratedCoverageInfo<D, P>::slot_count() const {
  return this->template ReadField<int32_t>(kSlotCountOffset);
}
template <class D, class P>
void TorqueGeneratedCoverageInfo<D, P>::set_slot_count(int32_t value) {
  this->template WriteField<int32_t>(kSlotCountOffset, value);
}

template<class D, class P>
inline TorqueGeneratedCoverageInfo<D, P>::TorqueGeneratedCoverageInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsCoverageInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCoverageInfo<D, P>::TorqueGeneratedCoverageInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCoverageInfo_NonInline(*this));
}
template <class D, class P>
int TorqueGeneratedWasmValue<D, P>::value_type() const {
  return TaggedField<Smi, kValueTypeOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedWasmValue<D, P>::set_value_type(int value) {
  WRITE_FIELD(*this, kValueTypeOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedWasmValue<D, P>::bytes_or_ref() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmValue::bytes_or_ref(isolate);
}
template <class D, class P>
Object TorqueGeneratedWasmValue<D, P>::bytes_or_ref(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kBytesOrRefOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmValue<D, P>::set_bytes_or_ref(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kBytesOrRefOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBytesOrRefOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWasmValue<D, P>::TorqueGeneratedWasmValue(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmValue_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmValue<D, P>::TorqueGeneratedWasmValue(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmValue_NonInline(*this));
}
