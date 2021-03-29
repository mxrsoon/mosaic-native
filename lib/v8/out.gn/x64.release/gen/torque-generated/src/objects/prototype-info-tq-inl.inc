template <class D, class P>
HeapObject TorqueGeneratedPrototypeInfo<D, P>::module_namespace() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPrototypeInfo::module_namespace(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPrototypeInfo<D, P>::module_namespace(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kModuleNamespaceOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSModuleNamespace());
  return value;
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_module_namespace(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSModuleNamespace());
  WRITE_FIELD(*this, kModuleNamespaceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kModuleNamespaceOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPrototypeInfo<D, P>::prototype_users() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPrototypeInfo::prototype_users(isolate);
}
template <class D, class P>
Object TorqueGeneratedPrototypeInfo<D, P>::prototype_users(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kPrototypeUsersOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsWeakArrayList());
  return value;
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_prototype_users(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsWeakArrayList());
  WRITE_FIELD(*this, kPrototypeUsersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeUsersOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPrototypeInfo<D, P>::prototype_chain_enum_cache() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPrototypeInfo::prototype_chain_enum_cache(isolate);
}
template <class D, class P>
Object TorqueGeneratedPrototypeInfo<D, P>::prototype_chain_enum_cache(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kPrototypeChainEnumCacheOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsZero());
  return value;
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_prototype_chain_enum_cache(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsZero());
  WRITE_FIELD(*this, kPrototypeChainEnumCacheOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeChainEnumCacheOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedPrototypeInfo<D, P>::registry_slot() const {
  return TaggedField<Smi, kRegistrySlotOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_registry_slot(int value) {
  WRITE_FIELD(*this, kRegistrySlotOffset, Smi::FromInt(value));
}

template <class D, class P>
MaybeObject TorqueGeneratedPrototypeInfo<D, P>::object_create_map() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPrototypeInfo::object_create_map(isolate);
}
template <class D, class P>
MaybeObject TorqueGeneratedPrototypeInfo<D, P>::object_create_map(IsolateRoot isolate) const {
  auto value = TaggedField<MaybeObject, kObjectCreateMapOffset>::load(isolate, *this);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsUndefined()) || (value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()));
  return value;
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_object_create_map(MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsUndefined()) || (value.IsWeak() && value.GetHeapObjectOrSmi().IsMap()));
  RELAXED_WRITE_WEAK_FIELD(*this, kObjectCreateMapOffset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, kObjectCreateMapOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedPrototypeInfo<D, P>::bit_field() const {
  return TaggedField<Smi, kBitFieldOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedPrototypeInfo<D, P>::set_bit_field(int value) {
  WRITE_FIELD(*this, kBitFieldOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedPrototypeInfo<D, P>::TorqueGeneratedPrototypeInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPrototypeInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPrototypeInfo<D, P>::TorqueGeneratedPrototypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPrototypeInfo_NonInline(*this));
}
