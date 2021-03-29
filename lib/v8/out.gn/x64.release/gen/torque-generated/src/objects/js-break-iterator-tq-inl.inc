template <class D, class P>
String TorqueGeneratedJSV8BreakIterator<D, P>::locale() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::locale(isolate);
}
template <class D, class P>
String TorqueGeneratedJSV8BreakIterator<D, P>::locale(IsolateRoot isolate) const {
  auto value = TaggedField<String, kLocaleOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_locale(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kLocaleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocaleOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::break_iterator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::break_iterator(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::break_iterator(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kBreakIteratorOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_break_iterator(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kBreakIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBreakIteratorOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::unicode_string() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::unicode_string(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedJSV8BreakIterator<D, P>::unicode_string(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kUnicodeStringOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_unicode_string(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kUnicodeStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnicodeStringOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_adopt_text() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_adopt_text(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_adopt_text(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundAdoptTextOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_adopt_text(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundAdoptTextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundAdoptTextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_first() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_first(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_first(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundFirstOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_first(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundFirstOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_next(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundNextOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundNextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_current() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_current(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_current(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundCurrentOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_current(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundCurrentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundCurrentOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_break_type() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSV8BreakIterator::bound_break_type(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSV8BreakIterator<D, P>::bound_break_type(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBoundBreakTypeOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSV8BreakIterator<D, P>::set_bound_break_type(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFunction());
  WRITE_FIELD(*this, kBoundBreakTypeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBoundBreakTypeOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSV8BreakIterator<D, P>::TorqueGeneratedJSV8BreakIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSV8BreakIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSV8BreakIterator<D, P>::TorqueGeneratedJSV8BreakIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSV8BreakIterator_NonInline(*this));
}
