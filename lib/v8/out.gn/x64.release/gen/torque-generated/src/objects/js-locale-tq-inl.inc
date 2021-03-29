template <class D, class P>
Foreign TorqueGeneratedJSLocale<D, P>::icu_locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSLocale::icu_locale(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSLocale<D, P>::icu_locale(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSLocale<D, P>::set_icu_locale(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuLocaleOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSLocale<D, P>::TorqueGeneratedJSLocale(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSLocale_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSLocale<D, P>::TorqueGeneratedJSLocale(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSLocale_NonInline(*this));
}
