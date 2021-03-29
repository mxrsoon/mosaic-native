template <class D, class P>
Module TorqueGeneratedJSModuleNamespace<D, P>::module() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSModuleNamespace::module(isolate);
}
template <class D, class P>
Module TorqueGeneratedJSModuleNamespace<D, P>::module(IsolateRoot isolate) const {
  auto value = TaggedField<Module, kModuleOffset>::load(isolate, *this);
  DCHECK(value.IsModule());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSModuleNamespace<D, P>::set_module(Module value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsModule());
  WRITE_FIELD(*this, kModuleOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kModuleOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSModuleNamespace<D, P>::TorqueGeneratedJSModuleNamespace(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSModuleNamespace_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSModuleNamespace<D, P>::TorqueGeneratedJSModuleNamespace(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSModuleNamespace_NonInline(*this));
}
