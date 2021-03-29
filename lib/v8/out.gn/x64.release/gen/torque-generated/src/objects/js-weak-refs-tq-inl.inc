template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::finalization_registry() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::finalization_registry(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::finalization_registry(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kFinalizationRegistryOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_finalization_registry(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSFinalizationRegistry());
  WRITE_FIELD(*this, kFinalizationRegistryOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFinalizationRegistryOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::target() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::target(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::target(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kTargetOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedWeakCell<D, P>::unregister_token() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::unregister_token(isolate);
}
template <class D, class P>
Object TorqueGeneratedWeakCell<D, P>::unregister_token(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kUnregisterTokenOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_unregister_token(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kUnregisterTokenOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUnregisterTokenOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedWeakCell<D, P>::holdings() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::holdings(isolate);
}
template <class D, class P>
Object TorqueGeneratedWeakCell<D, P>::holdings(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kHoldingsOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_holdings(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kHoldingsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHoldingsOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::prev() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::prev(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::prev(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPrevOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_prev(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kPrevOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrevOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::next(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_prev() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::key_list_prev(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_prev(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kKeyListPrevOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_key_list_prev(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kKeyListPrevOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeyListPrevOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakCell::key_list_next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedWeakCell<D, P>::key_list_next(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kKeyListNextOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsWeakCell());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakCell<D, P>::set_key_list_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsWeakCell());
  WRITE_FIELD(*this, kKeyListNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeyListNextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWeakCell<D, P>::TorqueGeneratedWeakCell(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWeakCell_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWeakCell<D, P>::TorqueGeneratedWeakCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWeakCell_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedJSWeakRef<D, P>::target() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSWeakRef::target(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSWeakRef<D, P>::target(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kTargetOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSWeakRef<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSWeakRef<D, P>::TorqueGeneratedJSWeakRef(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSWeakRef_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSWeakRef<D, P>::TorqueGeneratedJSWeakRef(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSWeakRef_NonInline(*this));
}
