template <class D, class P>
int32_t TorqueGeneratedPreparseData<D, P>::data_length() const {
  return this->template ReadField<int32_t>(kDataLengthOffset);
}
template <class D, class P>
void TorqueGeneratedPreparseData<D, P>::set_data_length(int32_t value) {
  this->template WriteField<int32_t>(kDataLengthOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedPreparseData<D, P>::children_length() const {
  return this->template ReadField<int32_t>(kChildrenLengthOffset);
}
template <class D, class P>
void TorqueGeneratedPreparseData<D, P>::set_children_length(int32_t value) {
  this->template WriteField<int32_t>(kChildrenLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedPreparseData<D, P>::TorqueGeneratedPreparseData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPreparseData<D, P>::TorqueGeneratedPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPreparseData_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::function_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSharedFunctionInfo::function_data(isolate);
}
template <class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::function_data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kFunctionDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kFunctionDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionDataOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::name_or_scope_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSharedFunctionInfo::name_or_scope_info(isolate);
}
template <class D, class P>
Object TorqueGeneratedSharedFunctionInfo<D, P>::name_or_scope_info(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNameOrScopeInfoOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNoSharedNameSentinel() || value.IsScopeInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_name_or_scope_info(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNoSharedNameSentinel() || value.IsScopeInfo());
  WRITE_FIELD(*this, kNameOrScopeInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOrScopeInfoOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::outer_scope_info_or_feedback_metadata() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSharedFunctionInfo::outer_scope_info_or_feedback_metadata(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::outer_scope_info_or_feedback_metadata(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kOuterScopeInfoOrFeedbackMetadataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_outer_scope_info_or_feedback_metadata(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kOuterScopeInfoOrFeedbackMetadataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kOuterScopeInfoOrFeedbackMetadataOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::script_or_debug_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSharedFunctionInfo::script_or_debug_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSharedFunctionInfo<D, P>::script_or_debug_info(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kScriptOrDebugInfoOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsDebugInfo() || value.IsScript());
  return value;
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_script_or_debug_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsDebugInfo() || value.IsScript());
  WRITE_FIELD(*this, kScriptOrDebugInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptOrDebugInfoOffset, value, mode);
}

template <class D, class P>
int16_t TorqueGeneratedSharedFunctionInfo<D, P>::length() const {
  return this->template ReadField<int16_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_length(int16_t value) {
  this->template WriteField<int16_t>(kLengthOffset, value);
}

template <class D, class P>
uint16_t TorqueGeneratedSharedFunctionInfo<D, P>::formal_parameter_count() const {
  return this->template ReadField<uint16_t>(kFormalParameterCountOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_formal_parameter_count(uint16_t value) {
  this->template WriteField<uint16_t>(kFormalParameterCountOffset, value);
}

template <class D, class P>
uint16_t TorqueGeneratedSharedFunctionInfo<D, P>::function_token_offset() const {
  return this->template ReadField<uint16_t>(kFunctionTokenOffsetOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_token_offset(uint16_t value) {
  this->template WriteField<uint16_t>(kFunctionTokenOffsetOffset, value);
}

template <class D, class P>
uint8_t TorqueGeneratedSharedFunctionInfo<D, P>::expected_nof_properties() const {
  return this->template ReadField<uint8_t>(kExpectedNofPropertiesOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_expected_nof_properties(uint8_t value) {
  this->template WriteField<uint8_t>(kExpectedNofPropertiesOffset, value);
}

template <class D, class P>
uint8_t TorqueGeneratedSharedFunctionInfo<D, P>::flags2() const {
  return this->template ReadField<uint8_t>(kFlags2Offset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_flags2(uint8_t value) {
  this->template WriteField<uint8_t>(kFlags2Offset, value);
}

template <class D, class P>
uint32_t TorqueGeneratedSharedFunctionInfo<D, P>::flags() const {
  return this->template ReadField<uint32_t>(kFlagsOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedSharedFunctionInfo<D, P>::function_literal_id() const {
  return this->template ReadField<int32_t>(kFunctionLiteralIdOffset);
}
template <class D, class P>
void TorqueGeneratedSharedFunctionInfo<D, P>::set_function_literal_id(int32_t value) {
  this->template WriteField<int32_t>(kFunctionLiteralIdOffset, value);
}

template<class D, class P>
inline TorqueGeneratedSharedFunctionInfo<D, P>::TorqueGeneratedSharedFunctionInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSharedFunctionInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSharedFunctionInfo<D, P>::TorqueGeneratedSharedFunctionInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSharedFunctionInfo_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedUncompiledData::inferred_name(isolate);
}
template <class D, class P>
String TorqueGeneratedUncompiledData<D, P>::inferred_name(IsolateRoot isolate) const {
  auto value = TaggedField<String, kInferredNameOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_inferred_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kInferredNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInferredNameOffset, value, mode);
}

template <class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::start_position() const {
  return this->template ReadField<int32_t>(kStartPositionOffset);
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_start_position(int32_t value) {
  this->template WriteField<int32_t>(kStartPositionOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedUncompiledData<D, P>::end_position() const {
  return this->template ReadField<int32_t>(kEndPositionOffset);
}
template <class D, class P>
void TorqueGeneratedUncompiledData<D, P>::set_end_position(int32_t value) {
  this->template WriteField<int32_t>(kEndPositionOffset, value);
}

template<class D, class P>
inline TorqueGeneratedUncompiledData<D, P>::TorqueGeneratedUncompiledData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsUncompiledData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledData<D, P>::TorqueGeneratedUncompiledData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithoutPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithoutPreparseData<D, P>::TorqueGeneratedUncompiledDataWithoutPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithoutPreparseData_NonInline(*this));
}
template <class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedUncompiledDataWithPreparseData::preparse_data(isolate);
}
template <class D, class P>
PreparseData TorqueGeneratedUncompiledDataWithPreparseData<D, P>::preparse_data(IsolateRoot isolate) const {
  auto value = TaggedField<PreparseData, kPreparseDataOffset>::load(isolate, *this);
  DCHECK(value.IsPreparseData());
  return value;
}
template <class D, class P>
void TorqueGeneratedUncompiledDataWithPreparseData<D, P>::set_preparse_data(PreparseData value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsPreparseData());
  WRITE_FIELD(*this, kPreparseDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPreparseDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseData<D, P>::TorqueGeneratedUncompiledDataWithPreparseData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsUncompiledDataWithPreparseData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedUncompiledDataWithPreparseData<D, P>::TorqueGeneratedUncompiledDataWithPreparseData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsUncompiledDataWithPreparseData_NonInline(*this));
}
template <class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::block_ids() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::block_ids(isolate);
}
template <class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::block_ids(IsolateRoot isolate) const {
  auto value = TaggedField<ByteArray, kBlockIdsOffset>::load(isolate, *this);
  DCHECK(value.IsByteArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_block_ids(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kBlockIdsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBlockIdsOffset, value, mode);
}

template <class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::counts() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::counts(isolate);
}
template <class D, class P>
ByteArray TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::counts(IsolateRoot isolate) const {
  auto value = TaggedField<ByteArray, kCountsOffset>::load(isolate, *this);
  DCHECK(value.IsByteArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_counts(ByteArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kCountsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCountsOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::name(isolate);
}
template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::name(IsolateRoot isolate) const {
  auto value = TaggedField<String, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::schedule() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::schedule(isolate);
}
template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::schedule(IsolateRoot isolate) const {
  auto value = TaggedField<String, kScheduleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_schedule(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kScheduleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScheduleOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::code() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOnHeapBasicBlockProfilerData::code(isolate);
}
template <class D, class P>
String TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::code(IsolateRoot isolate) const {
  auto value = TaggedField<String, kCodeOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_code(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::hash() const {
  return TaggedField<Smi, kHashOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::set_hash(int value) {
  WRITE_FIELD(*this, kHashOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsOnHeapBasicBlockProfilerData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedOnHeapBasicBlockProfilerData<D, P>::TorqueGeneratedOnHeapBasicBlockProfilerData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsOnHeapBasicBlockProfilerData_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(OnHeapBasicBlockProfilerData)
