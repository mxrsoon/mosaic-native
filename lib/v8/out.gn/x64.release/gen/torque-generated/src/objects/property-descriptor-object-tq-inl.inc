template <class D, class P>
int TorqueGeneratedPropertyDescriptorObject<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::value() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPropertyDescriptorObject::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::value(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  return value;
}
template <class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::get() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPropertyDescriptorObject::get(isolate);
}
template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::get(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kGetOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  return value;
}
template <class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_get(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  WRITE_FIELD(*this, kGetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::set() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPropertyDescriptorObject::set(isolate);
}
template <class D, class P>
Object TorqueGeneratedPropertyDescriptorObject<D, P>::set(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSetOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  return value;
}
template <class D, class P>
void TorqueGeneratedPropertyDescriptorObject<D, P>::set_set(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined() || value.IsTheHole());
  WRITE_FIELD(*this, kSetOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPropertyDescriptorObject<D, P>::TorqueGeneratedPropertyDescriptorObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPropertyDescriptorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPropertyDescriptorObject<D, P>::TorqueGeneratedPropertyDescriptorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPropertyDescriptorObject_NonInline(*this));
}
