template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollectionIterator::table(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::table(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kTableOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_table(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kTableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTableOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSCollectionIterator::index(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSCollectionIterator<D, P>::index(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kIndexOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSCollectionIterator<D, P>::set_index(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kIndexOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSCollectionIterator<D, P>::TorqueGeneratedJSCollectionIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSCollectionIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCollectionIterator<D, P>::TorqueGeneratedJSCollectionIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCollectionIterator_NonInline(*this));
}
