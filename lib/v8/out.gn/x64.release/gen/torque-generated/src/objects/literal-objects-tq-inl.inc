template <class D, class P>
int TorqueGeneratedArrayBoilerplateDescription<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedArrayBoilerplateDescription::constant_elements(isolate);
}
template <class D, class P>
FixedArrayBase TorqueGeneratedArrayBoilerplateDescription<D, P>::constant_elements(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArrayBase, kConstantElementsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArrayBase());
  return value;
}
template <class D, class P>
void TorqueGeneratedArrayBoilerplateDescription<D, P>::set_constant_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kConstantElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstantElementsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsArrayBoilerplateDescription_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedArrayBoilerplateDescription<D, P>::TorqueGeneratedArrayBoilerplateDescription(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsArrayBoilerplateDescription_NonInline(*this));
}
