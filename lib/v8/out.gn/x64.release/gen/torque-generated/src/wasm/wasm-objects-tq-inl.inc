template <class D, class P>
Address TorqueGeneratedWasmCapiFunctionData<D, P>::call_target() const {
  return this->template ReadField<Address>(kCallTargetOffset);
}
template <class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_call_target(Address value) {
  this->template WriteField<Address>(kCallTargetOffset, value);
}

template <class D, class P>
Foreign TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmCapiFunctionData::embedder_data(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedWasmCapiFunctionData<D, P>::embedder_data(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kEmbedderDataOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_embedder_data(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEmbedderDataOffset, value, mode);
}

template <class D, class P>
Code TorqueGeneratedWasmCapiFunctionData<D, P>::wrapper_code() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmCapiFunctionData::wrapper_code(isolate);
}
template <class D, class P>
Code TorqueGeneratedWasmCapiFunctionData<D, P>::wrapper_code(IsolateRoot isolate) const {
  auto value = TaggedField<Code, kWrapperCodeOffset>::load(isolate, *this);
  DCHECK(value.IsCode());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_wrapper_code(Code value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCode());
  WRITE_FIELD(*this, kWrapperCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWrapperCodeOffset, value, mode);
}

template <class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmCapiFunctionData::serialized_signature(isolate);
}
template <class D, class P>
PodArray<wasm::ValueType> TorqueGeneratedWasmCapiFunctionData<D, P>::serialized_signature(IsolateRoot isolate) const {
  auto value = TaggedField<PodArray<wasm::ValueType>, kSerializedSignatureOffset>::load(isolate, *this);
  DCHECK(value.IsByteArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmCapiFunctionData<D, P>::set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsByteArray());
  WRITE_FIELD(*this, kSerializedSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSerializedSignatureOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWasmCapiFunctionData<D, P>::TorqueGeneratedWasmCapiFunctionData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmCapiFunctionData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmCapiFunctionData<D, P>::TorqueGeneratedWasmCapiFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmCapiFunctionData_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(WasmCapiFunctionData)
template <class D, class P>
int TorqueGeneratedWasmExceptionTag<D, P>::index() const {
  return TaggedField<Smi, kIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedWasmExceptionTag<D, P>::set_index(int value) {
  WRITE_FIELD(*this, kIndexOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmExceptionTag_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmExceptionTag<D, P>::TorqueGeneratedWasmExceptionTag(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmExceptionTag_NonInline(*this));
}
template <class D, class P>
Map TorqueGeneratedWasmTypeInfo<D, P>::parent() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmTypeInfo::parent(isolate);
}
template <class D, class P>
Map TorqueGeneratedWasmTypeInfo<D, P>::parent(IsolateRoot isolate) const {
  auto value = TaggedField<Map, kParentOffset>::load(isolate, *this);
  DCHECK(value.IsMap());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_parent(Map value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsMap());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedWasmTypeInfo<D, P>::supertypes() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmTypeInfo::supertypes(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedWasmTypeInfo<D, P>::supertypes(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kSupertypesOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_supertypes(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kSupertypesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSupertypesOffset, value, mode);
}

template <class D, class P>
ArrayList TorqueGeneratedWasmTypeInfo<D, P>::subtypes() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWasmTypeInfo::subtypes(isolate);
}
template <class D, class P>
ArrayList TorqueGeneratedWasmTypeInfo<D, P>::subtypes(IsolateRoot isolate) const {
  auto value = TaggedField<ArrayList, kSubtypesOffset>::load(isolate, *this);
  DCHECK(value.IsArrayList());
  return value;
}
template <class D, class P>
void TorqueGeneratedWasmTypeInfo<D, P>::set_subtypes(ArrayList value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsArrayList());
  WRITE_FIELD(*this, kSubtypesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSubtypesOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWasmTypeInfo<D, P>::TorqueGeneratedWasmTypeInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmTypeInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmTypeInfo<D, P>::TorqueGeneratedWasmTypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmTypeInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmStruct<D, P>::TorqueGeneratedWasmStruct(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmStruct_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmStruct<D, P>::TorqueGeneratedWasmStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmStruct_NonInline(*this));
}
template <class D, class P>
uint32_t TorqueGeneratedWasmArray<D, P>::length() const {
  return this->template ReadField<uint32_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedWasmArray<D, P>::set_length(uint32_t value) {
  this->template WriteField<uint32_t>(kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedWasmArray<D, P>::TorqueGeneratedWasmArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWasmArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWasmArray<D, P>::TorqueGeneratedWasmArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWasmArray_NonInline(*this));
}
