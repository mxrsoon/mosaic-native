inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceDescriptorArrayDescriptors(Isolate* isolate, DescriptorArray p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_uint16_0(Isolate* isolate, uint16_t p_ui);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_DescriptorEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceDescriptorArrayDescriptors
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceDescriptorArrayDescriptors
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceDescriptorArrayDescriptors(Isolate* isolate, DescriptorArray p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uint16_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = (p_o).ReadField<uint16_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_uint16_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 16);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_DescriptorEntry_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceDescriptorArrayDescriptors

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = (p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFromConstexpr_intptr_constexpr_int31_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint16_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint16_0
inline intptr_t TqRuntimeConvert_intptr_uint16_0(Isolate* isolate, uint16_t p_ui) {
  DisallowGarbageCollection no_gc;
  uintptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeUint32ToWord(isolate, p_ui);
  tmp1 = TorqueRuntimeMacroShims::CodeStubAssembler::Signed(isolate, tmp0);
  goto block2;

  block2:
  return tmp1;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint16_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_DescriptorEntry_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_DescriptorEntry_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_DescriptorEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = (std::tuple_cat(std::make_tuple(p_object), std::make_tuple(p_offset), std::make_tuple(p_length), std::tuple_cat()));
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp0), std::make_tuple(tmp1), std::make_tuple(tmp2), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_DescriptorEntry_0

template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::keys(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::keys(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kKeysOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_keys(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kKeysOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kKeysOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedEnumCache::indices(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedEnumCache<D, P>::indices(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kIndicesOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedEnumCache<D, P>::set_indices(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kIndicesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndicesOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedEnumCache<D, P>::TorqueGeneratedEnumCache(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsEnumCache_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedEnumCache<D, P>::TorqueGeneratedEnumCache(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsEnumCache_NonInline(*this));
}
template <class D, class P>
uint16_t TorqueGeneratedDescriptorArray<D, P>::number_of_all_descriptors() const {
  return this->template ReadField<uint16_t>(kNumberOfAllDescriptorsOffset);
}
template <class D, class P>
void TorqueGeneratedDescriptorArray<D, P>::set_number_of_all_descriptors(uint16_t value) {
  this->template WriteField<uint16_t>(kNumberOfAllDescriptorsOffset, value);
}

template <class D, class P>
uint16_t TorqueGeneratedDescriptorArray<D, P>::number_of_descriptors() const {
  return this->template ReadField<uint16_t>(kNumberOfDescriptorsOffset);
}
template <class D, class P>
void TorqueGeneratedDescriptorArray<D, P>::set_number_of_descriptors(uint16_t value) {
  this->template WriteField<uint16_t>(kNumberOfDescriptorsOffset, value);
}

template <class D, class P>
uint16_t TorqueGeneratedDescriptorArray<D, P>::raw_number_of_marked_descriptors() const {
  return this->template ReadField<uint16_t>(kRawNumberOfMarkedDescriptorsOffset);
}
template <class D, class P>
void TorqueGeneratedDescriptorArray<D, P>::set_raw_number_of_marked_descriptors(uint16_t value) {
  this->template WriteField<uint16_t>(kRawNumberOfMarkedDescriptorsOffset, value);
}

template <class D, class P>
uint16_t TorqueGeneratedDescriptorArray<D, P>::filler16_bits() const {
  return this->template ReadField<uint16_t>(kFiller16BitsOffset);
}
template <class D, class P>
void TorqueGeneratedDescriptorArray<D, P>::set_filler16_bits(uint16_t value) {
  this->template WriteField<uint16_t>(kFiller16BitsOffset, value);
}

template <class D, class P>
EnumCache TorqueGeneratedDescriptorArray<D, P>::enum_cache() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedDescriptorArray::enum_cache(isolate);
}
template <class D, class P>
EnumCache TorqueGeneratedDescriptorArray<D, P>::enum_cache(IsolateRoot isolate) const {
  auto value = TaggedField<EnumCache, kEnumCacheOffset>::load(isolate, *this);
  DCHECK(value.IsEnumCache());
  return value;
}
template <class D, class P>
void TorqueGeneratedDescriptorArray<D, P>::set_enum_cache(EnumCache value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsEnumCache());
  WRITE_FIELD(*this, kEnumCacheOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEnumCacheOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedDescriptorArray<D, P>::TorqueGeneratedDescriptorArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsDescriptorArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedDescriptorArray<D, P>::TorqueGeneratedDescriptorArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsDescriptorArray_NonInline(*this));
}
