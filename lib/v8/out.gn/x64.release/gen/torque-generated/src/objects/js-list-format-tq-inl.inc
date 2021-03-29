template <class D, class P>
String TorqueGeneratedJSListFormat<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSListFormat::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSListFormat<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSListFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSListFormat<D, P>::icu_formatter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSListFormat::icu_formatter(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSListFormat<D, P>::icu_formatter(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuFormatterOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSListFormat<D, P>::set_icu_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuFormatterOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSListFormat<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSListFormat<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSListFormat<D, P>::TorqueGeneratedJSListFormat(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSListFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSListFormat<D, P>::TorqueGeneratedJSListFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSListFormat_NonInline(*this));
}
