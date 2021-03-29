template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::line_number() const {
  return TaggedField<Smi, kLineNumberOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_line_number(int value) {
  WRITE_FIELD(*this, kLineNumberOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::column_number() const {
  return TaggedField<Smi, kColumnNumberOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_column_number(int value) {
  WRITE_FIELD(*this, kColumnNumberOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::promise_combinator_index() const {
  return TaggedField<Smi, kPromiseCombinatorIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_promise_combinator_index(int value) {
  WRITE_FIELD(*this, kPromiseCombinatorIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::script_id() const {
  return TaggedField<Smi, kScriptIdOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_script_id(int value) {
  WRITE_FIELD(*this, kScriptIdOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::wasm_function_index() const {
  return TaggedField<Smi, kWasmFunctionIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_wasm_function_index(int value) {
  WRITE_FIELD(*this, kWasmFunctionIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedStackFrameInfo<D, P>::script_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::script_name(isolate);
}
template <class D, class P>
Object TorqueGeneratedStackFrameInfo<D, P>::script_name(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kScriptNameOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_script_name(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kScriptNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptNameOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedStackFrameInfo<D, P>::script_name_or_source_url() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::script_name_or_source_url(isolate);
}
template <class D, class P>
Object TorqueGeneratedStackFrameInfo<D, P>::script_name_or_source_url(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kScriptNameOrSourceUrlOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_script_name_or_source_url(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kScriptNameOrSourceUrlOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kScriptNameOrSourceUrlOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::function_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::function_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::function_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kFunctionNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_function_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kFunctionNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionNameOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::method_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::method_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::method_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kMethodNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_method_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kMethodNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMethodNameOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::type_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::type_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::type_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kTypeNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_type_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kTypeNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTypeNameOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::eval_origin() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::eval_origin(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::eval_origin(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kEvalOriginOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_eval_origin(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kEvalOriginOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEvalOriginOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::wasm_module_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::wasm_module_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedStackFrameInfo<D, P>::wasm_module_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kWasmModuleNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_wasm_module_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kWasmModuleNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWasmModuleNameOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedStackFrameInfo<D, P>::wasm_instance() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackFrameInfo::wasm_instance(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedStackFrameInfo<D, P>::wasm_instance(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kWasmInstanceOffset>::load(isolate, *this);
  DCHECK(value.IsNull() || value.IsUndefined() || value.IsWasmInstanceObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_wasm_instance(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsNull() || value.IsUndefined() || value.IsWasmInstanceObject());
  WRITE_FIELD(*this, kWasmInstanceOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWasmInstanceOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedStackFrameInfo<D, P>::flag() const {
  return TaggedField<Smi, kFlagOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackFrameInfo<D, P>::set_flag(int value) {
  WRITE_FIELD(*this, kFlagOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedStackFrameInfo<D, P>::TorqueGeneratedStackFrameInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsStackFrameInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStackFrameInfo<D, P>::TorqueGeneratedStackFrameInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStackFrameInfo_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_array() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackTraceFrame::frame_array(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_array(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kFrameArrayOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsFrameArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_array(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsFrameArray());
  WRITE_FIELD(*this, kFrameArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFrameArrayOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedStackTraceFrame<D, P>::frame_index() const {
  return TaggedField<Smi, kFrameIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_index(int value) {
  WRITE_FIELD(*this, kFrameIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_info() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedStackTraceFrame::frame_info(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedStackTraceFrame<D, P>::frame_info(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kFrameInfoOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsStackFrameInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedStackTraceFrame<D, P>::set_frame_info(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsStackFrameInfo());
  WRITE_FIELD(*this, kFrameInfoOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFrameInfoOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedStackTraceFrame<D, P>::TorqueGeneratedStackTraceFrame(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsStackTraceFrame_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStackTraceFrame<D, P>::TorqueGeneratedStackTraceFrame(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStackTraceFrame_NonInline(*this));
}
