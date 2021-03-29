template <class D, class P>
HeapObject TorqueGeneratedPromiseCapability<D, P>::promise() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::promise(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseCapability<D, P>::promise(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPromiseOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_promise(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsUndefined());
  WRITE_FIELD(*this, kPromiseOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::resolve() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::resolve(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::resolve(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kResolveOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_resolve(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kResolveOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::reject() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseCapability::reject(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseCapability<D, P>::reject(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kRejectOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseCapability<D, P>::set_reject(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kRejectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseCapability<D, P>::TorqueGeneratedPromiseCapability(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseCapability_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseCapability<D, P>::TorqueGeneratedPromiseCapability(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseCapability_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::next(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::next(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsPromiseReaction());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_next(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsPromiseReaction());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::reject_handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::reject_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::reject_handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kRejectHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_reject_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  WRITE_FIELD(*this, kRejectHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRejectHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::fulfill_handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::fulfill_handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::fulfill_handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kFulfillHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_fulfill_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  WRITE_FIELD(*this, kFulfillHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kFulfillHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::promise_or_capability() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::promise_or_capability(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReaction<D, P>::promise_or_capability(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPromiseOrCapabilityOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_promise_or_capability(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::continuation_preserved_embedder_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReaction::continuation_preserved_embedder_data(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReaction<D, P>::continuation_preserved_embedder_data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kContinuationPreservedEmbedderDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReaction<D, P>::set_continuation_preserved_embedder_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kContinuationPreservedEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationPreservedEmbedderDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseReaction<D, P>::TorqueGeneratedPromiseReaction(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseReaction_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseReaction<D, P>::TorqueGeneratedPromiseReaction(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseReaction_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::argument() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::argument(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::argument(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kArgumentOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_argument(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kArgumentOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kArgumentOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedPromiseReactionJobTask<D, P>::context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedPromiseReactionJobTask<D, P>::context(IsolateRoot isolate) const {
  auto value = TaggedField<Context, kContextOffset>::load(isolate, *this);
  DCHECK(value.IsContext());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::handler() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::handler(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::handler(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kHandlerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_handler(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  WRITE_FIELD(*this, kHandlerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHandlerOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::promise_or_capability(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedPromiseReactionJobTask<D, P>::promise_or_capability(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kPromiseOrCapabilityOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_promise_or_capability(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSPromise() || value.IsPromiseCapability());
  WRITE_FIELD(*this, kPromiseOrCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseOrCapabilityOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::continuation_preserved_embedder_data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseReactionJobTask::continuation_preserved_embedder_data(isolate);
}
template <class D, class P>
Object TorqueGeneratedPromiseReactionJobTask<D, P>::continuation_preserved_embedder_data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kContinuationPreservedEmbedderDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseReactionJobTask<D, P>::set_continuation_preserved_embedder_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kContinuationPreservedEmbedderDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContinuationPreservedEmbedderDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseReactionJobTask<D, P>::TorqueGeneratedPromiseReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseReactionJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseReactionJobTask<D, P>::TorqueGeneratedPromiseReactionJobTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseReactionJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseFulfillReactionJobTask<D, P>::TorqueGeneratedPromiseFulfillReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseFulfillReactionJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseFulfillReactionJobTask<D, P>::TorqueGeneratedPromiseFulfillReactionJobTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseFulfillReactionJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseRejectReactionJobTask<D, P>::TorqueGeneratedPromiseRejectReactionJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseRejectReactionJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseRejectReactionJobTask<D, P>::TorqueGeneratedPromiseRejectReactionJobTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseRejectReactionJobTask_NonInline(*this));
}
template <class D, class P>
Context TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedPromiseResolveThenableJobTask<D, P>::context(IsolateRoot isolate) const {
  auto value = TaggedField<Context, kContextOffset>::load(isolate, *this);
  DCHECK(value.IsContext());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template <class D, class P>
JSPromise TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::promise_to_resolve(isolate);
}
template <class D, class P>
JSPromise TorqueGeneratedPromiseResolveThenableJobTask<D, P>::promise_to_resolve(IsolateRoot isolate) const {
  auto value = TaggedField<JSPromise, kPromiseToResolveOffset>::load(isolate, *this);
  DCHECK(value.IsJSPromise());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_promise_to_resolve(JSPromise value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSPromise());
  WRITE_FIELD(*this, kPromiseToResolveOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPromiseToResolveOffset, value, mode);
}

template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::thenable(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::thenable(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kThenableOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_thenable(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kThenableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenableOffset, value, mode);
}

template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedPromiseResolveThenableJobTask::then(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedPromiseResolveThenableJobTask<D, P>::then(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kThenOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedPromiseResolveThenableJobTask<D, P>::set_then(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kThenOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kThenOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedPromiseResolveThenableJobTask<D, P>::TorqueGeneratedPromiseResolveThenableJobTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsPromiseResolveThenableJobTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedPromiseResolveThenableJobTask<D, P>::TorqueGeneratedPromiseResolveThenableJobTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsPromiseResolveThenableJobTask_NonInline(*this));
}
