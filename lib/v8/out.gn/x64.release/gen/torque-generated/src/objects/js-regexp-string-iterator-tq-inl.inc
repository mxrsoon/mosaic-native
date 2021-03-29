template <class D, class P>
JSReceiver TorqueGeneratedJSRegExpStringIterator<D, P>::iterating_reg_exp() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExpStringIterator::iterating_reg_exp(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedJSRegExpStringIterator<D, P>::iterating_reg_exp(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kIteratingRegExpOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_iterating_reg_exp(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kIteratingRegExpOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratingRegExpOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedJSRegExpStringIterator<D, P>::iterated_string() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSRegExpStringIterator::iterated_string(isolate);
}
template <class D, class P>
String TorqueGeneratedJSRegExpStringIterator<D, P>::iterated_string(IsolateRoot isolate) const {
  auto value = TaggedField<String, kIteratedStringOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_iterated_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kIteratedStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIteratedStringOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSRegExpStringIterator<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSRegExpStringIterator<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSRegExpStringIterator<D, P>::TorqueGeneratedJSRegExpStringIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSRegExpStringIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSRegExpStringIterator<D, P>::TorqueGeneratedJSRegExpStringIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSRegExpStringIterator_NonInline(*this));
}
