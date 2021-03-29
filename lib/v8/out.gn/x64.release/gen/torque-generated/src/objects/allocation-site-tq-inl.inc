template <class D, class P>
AllocationSite TorqueGeneratedAllocationMemento<D, P>::allocation_site() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAllocationMemento::allocation_site(isolate);
}
template <class D, class P>
AllocationSite TorqueGeneratedAllocationMemento<D, P>::allocation_site(IsolateRoot isolate) const {
  auto value = TaggedField<AllocationSite, kAllocationSiteOffset>::load(isolate, *this);
  DCHECK(value.IsAllocationSite());
  return value;
}
template <class D, class P>
void TorqueGeneratedAllocationMemento<D, P>::set_allocation_site(AllocationSite value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsAllocationSite());
  WRITE_FIELD(*this, kAllocationSiteOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAllocationSiteOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAllocationMemento<D, P>::TorqueGeneratedAllocationMemento(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAllocationMemento_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAllocationMemento<D, P>::TorqueGeneratedAllocationMemento(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAllocationMemento_NonInline(*this));
}
