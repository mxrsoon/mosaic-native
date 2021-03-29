inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(Isolate* isolate, SloppyArgumentsElements p_o);
inline intptr_t TqRuntimeFromConstexpr_intptr_constexpr_int31_0(Isolate* isolate, int31_t p_i);
inline intptr_t TqRuntimeConvert_intptr_Smi_0(Isolate* isolate, Smi p_s);
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length);
#ifndef V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries
#define V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries(Isolate* isolate, SloppyArgumentsElements p_o) {
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
  std::tie(tmp5, tmp6, tmp7) = TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(isolate, p_o, tmp4, tmp3);
  goto block2;

  block2:
  return std::tuple_cat(std::make_tuple(tmp5), std::make_tuple(tmp6), std::make_tuple(tmp7), std::tuple_cat());
}
#endif //  V8_INTERNAL_DEFINED_TqRuntimeFieldSliceSloppyArgumentsElementsMappedEntries

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

#ifndef V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0
#define V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0
inline std::tuple<Object, intptr_t, intptr_t> TqRuntimeNewMutableSlice_Smi_OR_TheHole_0(Isolate* isolate, Object p_object, intptr_t p_offset, intptr_t p_length) {
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
#endif //  V8_INTERNAL_DEFINED_TqRuntimeNewMutableSlice_Smi_OR_TheHole_0

template<class D, class P>
inline TorqueGeneratedJSArgumentsObject<D, P>::TorqueGeneratedJSArgumentsObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSArgumentsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSArgumentsObject<D, P>::TorqueGeneratedJSArgumentsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSArgumentsObject_NonInline(*this));
}
template <class D, class P>
Context TorqueGeneratedSloppyArgumentsElements<D, P>::context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSloppyArgumentsElements::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedSloppyArgumentsElements<D, P>::context(IsolateRoot isolate) const {
  auto value = TaggedField<Context, kContextOffset>::load(isolate, *this);
  DCHECK(value.IsContext());
  return value;
}
template <class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSloppyArgumentsElements<D, P>::arguments() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSloppyArgumentsElements::arguments(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSloppyArgumentsElements<D, P>::arguments(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kArgumentsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_arguments(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentsOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSloppyArgumentsElements<D, P>::mapped_entries(int i) const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSloppyArgumentsElements::mapped_entries(isolate, i);
}
template <class D, class P>
Object TorqueGeneratedSloppyArgumentsElements<D, P>::mapped_entries(IsolateRoot isolate, int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kMappedEntriesOffset + i * kTaggedSize;
  auto value = TaggedField<Object>::Relaxed_Load(isolate, *this, offset);
  DCHECK(value.IsSmi() || value.IsTheHole());
  return value;
}
template <class D, class P>
void TorqueGeneratedSloppyArgumentsElements<D, P>::set_mapped_entries(int i, Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsTheHole());
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kMappedEntriesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, value);
  CONDITIONAL_WRITE_BARRIER(*this, offset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSloppyArgumentsElements<D, P>::TorqueGeneratedSloppyArgumentsElements(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSloppyArgumentsElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSloppyArgumentsElements<D, P>::TorqueGeneratedSloppyArgumentsElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSloppyArgumentsElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SloppyArgumentsElements)
template <class D, class P>
int TorqueGeneratedAliasedArgumentsEntry<D, P>::aliased_context_slot() const {
  return TaggedField<Smi, kAliasedContextSlotOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedAliasedArgumentsEntry<D, P>::set_aliased_context_slot(int value) {
  WRITE_FIELD(*this, kAliasedContextSlotOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedAliasedArgumentsEntry<D, P>::TorqueGeneratedAliasedArgumentsEntry(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAliasedArgumentsEntry_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAliasedArgumentsEntry<D, P>::TorqueGeneratedAliasedArgumentsEntry(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAliasedArgumentsEntry_NonInline(*this));
}
