inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(Isolate* isolate, InternalClassWithSmiElements p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsEntries(Isolate* isolate, InternalClassWithStructElements p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(Isolate* isolate, InternalClassWithStructElements p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Isolate* isolate, Smi p_s);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_InternalClassStructElement_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithSmiElementsEntries(Isolate* isolate, InternalClassWithSmiElements p_o) {
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
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 16);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_Smi_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithSmiElementsEntries

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsEntries(Isolate* isolate, InternalClassWithStructElements p_o) {
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
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  tmp2 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp1));
  tmp3 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 24);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_Smi_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsEntries

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries(Isolate* isolate, InternalClassWithStructElements p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  Smi tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceInternalClassWithStructElementsEntries(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  tmp8 = TaggedField<Smi>::load(isolate, p_o, static_cast<int>(tmp7));
  tmp9 = TqRuntimeConvert_intptr_Smi_0(isolate, tmp8);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeNewMutableSlice_InternalClassStructElement_0(isolate, p_o, tmp5, tmp9);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp10), std::make_tuple(tmp11), std::make_tuple(tmp12), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceInternalClassWithStructElementsMoreEntries

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_InternalClassStructElement_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_InternalClassStructElement_0

