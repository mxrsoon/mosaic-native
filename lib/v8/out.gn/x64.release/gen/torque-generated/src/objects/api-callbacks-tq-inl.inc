template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::callback(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::js_callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::js_callback(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kJsCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_js_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kJsCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kJsCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedCallHandlerInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedCallHandlerInfo<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedCallHandlerInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsCallHandlerInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedCallHandlerInfo<D, P>::TorqueGeneratedCallHandlerInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsCallHandlerInfo_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::getter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::getter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kGetterOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::setter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::setter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSetterOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::query(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::query(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kQueryOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_query(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kQueryOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kQueryOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::descriptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::descriptor(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDescriptorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_descriptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDescriptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDescriptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::deleter(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::deleter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDeleterOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_deleter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDeleterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDeleterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::enumerator(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::enumerator(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kEnumeratorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_enumerator(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kEnumeratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEnumeratorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::definer(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::definer(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDefinerOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_definer(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kDefinerOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDefinerOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInterceptorInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedInterceptorInfo<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedInterceptorInfo<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedInterceptorInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsInterceptorInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInterceptorInfo<D, P>::TorqueGeneratedInterceptorInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInterceptorInfo_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::callback(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::callback(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCallbackOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_callback(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsForeign());
  WRITE_FIELD(*this, kCallbackOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCallbackOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::named_interceptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::named_interceptor(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNamedInterceptorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_named_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kNamedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNamedInterceptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::indexed_interceptor(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::indexed_interceptor(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kIndexedInterceptorOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_indexed_interceptor(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsZero() || value.IsInterceptorInfo());
  WRITE_FIELD(*this, kIndexedInterceptorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kIndexedInterceptorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessCheckInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessCheckInfo<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessCheckInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAccessCheckInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessCheckInfo<D, P>::TorqueGeneratedAccessCheckInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessCheckInfo_NonInline(*this));
}
template <class D, class P>
Name TorqueGeneratedAccessorInfo<D, P>::name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::name(isolate);
}
template <class D, class P>
Name TorqueGeneratedAccessorInfo<D, P>::name(IsolateRoot isolate) const {
  auto value = TaggedField<Name, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsName());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_name(Name value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsName());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedAccessorInfo<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::expected_receiver_type() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::expected_receiver_type(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::expected_receiver_type(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kExpectedReceiverTypeOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_expected_receiver_type(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kExpectedReceiverTypeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExpectedReceiverTypeOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::setter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::setter(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::setter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSetterOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_setter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kSetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::getter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::getter(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::getter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kGetterOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kGetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::js_getter() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::js_getter(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::js_getter(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kJsGetterOffset>::load(isolate, *this);
  DCHECK(value.IsZero() || value.IsNonNullForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_js_getter(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsZero() || value.IsNonNullForeign());
  WRITE_FIELD(*this, kJsGetterOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kJsGetterOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::data() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedAccessorInfo::data(isolate);
}
template <class D, class P>
Object TorqueGeneratedAccessorInfo<D, P>::data(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDataOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedAccessorInfo<D, P>::set_data(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kDataOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDataOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedAccessorInfo<D, P>::TorqueGeneratedAccessorInfo(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAccessorInfo_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAccessorInfo<D, P>::TorqueGeneratedAccessorInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAccessorInfo_NonInline(*this));
}
