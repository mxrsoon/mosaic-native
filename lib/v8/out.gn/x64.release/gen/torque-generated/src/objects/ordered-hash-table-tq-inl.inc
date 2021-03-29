inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetPadding(Isolate* isolate, SmallOrderedHashSet p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetDataTable(Isolate* isolate, SmallOrderedHashSet p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetHashTable(Isolate* isolate, SmallOrderedHashSet p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetChainTable(Isolate* isolate, SmallOrderedHashSet p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapPadding(Isolate* isolate, SmallOrderedHashMap p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapDataTable(Isolate* isolate, SmallOrderedHashMap p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapHashTable(Isolate* isolate, SmallOrderedHashMap p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapChainTable(Isolate* isolate, SmallOrderedHashMap p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryPadding1(Isolate* isolate, SmallOrderedNameDictionary p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable(Isolate* isolate, SmallOrderedNameDictionary p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable(Isolate* isolate, SmallOrderedNameDictionary p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryChainTable(Isolate* isolate, SmallOrderedNameDictionary p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_uint8_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline intptr_t TqRuntimeConvert_intptr_uint8_0(Isolate* isolate, uint8_t p_ui);
inline intptr_t TqRuntimeConvert_intptr_intptr_0(Isolate* isolate, intptr_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_HashMapEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_NameDictionaryEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetPadding
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetPadding
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetPadding(Isolate* isolate, SmallOrderedHashSet p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp2 = TqRuntimeConvert_intptr_constexpr_int31_0(isolate, 1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 7);
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp4), std::make_tuple(tmp5), std::make_tuple(tmp6), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetPadding

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetDataTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetDataTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetDataTable(Isolate* isolate, SmallOrderedHashSet p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uint8_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  Object tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp2 = (p_o).ReadField<uint8_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, SmallOrderedHashTable<int>::kLoadFactor);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp4);
  tmp6 = TqRuntimeConvert_intptr_intptr_0(isolate, tmp5);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp8, tmp9, tmp10) = TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0(isolate, p_o, tmp7, tmp6);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp8), std::make_tuple(tmp9), std::make_tuple(tmp10), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetDataTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetHashTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetHashTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetHashTable(Isolate* isolate, SmallOrderedHashSet p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedHashSetDataTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 4);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp9);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp10), std::make_tuple(tmp11), std::make_tuple(tmp12), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetHashTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetChainTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetChainTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashSetChainTable(Isolate* isolate, SmallOrderedHashSet p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  Object tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedHashSetHashTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 1);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  tmp10 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, SmallOrderedHashTable<int>::kLoadFactor);
  tmp11 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp9, tmp10);
  tmp12 = TqRuntimeConvert_intptr_intptr_0(isolate, tmp11);
  std::tie(tmp13, tmp14, tmp15) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp12);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp13), std::make_tuple(tmp14), std::make_tuple(tmp15), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashSetChainTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapPadding
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapPadding
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapPadding(Isolate* isolate, SmallOrderedHashMap p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp2 = TqRuntimeConvert_intptr_constexpr_int31_0(isolate, 1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 7);
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp4), std::make_tuple(tmp5), std::make_tuple(tmp6), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapPadding

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapDataTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapDataTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapDataTable(Isolate* isolate, SmallOrderedHashMap p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uint8_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  Object tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp2 = (p_o).ReadField<uint8_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, SmallOrderedHashTable<int>::kLoadFactor);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp4);
  tmp6 = TqRuntimeConvert_intptr_intptr_0(isolate, tmp5);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  std::tie(tmp8, tmp9, tmp10) = TqRuntimeNewMutableSlice_HashMapEntry_0(isolate, p_o, tmp7, tmp6);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp8), std::make_tuple(tmp9), std::make_tuple(tmp10), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapDataTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapHashTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapHashTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapHashTable(Isolate* isolate, SmallOrderedHashMap p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedHashMapDataTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp9);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp10), std::make_tuple(tmp11), std::make_tuple(tmp12), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapHashTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapChainTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapChainTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedHashMapChainTable(Isolate* isolate, SmallOrderedHashMap p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  Object tmp13{}; USE(tmp13);
  intptr_t tmp14{}; USE(tmp14);
  intptr_t tmp15{}; USE(tmp15);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedHashMapHashTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 1);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 6);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  tmp10 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, SmallOrderedHashTable<int>::kLoadFactor);
  tmp11 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp9, tmp10);
  tmp12 = TqRuntimeConvert_intptr_intptr_0(isolate, tmp11);
  std::tie(tmp13, tmp14, tmp15) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp12);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp13), std::make_tuple(tmp14), std::make_tuple(tmp15), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedHashMapChainTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryPadding1
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryPadding1
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryPadding1(Isolate* isolate, SmallOrderedNameDictionary p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  Object tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 10);
  tmp2 = TqRuntimeConvert_intptr_constexpr_int31_0(isolate, 1);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 11);
  std::tie(tmp4, tmp5, tmp6) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp3, tmp2);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp4), std::make_tuple(tmp5), std::make_tuple(tmp6), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryPadding1

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable(Isolate* isolate, SmallOrderedNameDictionary p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  uint8_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  Object tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  intptr_t tmp10{}; USE(tmp10);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 10);
  tmp2 = (p_o).ReadField<uint8_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, SmallOrderedHashTable<int>::kLoadFactor);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp4);
  tmp6 = TqRuntimeConvert_intptr_intptr_0(isolate, tmp5);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  std::tie(tmp8, tmp9, tmp10) = TqRuntimeNewMutableSlice_NameDictionaryEntry_0(isolate, p_o, tmp7, tmp6);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp8), std::make_tuple(tmp9), std::make_tuple(tmp10), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable(Isolate* isolate, SmallOrderedNameDictionary p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedNameDictionaryDataTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 10);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp9);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp10), std::make_tuple(tmp11), std::make_tuple(tmp12), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryChainTable
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryChainTable
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSmallOrderedNameDictionaryChainTable(Isolate* isolate, SmallOrderedNameDictionary p_o) {
  DisallowGarbageCollection no_gc;
  Object tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  intptr_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  intptr_t tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  uint8_t tmp8{}; USE(tmp8);
  intptr_t tmp9{}; USE(tmp9);
  Object tmp10{}; USE(tmp10);
  intptr_t tmp11{}; USE(tmp11);
  intptr_t tmp12{}; USE(tmp12);
  goto block0;

  block0:
  std::tie(tmp0, tmp1, tmp2) = TqRuntimeFieldSliceSmallOrderedNameDictionaryHashTable(isolate, p_o);
  tmp3 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 1);
  tmp4 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrMul(isolate, tmp3, tmp2);
  tmp5 = TorqueRuntimeMacroShims::CodeStubAssembler::IntPtrAdd(isolate, tmp1, tmp4);
  tmp6 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp7 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 10);
  tmp8 = (p_o).ReadField<uint8_t>(tmp7);
  tmp9 = TqRuntimeConvert_intptr_uint8_0(isolate, tmp8);
  std::tie(tmp10, tmp11, tmp12) = TqRuntimeNewMutableSlice_uint8_0(isolate, p_o, tmp5, tmp9);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp10), std::make_tuple(tmp11), std::make_tuple(tmp12), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSmallOrderedNameDictionaryChainTable

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0
inline intptr_t TqRuntimeConvert_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_constexpr_int31_0

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint8_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint8_0
inline intptr_t TqRuntimeConvert_intptr_uint8_0(Isolate* isolate, uint8_t p_ui) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_uint8_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_intptr_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_intptr_0
inline intptr_t TqRuntimeConvert_intptr_intptr_0(Isolate* isolate, intptr_t p_i) {
  DisallowGarbageCollection no_gc;
  goto block0;

  block0:
  goto block2;

  block2:
  return p_i;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_intptr_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_JSReceiver_OR_Smi_OR_HeapNumber_OR_BigInt_OR_String_OR_Symbol_OR_True_OR_False_OR_Null_OR_Undefined_OR_TheHole_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashMapEntry_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashMapEntry_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_HashMapEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_HashMapEntry_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_NameDictionaryEntry_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_NameDictionaryEntry_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_NameDictionaryEntry_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_NameDictionaryEntry_0

