template <class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRelativeTimeFormat::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::numberingSystem() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRelativeTimeFormat::numberingSystem(isolate);
}
template <class D, class P>
String TorqueGeneratedJSRelativeTimeFormat<D, P>::numberingSystem(IsolateRoot isolate) const {
  auto value = TaggedField<String, kNumberingSystemOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_numberingSystem(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNumberingSystemOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNumberingSystemOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSRelativeTimeFormat<D, P>::icu_formatter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRelativeTimeFormat::icu_formatter(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSRelativeTimeFormat<D, P>::icu_formatter(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuFormatterOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_icu_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuFormatterOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSRelativeTimeFormat<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSRelativeTimeFormat<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSRelativeTimeFormat<D, P>::TorqueGeneratedJSRelativeTimeFormat(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSRelativeTimeFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRelativeTimeFormat<D, P>::TorqueGeneratedJSRelativeTimeFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSRelativeTimeFormat_NonInline(*this));
}
