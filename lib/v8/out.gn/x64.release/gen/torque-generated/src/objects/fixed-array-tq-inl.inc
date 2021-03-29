inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFixedArrayObjects(Isolate* isolate, FixedArray p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceByteArrayBytes(Isolate* isolate, ByteArray p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWeakFixedArrayObjects(Isolate* isolate, WeakFixedArray p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFixedDoubleArrayFloats(Isolate* isolate, FixedDoubleArray p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWeakArrayListObjects(Isolate* isolate, WeakArrayList p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Isolate* isolate, Smi p_s);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Object_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_uint8_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_float64_or_hole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedArrayObjects
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedArrayObjects
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFixedArrayObjects(Isolate* isolate, FixedArray p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Smi tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_Object_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedArrayObjects

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceByteArrayBytes
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceByteArrayBytes
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceByteArrayBytes(Isolate* isolate, ByteArray p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Smi tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceByteArrayBytes

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakFixedArrayObjects
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakFixedArrayObjects
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWeakFixedArrayObjects(Isolate* isolate, WeakFixedArray p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Smi tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_MaybeObject_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakFixedArrayObjects

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedDoubleArrayFloats
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedDoubleArrayFloats
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceFixedDoubleArrayFloats(Isolate* isolate, FixedDoubleArray p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Smi tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_float64_or_hole_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceFixedDoubleArrayFloats

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakArrayListObjects
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakArrayListObjects
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceWeakArrayListObjects(Isolate* isolate, WeakArrayList p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  Smi tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_MaybeObject_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceWeakArrayListObjects

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Isolate* isolate, Smi p_s) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::SmiUntag(isolate, p_s);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Object_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Object_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_uint8_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_uint8_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_uint8_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_uint8_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_MaybeObject_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_MaybeObject_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_float64_or_hole_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_float64_or_hole_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_float64_or_hole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_float64_or_hole_0

template <class D, class P>
int TorqueGeneratedFixedArrayBase<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedFixedArrayBase<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedFixedArrayBase<D, P>::TorqueGeneratedFixedArrayBase(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFixedArrayBase_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFixedArrayBase<D, P>::TorqueGeneratedFixedArrayBase(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFixedArrayBase_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedFixedArray<D, P>::objects(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedFixedArray::objects(isolate, i);
}
template <class D, class P>
Object TorqueGeneratedFixedArray<D, P>::objects(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kObjectsOffset + i * kTaggedSize;
  auto value = TaggedField<Object>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedFixedArray<D, P>::set_objects(int i, Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kObjectsOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedFixedArray<D, P>::TorqueGeneratedFixedArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFixedArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFixedArray<D, P>::TorqueGeneratedFixedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFixedArray_NonInline(*this));
}
template <class D, class P>
uint8_t TorqueGeneratedByteArray<D, P>::bytes(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kBytesOffset + i * 1;
  return this->template ReadField<uint8_t>(offset);
}
template <class D, class P>
void TorqueGeneratedByteArray<D, P>::set_bytes(int i, uint8_t value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kBytesOffset + i * 1;
  this->template WriteField<uint8_t>(offset, value);
}

template<class D, class P>
inline TorqueGeneratedByteArray<D, P>::TorqueGeneratedByteArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsByteArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedByteArray<D, P>::TorqueGeneratedByteArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsByteArray_NonInline(*this));
}
template <class D, class P>
int TorqueGeneratedWeakFixedArray<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedWeakFixedArray<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

template <class D, class P>
MaybeObject TorqueGeneratedWeakFixedArray<D, P>::objects(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakFixedArray::objects(isolate, i);
}
template <class D, class P>
MaybeObject TorqueGeneratedWeakFixedArray<D, P>::objects(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kObjectsOffset + i * kTaggedSize;
  auto value = TaggedField<MaybeObject>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakFixedArray<D, P>::set_objects(int i, MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kObjectsOffset + i * kTaggedSize;
  RELAXED_WRITE_WEAK_FIELD(*this, offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWeakFixedArray<D, P>::TorqueGeneratedWeakFixedArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWeakFixedArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWeakFixedArray<D, P>::TorqueGeneratedWeakFixedArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWeakFixedArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFixedDoubleArray<D, P>::TorqueGeneratedFixedDoubleArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsFixedDoubleArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedFixedDoubleArray<D, P>::TorqueGeneratedFixedDoubleArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsFixedDoubleArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedArrayList<D, P>::TorqueGeneratedArrayList(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsArrayList_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedArrayList<D, P>::TorqueGeneratedArrayList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsArrayList_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateList<D, P>::TorqueGeneratedTemplateList(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsTemplateList_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedTemplateList<D, P>::TorqueGeneratedTemplateList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsTemplateList_NonInline(*this));
}
template <class D, class P>
int TorqueGeneratedWeakArrayList<D, P>::capacity() const {
  return TaggedField<Smi, kCapacityOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedWeakArrayList<D, P>::set_capacity(int value) {
  WRITE_FIELD(*this, kCapacityOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedWeakArrayList<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedWeakArrayList<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

template <class D, class P>
MaybeObject TorqueGeneratedWeakArrayList<D, P>::objects(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedWeakArrayList::objects(isolate, i);
}
template <class D, class P>
MaybeObject TorqueGeneratedWeakArrayList<D, P>::objects(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->capacity());
  int offset = kObjectsOffset + i * kTaggedSize;
  auto value = TaggedField<MaybeObject>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  return value;
}
template <class D, class P>
void TorqueGeneratedWeakArrayList<D, P>::set_objects(int i, MaybeObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsCleared() || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsHeapObject()) || (!value.IsWeak() && value.GetHeapObjectOrSmi().IsSmi()) || value.IsWeak());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->capacity());
  int offset = kObjectsOffset + i * kTaggedSize;
  RELAXED_WRITE_WEAK_FIELD(*this, offset, value);
  CONDITIONAL_WEAK_WRITE_BARRIER(*this, offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedWeakArrayList<D, P>::TorqueGeneratedWeakArrayList(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsWeakArrayList_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedWeakArrayList<D, P>::TorqueGeneratedWeakArrayList(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsWeakArrayList_NonInline(*this));
}
