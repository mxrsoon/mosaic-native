template <class D, class P>
Foreign TorqueGeneratedJSCollator<D, P>::icu_collator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollator::icu_collator(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSCollator<D, P>::icu_collator(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuCollatorOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_icu_collator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuCollatorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuCollatorOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSCollator<D, P>::bound_compare() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollator::bound_compare(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSCollator<D, P>::bound_compare(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundCompareOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_bound_compare(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundCompareOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundCompareOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedJSCollator<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollator::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSCollator<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollator<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSCollator<D, P>::TorqueGeneratedJSCollator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSCollator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCollator<D, P>::TorqueGeneratedJSCollator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCollator_NonInline(*this));
}
