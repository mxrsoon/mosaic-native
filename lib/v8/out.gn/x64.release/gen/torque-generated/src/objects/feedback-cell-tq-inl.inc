template <class D, class P>
HeapObject TorqueGeneratedFeedbackCell<D, P>::value() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFeedbackCell::value(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFeedbackCell<D, P>::value(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsFeedbackVector());
  return value;
}
template <class D, class P>
void TorqueGeneratedFeedbackCell<D, P>::set_value(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsFeedbackVector());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
int32_t TorqueGeneratedFeedbackCell<D, P>::interrupt_budget() const {
  return this->template ReadField<int32_t>(kInterruptBudgetOffset);
}
template <class D, class P>
void TorqueGeneratedFeedbackCell<D, P>::set_interrupt_budget(int32_t value) {
  this->template WriteField<int32_t>(kInterruptBudgetOffset, value);
}

template<class D, class P>
inline TorqueGeneratedFeedbackCell<D, P>::TorqueGeneratedFeedbackCell(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFeedbackCell_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFeedbackCell<D, P>::TorqueGeneratedFeedbackCell(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFeedbackCell_NonInline(*this));
}
