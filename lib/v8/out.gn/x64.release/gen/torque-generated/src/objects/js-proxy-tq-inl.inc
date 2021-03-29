template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::target(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::target(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kTargetOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsNull());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_target(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsNull());
  WRITE_FIELD(*this, kTargetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTargetOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSProxy::handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSProxy<D, P>::handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsNull());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSProxy<D, P>::set_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsNull());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSProxy_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSProxy<D, P>::TorqueGeneratedJSProxy(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSProxy_NonInline(*this));
}
