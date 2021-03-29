template <class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::icu_break_iterator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSSegments::icu_break_iterator(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::icu_break_iterator(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kIcuBreakIteratorOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_icu_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kIcuBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIcuBreakIteratorOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::unicode_string() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSSegments::unicode_string(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSSegments<D, P>::unicode_string(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kUnicodeStringOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_unicode_string(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kUnicodeStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnicodeStringOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSSegments<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSSegments<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSSegments<D, P>::TorqueGeneratedJSSegments(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSSegments_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSegments<D, P>::TorqueGeneratedJSSegments(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSegments_NonInline(*this));
}
