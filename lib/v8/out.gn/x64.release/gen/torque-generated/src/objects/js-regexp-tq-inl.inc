template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::data(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSRegExp<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_data(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedJSRegExp<D, P>::source() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::source(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedJSRegExp<D, P>::source(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kSourceOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_source(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExp::flags(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSRegExp<D, P>::flags(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kFlagsOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExp<D, P>::set_flags(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSmi());
  WRITE_FIELD(*this, kFlagsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFlagsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSRegExp_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExp<D, P>::TorqueGeneratedJSRegExp(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSRegExp_NonInline(*this));
}
