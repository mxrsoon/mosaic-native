template <class D, class P>
int TorqueGeneratedTemplateInfo<D, P>::tag() const {
  return TaggedField<Smi, kTagOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_tag(int value) {
  WRITE_FIELD(*this, kTagOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedTemplateInfo<D, P>::serial_number() const {
  return TaggedField<Smi, kSerialNumberOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_serial_number(int value) {
  WRITE_FIELD(*this, kSerialNumberOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedTemplateInfo<D, P>::number_of_properties() const {
  return TaggedField<Smi, kNumberOfPropertiesOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_number_of_properties(int value) {
  WRITE_FIELD(*this, kNumberOfPropertiesOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedTemplateInfo<D, P>::property_list() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::property_list(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedTemplateInfo<D, P>::property_list(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPropertyListOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsTemplateList());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_property_list(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsTemplateList());
  WRITE_FIELD(*this, kPropertyListOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPropertyListOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedTemplateInfo<D, P>::property_accessors() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedTemplateInfo::property_accessors(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedTemplateInfo<D, P>::property_accessors(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPropertyAccessorsOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsTemplateList());
  return value;
}
template <class D, class P>
void TorqueGeneratedTemplateInfo<D, P>::set_property_accessors(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsTemplateList());
  WRITE_FIELD(*this, kPropertyAccessorsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPropertyAccessorsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedTemplateInfo<D, P>::TorqueGeneratedTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsTemplateInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateInfo<D, P>::TorqueGeneratedTemplateInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTemplateInfo_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_template() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::prototype_template(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_template(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPrototypeTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsObjectTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_prototype_template(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsObjectTemplateInfo());
  WRITE_FIELD(*this, kPrototypeTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeTemplateOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_provider_template() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::prototype_provider_template(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::prototype_provider_template(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPrototypeProviderTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_prototype_provider_template(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  WRITE_FIELD(*this, kPrototypeProviderTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPrototypeProviderTemplateOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::parent_template() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::parent_template(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::parent_template(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kParentTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_parent_template(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  WRITE_FIELD(*this, kParentTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentTemplateOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::named_property_handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::named_property_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::named_property_handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kNamedPropertyHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_named_property_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kNamedPropertyHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedPropertyHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::indexed_property_handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::indexed_property_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::indexed_property_handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kIndexedPropertyHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_indexed_property_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kIndexedPropertyHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedPropertyHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::instance_template() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::instance_template(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::instance_template(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kInstanceTemplateOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsObjectTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_instance_template(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsObjectTemplateInfo());
  WRITE_FIELD(*this, kInstanceTemplateOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceTemplateOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::instance_call_handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::instance_call_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::instance_call_handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kInstanceCallHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallHandlerInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_instance_call_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallHandlerInfo());
  WRITE_FIELD(*this, kInstanceCallHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInstanceCallHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::access_check_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::access_check_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateRareData<D, P>::access_check_info(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kAccessCheckInfoOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsAccessCheckInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_access_check_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsAccessCheckInfo());
  WRITE_FIELD(*this, kAccessCheckInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAccessCheckInfoOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::c_function() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::c_function(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::c_function(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCFunctionOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_c_function(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsForeign());
  WRITE_FIELD(*this, kCFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCFunctionOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::c_signature() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateRareData::c_signature(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateRareData<D, P>::c_signature(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCSignatureOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateRareData<D, P>::set_c_signature(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsForeign());
  WRITE_FIELD(*this, kCSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCSignatureOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFunctionTemplateRareData<D, P>::TorqueGeneratedFunctionTemplateRareData(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFunctionTemplateRareData_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFunctionTemplateRareData<D, P>::TorqueGeneratedFunctionTemplateRareData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFunctionTemplateRareData_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::call_code() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::call_code(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::call_code(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kCallCodeOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallHandlerInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_call_code(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallHandlerInfo());
  WRITE_FIELD(*this, kCallCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallCodeOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::class_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::class_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::class_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kClassNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_class_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kClassNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kClassNameOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::signature() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::signature(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::signature(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kSignatureOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_signature(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  WRITE_FIELD(*this, kSignatureOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSignatureOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::rare_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::rare_data(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::rare_data(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kRareDataOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFunctionTemplateRareData());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_rare_data(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFunctionTemplateRareData());
  WRITE_FIELD(*this, kRareDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRareDataOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::shared_function_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::shared_function_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedFunctionTemplateInfo<D, P>::shared_function_info(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kSharedFunctionInfoOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsSharedFunctionInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_shared_function_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kSharedFunctionInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfoOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedFunctionTemplateInfo<D, P>::flag() const {
  return TaggedField<Smi, kFlagOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_flag(int value) {
  WRITE_FIELD(*this, kFlagOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedFunctionTemplateInfo<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::cached_property_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFunctionTemplateInfo::cached_property_name(isolate);
}
template <class D, class P>
Object TorqueGeneratedFunctionTemplateInfo<D, P>::cached_property_name(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCachedPropertyNameOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedFunctionTemplateInfo<D, P>::set_cached_property_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kCachedPropertyNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCachedPropertyNameOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFunctionTemplateInfo<D, P>::TorqueGeneratedFunctionTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFunctionTemplateInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFunctionTemplateInfo<D, P>::TorqueGeneratedFunctionTemplateInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFunctionTemplateInfo_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedObjectTemplateInfo<D, P>::constructor() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedObjectTemplateInfo::constructor(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedObjectTemplateInfo<D, P>::constructor(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kConstructorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedObjectTemplateInfo<D, P>::set_constructor(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFunctionTemplateInfo());
  WRITE_FIELD(*this, kConstructorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kConstructorOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedObjectTemplateInfo<D, P>::data() const {
  return TaggedField<Smi, kDataOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedObjectTemplateInfo<D, P>::set_data(int value) {
  WRITE_FIELD(*this, kDataOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedObjectTemplateInfo<D, P>::TorqueGeneratedObjectTemplateInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsObjectTemplateInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedObjectTemplateInfo<D, P>::TorqueGeneratedObjectTemplateInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsObjectTemplateInfo_NonInline(*this));
}
