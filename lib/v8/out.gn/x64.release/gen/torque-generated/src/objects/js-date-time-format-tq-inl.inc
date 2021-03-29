template <class D, class P>
String TorqueGeneratedJSDateTimeFormat<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDateTimeFormat::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSDateTimeFormat<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_locale(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_locale(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_locale(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_simple_date_format() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_simple_date_format(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_simple_date_format(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuSimpleDateFormatOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_simple_date_format(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuSimpleDateFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuSimpleDateFormatOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_date_interval_format() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDateTimeFormat::icu_date_interval_format(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSDateTimeFormat<D, P>::icu_date_interval_format(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuDateIntervalFormatOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_icu_date_interval_format(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuDateIntervalFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuDateIntervalFormatOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSDateTimeFormat<D, P>::bound_format() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDateTimeFormat::bound_format(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSDateTimeFormat<D, P>::bound_format(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundFormatOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_bound_format(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFormatOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFormatOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSDateTimeFormat<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSDateTimeFormat<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSDateTimeFormat<D, P>::TorqueGeneratedJSDateTimeFormat(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSDateTimeFormat_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDateTimeFormat<D, P>::TorqueGeneratedJSDateTimeFormat(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDateTimeFormat_NonInline(*this));
}
