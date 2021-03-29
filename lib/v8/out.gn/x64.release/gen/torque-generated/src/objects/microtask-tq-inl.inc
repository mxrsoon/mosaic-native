template<class D, class P>
inline TorqueGeneratedMicrotask<D, P>::TorqueGeneratedMicrotask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsMicrotask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedMicrotask<D, P>::TorqueGeneratedMicrotask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsMicrotask_NonInline(*this));
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::callback() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallbackTask::callback(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::callback(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallbackTask<D, P>::set_callback(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallbackTask::data(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedCallbackTask<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallbackTask<D, P>::set_data(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallbackTask<D, P>::TorqueGeneratedCallbackTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsCallbackTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCallbackTask<D, P>::TorqueGeneratedCallbackTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCallbackTask_NonInline(*this));
}
template <class D, class P>
JSReceiver TorqueGeneratedCallableTask<D, P>::callable() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallableTask::callable(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedCallableTask<D, P>::callable(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kCallableOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallableTask<D, P>::set_callable(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kCallableOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallableOffset, value, mode);
}

template <class D, class P>
Context TorqueGeneratedCallableTask<D, P>::context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallableTask::context(isolate);
}
template <class D, class P>
Context TorqueGeneratedCallableTask<D, P>::context(IsolateRoot isolate) const {
  auto value = TaggedField<Context, kContextOffset>::load(isolate, *this);
  DCHECK(value.IsContext());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallableTask<D, P>::set_context(Context value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsContext());
  WRITE_FIELD(*this, kContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kContextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallableTask<D, P>::TorqueGeneratedCallableTask(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsCallableTask_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCallableTask<D, P>::TorqueGeneratedCallableTask(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCallableTask_NonInline(*this));
}
