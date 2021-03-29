template <class D, class P>
uint32_t TorqueGeneratedName<D, P>::raw_hash_field() const {
  return this->template ReadField<uint32_t>(kRawHashFieldOffset);
}
template <class D, class P>
void TorqueGeneratedName<D, P>::set_raw_hash_field(uint32_t value) {
  this->template WriteField<uint32_t>(kRawHashFieldOffset, value);
}

template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsName_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedName<D, P>::TorqueGeneratedName(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsName_NonInline(*this));
}
template <class D, class P>
uint32_t TorqueGeneratedSymbol<D, P>::flags() const {
  return this->template ReadField<uint32_t>(kFlagsOffset);
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_flags(uint32_t value) {
  this->template WriteField<uint32_t>(kFlagsOffset, value);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSymbol<D, P>::description() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSymbol::description(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSymbol<D, P>::description(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kDescriptionOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedSymbol<D, P>::set_description(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kDescriptionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDescriptionOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSymbol_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSymbol<D, P>::TorqueGeneratedSymbol(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSymbol_NonInline(*this));
}
