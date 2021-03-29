template <class D, class P>
String TorqueGeneratedJSPluralRules<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPluralRules::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSPluralRules<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSPluralRules<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_plural_rules() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPluralRules::icu_plural_rules(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_plural_rules(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuPluralRulesOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_icu_plural_rules(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuPluralRulesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuPluralRulesOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_formatter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPluralRules::icu_number_formatter(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSPluralRules<D, P>::icu_number_formatter(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuNumberFormatterOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPluralRules<D, P>::set_icu_number_formatter(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuNumberFormatterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuNumberFormatterOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSPluralRules<D, P>::TorqueGeneratedJSPluralRules(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSPluralRules_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPluralRules<D, P>::TorqueGeneratedJSPluralRules(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPluralRules_NonInline(*this));
}
