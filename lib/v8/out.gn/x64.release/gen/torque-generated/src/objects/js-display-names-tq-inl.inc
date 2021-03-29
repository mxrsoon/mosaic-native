template <class D, class P>
Foreign TorqueGeneratedJSDisplayNames<D, P>::internal() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDisplayNames::internal(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSDisplayNames<D, P>::internal(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kInternalOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDisplayNames<D, P>::set_internal(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kInternalOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInternalOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSDisplayNames<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSDisplayNames<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSDisplayNames<D, P>::TorqueGeneratedJSDisplayNames(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSDisplayNames_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDisplayNames<D, P>::TorqueGeneratedJSDisplayNames(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDisplayNames_NonInline(*this));
}
