template <class D, class P>
String TorqueGeneratedJSSegmenter<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSSegmenter::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSSegmenter<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSSegmenter<D, P>::icu_break_iterator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSSegmenter::icu_break_iterator(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSSegmenter<D, P>::icu_break_iterator(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuBreakIteratorOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_icu_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuBreakIteratorOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSSegmenter<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSSegmenter<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSSegmenter<D, P>::TorqueGeneratedJSSegmenter(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSSegmenter_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSegmenter<D, P>::TorqueGeneratedJSSegmenter(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSegmenter_NonInline(*this));
}
