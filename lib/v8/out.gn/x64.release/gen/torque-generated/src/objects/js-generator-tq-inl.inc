template <class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::function(isolate);
}
template <class D, class P>
JSFunction TorqueGeneratedJSGeneratorObject<D, P>::function(IsolateRoot isolate) const {
  auto value = TaggedField<JSFunction, kFunctionOffset>::load(isolate, *this);
  DCHECK(value.IsJSFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_function(JSFunction value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSFunction());
  WRITE_FIELD(*this, kFunctionOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFunctionOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedJSGeneratorObject<D, P>::context(IsolateRoot isolate) const {
  auto value = TaggedField<Context, kContextOffset>::load(isolate, *this);
  DCHECK(value.IsContext());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::receiver(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::receiver(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kReceiverOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_receiver(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::input_or_debug_pos(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGeneratorObject<D, P>::input_or_debug_pos(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kInputOrDebugPosOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_input_or_debug_pos(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kInputOrDebugPosOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInputOrDebugPosOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSGeneratorObject<D, P>::resume_mode() const {
  return TaggedField<Smi, kResumeModeOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_resume_mode(int value) {
  WRITE_FIELD(*this, kResumeModeOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedJSGeneratorObject<D, P>::continuation() const {
  return TaggedField<Smi, kContinuationOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_continuation(int value) {
  WRITE_FIELD(*this, kContinuationOffset, Smi::FromInt(value));
}

template <class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGeneratorObject::parameters_and_registers(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedJSGeneratorObject<D, P>::parameters_and_registers(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kParametersAndRegistersOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGeneratorObject<D, P>::set_parameters_and_registers(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kParametersAndRegistersOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kParametersAndRegistersOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSGeneratorObject<D, P>::TorqueGeneratedJSGeneratorObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSGeneratorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSGeneratorObject<D, P>::TorqueGeneratedJSGeneratorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSGeneratorObject_NonInline(*this));
}
template <class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFunctionObject::promise(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedJSAsyncFunctionObject<D, P>::promise(IsolateRoot isolate) const {
  auto value = TaggedField<JSPromise, kPromiseOffset>::load(isolate, *this);
  DCHECK(value.IsJSPromise());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSAsyncFunctionObject<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFunctionObject<D, P>::TorqueGeneratedJSAsyncFunctionObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSAsyncFunctionObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncFunctionObject<D, P>::TorqueGeneratedJSAsyncFunctionObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncFunctionObject_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncGeneratorObject::queue(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedJSAsyncGeneratorObject<D, P>::queue(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kQueueOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_queue(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kQueueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueueOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSAsyncGeneratorObject<D, P>::is_awaiting() const {
  return TaggedField<Smi, kIsAwaitingOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSAsyncGeneratorObject<D, P>::set_is_awaiting(int value) {
  WRITE_FIELD(*this, kIsAwaitingOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSAsyncGeneratorObject<D, P>::TorqueGeneratedJSAsyncGeneratorObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSAsyncGeneratorObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncGeneratorObject<D, P>::TorqueGeneratedJSAsyncGeneratorObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncGeneratorObject_NonInline(*this));
}
template <class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::next(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedAsyncGeneratorRequest<D, P>::next(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsAsyncGeneratorRequest());
  return value;
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_next(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsAsyncGeneratorRequest());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedAsyncGeneratorRequest<D, P>::resume_mode() const {
  return TaggedField<Smi, kResumeModeOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_resume_mode(int value) {
  WRITE_FIELD(*this, kResumeModeOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedAsyncGeneratorRequest<D, P>::value(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAsyncGeneratorRequest::promise(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedAsyncGeneratorRequest<D, P>::promise(IsolateRoot isolate) const {
  auto value = TaggedField<JSPromise, kPromiseOffset>::load(isolate, *this);
  DCHECK(value.IsJSPromise());
  return value;
}
template <class D, class P>
void TorqueGeneratedAsyncGeneratorRequest<D, P>::set_promise(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAsyncGeneratorRequest<D, P>::TorqueGeneratedAsyncGeneratorRequest(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAsyncGeneratorRequest_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAsyncGeneratorRequest<D, P>::TorqueGeneratedAsyncGeneratorRequest(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAsyncGeneratorRequest_NonInline(*this));
}
