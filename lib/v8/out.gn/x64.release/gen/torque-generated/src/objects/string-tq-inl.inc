inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(Isolate* isolate, SeqOneByteString p_o);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(Isolate* isolate, SeqTwoByteString p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_int32_0(Isolate* isolate, int32_t p_i);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqOneByteStringChars(Isolate* isolate, SeqOneByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  int32_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  tmp2 = (p_o).ReadField<int32_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_int32_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewConstSlice_char8_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqOneByteStringChars

#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSeqTwoByteStringChars(Isolate* isolate, SeqTwoByteString p_o) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  intptr_t tmp1{}; USE(tmp1);
  int32_t tmp2{}; USE(tmp2);
  intptr_t tmp3{}; USE(tmp3);
  intptr_t tmp4{}; USE(tmp4);
  Object tmp5{}; USE(tmp5);
  intptr_t tmp6{}; USE(tmp6);
  intptr_t tmp7{}; USE(tmp7);
  goto block0;

  block0:
  tmp0 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 0);
  tmp1 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 8);
  tmp2 = (p_o).ReadField<int32_t>(tmp1);
  tmp3 = TqRuntimeConvert_intptr_int32_0(isolate, tmp2);
  tmp4 = TqRuntimeFromConstexpr_intptr_constexpr_int31_0(isolate, 12);
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewConstSlice_char16_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSeqTwoByteStringChars

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
#define V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0
inline intptr_t TqRuntimeConvert_intptr_int32_0(Isolate* isolate, int32_t p_i) {
  DisallowGarbageCollection no_gc;
  intptr_t tmp0{}; USE(tmp0);
  goto block0;

  block0:
  tmp0 = TorqueRuntimeMacroShims::CodeStubAssembler::ChangeInt32ToIntPtr(isolate, p_i);
  goto block2;

  block2:
  return tmp0;
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeConvert_intptr_int32_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char8_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char8_0

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewConstSlice_char16_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewConstSlice_char16_0

template <class D, class P>
int32_t TorqueGeneratedString<D, P>::length() const {
  return this->template ReadField<int32_t>(kLengthOffset);
}
template <class D, class P>
void TorqueGeneratedString<D, P>::set_length(int32_t value) {
  this->template WriteField<int32_t>(kLengthOffset, value);
}

template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedString<D, P>::TorqueGeneratedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsString_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::first(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::first(IsolateRoot isolate) const {
  auto value = TaggedField<String, kFirstOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_first(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kFirstOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFirstOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedConsString<D, P>::second() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedConsString::second(isolate);
}
template <class D, class P>
String TorqueGeneratedConsString<D, P>::second(IsolateRoot isolate) const {
  auto value = TaggedField<String, kSecondOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedConsString<D, P>::set_second(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSecondOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecondOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsConsString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedConsString<D, P>::TorqueGeneratedConsString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsConsString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsInternalizedString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalizedString<D, P>::TorqueGeneratedInternalizedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalizedString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSeqString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqString<D, P>::TorqueGeneratedSeqString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqString_NonInline(*this));
}
template <class D, class P>
char TorqueGeneratedSeqOneByteString<D, P>::chars(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kCharsOffset + i * 1;
  return this->template ReadField<char>(offset);
}
template <class D, class P>
void TorqueGeneratedSeqOneByteString<D, P>::set_chars(int i, char value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kCharsOffset + i * 1;
  this->template WriteField<char>(offset, value);
}

template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSeqOneByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqOneByteString<D, P>::TorqueGeneratedSeqOneByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqOneByteString_NonInline(*this));
}
template <class D, class P>
char16_t TorqueGeneratedSeqTwoByteString<D, P>::chars(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kCharsOffset + i * 2;
  return this->template ReadField<char16_t>(offset);
}
template <class D, class P>
void TorqueGeneratedSeqTwoByteString<D, P>::set_chars(int i, char16_t value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kCharsOffset + i * 2;
  this->template WriteField<char16_t>(offset, value);
}

template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSeqTwoByteString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSeqTwoByteString<D, P>::TorqueGeneratedSeqTwoByteString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSeqTwoByteString_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSlicedString::parent(isolate);
}
template <class D, class P>
String TorqueGeneratedSlicedString<D, P>::parent(IsolateRoot isolate) const {
  auto value = TaggedField<String, kParentOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_parent(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kParentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParentOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedSlicedString<D, P>::offset() const {
  return TaggedField<Smi, kOffsetOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSlicedString<D, P>::set_offset(int value) {
  WRITE_FIELD(*this, kOffsetOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSlicedString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSlicedString<D, P>::TorqueGeneratedSlicedString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSlicedString_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedThinString::actual(isolate);
}
template <class D, class P>
String TorqueGeneratedThinString<D, P>::actual(IsolateRoot isolate) const {
  auto value = TaggedField<String, kActualOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedThinString<D, P>::set_actual(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kActualOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kActualOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsThinString_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedThinString<D, P>::TorqueGeneratedThinString(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsThinString_NonInline(*this));
}
