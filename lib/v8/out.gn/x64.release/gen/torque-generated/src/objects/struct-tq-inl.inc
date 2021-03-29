template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsStruct_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStruct<D, P>::TorqueGeneratedStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStruct_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::getter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorPair::getter(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::getter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kGetterOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorPair<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::setter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorPair::setter(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorPair<D, P>::setter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSetterOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorPair<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAccessorPair<D, P>::TorqueGeneratedAccessorPair(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAccessorPair_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessorPair<D, P>::TorqueGeneratedAccessorPair(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessorPair_NonInline(*this));
}
template <class D, class P>
int TorqueGeneratedClassPositions<D, P>::start() const {
  return TaggedField<Smi, kStartOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_start(int value) {
  WRITE_FIELD(*this, kStartOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedClassPositions<D, P>::end() const {
  return TaggedField<Smi, kEndOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedClassPositions<D, P>::set_end(int value) {
  WRITE_FIELD(*this, kEndOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedClassPositions<D, P>::TorqueGeneratedClassPositions(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsClassPositions_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedClassPositions<D, P>::TorqueGeneratedClassPositions(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsClassPositions_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value1(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value1(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValue1Offset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value1(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValue1Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue1Offset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTuple2::value2(isolate);
}
template <class D, class P>
Object TorqueGeneratedTuple2<D, P>::value2(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValue2Offset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedTuple2<D, P>::set_value2(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValue2Offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValue2Offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsTuple2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTuple2<D, P>::TorqueGeneratedTuple2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTuple2_NonInline(*this));
}
