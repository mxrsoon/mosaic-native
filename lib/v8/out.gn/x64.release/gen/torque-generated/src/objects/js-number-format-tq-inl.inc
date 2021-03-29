template <class D, class P>
String TorqueGeneratedJSNumberFormat<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSNumberFormat::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSNumberFormat<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_formatter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSNumberFormat::icu_number_formatter(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSNumberFormat<D, P>::icu_number_formatter(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuNumberFormatterOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_icu_number_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberFormatterOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSNumberFormat<D, P>::bound_format() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSNumberFormat::bound_format(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSNumberFormat<D, P>::bound_format(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundFormatOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSNumberFormat<D, P>::set_bound_format(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFormatOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSNumberFormat<D, P>::TorqueGeneratedJSNumberFormat(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSNumberFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSNumberFormat<D, P>::TorqueGeneratedJSNumberFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSNumberFormat_NonInline(*this));
}
