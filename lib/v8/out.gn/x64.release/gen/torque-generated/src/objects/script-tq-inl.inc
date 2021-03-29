template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScript<D, P>::source() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::source(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScript<D, P>::source(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kSourceOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_source(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kSourceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedScript<D, P>::name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::name(isolate);
}
template <class D, class P>
Object TorqueGeneratedScript<D, P>::name(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScript<D, P>::line_offset() const {
  return TaggedField<Smi, kLineOffsetOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_line_offset(int value) {
  WRITE_FIELD(*this, kLineOffsetOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedScript<D, P>::column_offset() const {
  return TaggedField<Smi, kColumnOffsetOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_column_offset(int value) {
  WRITE_FIELD(*this, kColumnOffsetOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedScript<D, P>::context_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::context_data(isolate);
}
template <class D, class P>
Object TorqueGeneratedScript<D, P>::context_data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kContextDataOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsSymbol() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_context_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsSymbol() || value.IsUndefined());
  WRITE_FIELD(*this, kContextDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextDataOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScript<D, P>::script_type() const {
  return TaggedField<Smi, kScriptTypeOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_script_type(int value) {
  WRITE_FIELD(*this, kScriptTypeOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::line_ends() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::line_ends(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::line_ends(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kLineEndsOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_line_ends(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray());
  WRITE_FIELD(*this, kLineEndsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLineEndsOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScript<D, P>::id() const {
  return TaggedField<Smi, kIdOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_id(int value) {
  WRITE_FIELD(*this, kIdOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::eval_from_shared_or_wrapped_arguments() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::eval_from_shared_or_wrapped_arguments(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::eval_from_shared_or_wrapped_arguments(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kEvalFromSharedOrWrappedArgumentsOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsSharedFunctionInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_eval_from_shared_or_wrapped_arguments(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFixedArray() || value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kEvalFromSharedOrWrappedArgumentsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEvalFromSharedOrWrappedArgumentsOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedScript<D, P>::eval_from_position() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::eval_from_position(isolate);
}
template <class D, class P>
Object TorqueGeneratedScript<D, P>::eval_from_position(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kEvalFromPositionOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_eval_from_position(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsForeign());
  WRITE_FIELD(*this, kEvalFromPositionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEvalFromPositionOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::shared_function_infos() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::shared_function_infos(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedScript<D, P>::shared_function_infos(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kSharedFunctionInfosOffset>::load(isolate, *this);
  DCHECK(value.IsWeakFixedArray() || value.IsWeakArrayList());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_shared_function_infos(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsWeakFixedArray() || value.IsWeakArrayList());
  WRITE_FIELD(*this, kSharedFunctionInfosOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSharedFunctionInfosOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedScript<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScript<D, P>::source_url() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::source_url(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedScript<D, P>::source_url(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kSourceUrlOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_source_url(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kSourceUrlOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceUrlOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedScript<D, P>::source_mapping_url() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::source_mapping_url(isolate);
}
template <class D, class P>
Object TorqueGeneratedScript<D, P>::source_mapping_url(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSourceMappingUrlOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_source_mapping_url(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kSourceMappingUrlOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSourceMappingUrlOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedScript<D, P>::host_defined_options() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedScript::host_defined_options(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedScript<D, P>::host_defined_options(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kHostDefinedOptionsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedScript<D, P>::set_host_defined_options(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kHostDefinedOptionsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHostDefinedOptionsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedScript<D, P>::TorqueGeneratedScript(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsScript_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedScript<D, P>::TorqueGeneratedScript(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsScript_NonInline(*this));
}
