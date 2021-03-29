template <class D, class P>
int TorqueGeneratedCachedTemplateObject<D, P>::slot_id() const {
  return TaggedField<Smi, kSlotIdOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_slot_id(int value) {
  WRITE_FIELD(*this, kSlotIdOffset, Smi::FromInt(value));
}

template <class D, class P>
JSArray TorqueGeneratedCachedTemplateObject<D, P>::template_object() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCachedTemplateObject::template_object(isolate);
}
template <class D, class P>
JSArray TorqueGeneratedCachedTemplateObject<D, P>::template_object(IsolateRoot isolate) const {
  auto value = TaggedField<JSArray, kTemplateObjectOffset>::load(isolate, *this);
  DCHECK(value.IsJSArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_template_object(JSArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSArray());
  WRITE_FIELD(*this, kTemplateObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTemplateObjectOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedCachedTemplateObject<D, P>::next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCachedTemplateObject::next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedCachedTemplateObject<D, P>::next(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsTheHole() || value.IsCachedTemplateObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedCachedTemplateObject<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsTheHole() || value.IsCachedTemplateObject());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCachedTemplateObject<D, P>::TorqueGeneratedCachedTemplateObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsCachedTemplateObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCachedTemplateObject<D, P>::TorqueGeneratedCachedTemplateObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCachedTemplateObject_NonInline(*this));
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateObjectDescription::raw_strings(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::raw_strings(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kRawStringsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_raw_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRawStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRawStringsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateObjectDescription::cooked_strings(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedTemplateObjectDescription<D, P>::cooked_strings(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kCookedStringsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateObjectDescription<D, P>::set_cooked_strings(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kCookedStringsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCookedStringsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsTemplateObjectDescription_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateObjectDescription<D, P>::TorqueGeneratedTemplateObjectDescription(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTemplateObjectDescription_NonInline(*this));
}
