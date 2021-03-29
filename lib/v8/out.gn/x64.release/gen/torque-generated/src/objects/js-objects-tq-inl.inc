template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSObject::elements(isolate);
}
template <class D, class P>
FixedArrayBase TorqueGeneratedJSObject<D, P>::elements(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArrayBase, kElementsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArrayBase());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSObject<D, P>::set_elements(FixedArrayBase value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArrayBase());
  WRITE_FIELD(*this, kElementsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kElementsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSObject<D, P>::TorqueGeneratedJSObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCustomElementsObject<D, P>::TorqueGeneratedJSCustomElementsObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSCustomElementsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSCustomElementsObject<D, P>::TorqueGeneratedJSCustomElementsObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSCustomElementsObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSpecialObject<D, P>::TorqueGeneratedJSSpecialObject(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSSpecialObject_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSSpecialObject<D, P>::TorqueGeneratedJSSpecialObject(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSSpecialObject_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSGlobalProxy::native_context(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSGlobalProxy<D, P>::native_context(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNativeContextOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSGlobalProxy<D, P>::set_native_context(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kNativeContextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNativeContextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSGlobalProxy_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSGlobalProxy<D, P>::TorqueGeneratedJSGlobalProxy(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSGlobalProxy_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSPrimitiveWrapper::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSPrimitiveWrapper<D, P>::value(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSPrimitiveWrapper<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver() || value.IsSmi() || value.IsHeapNumber() || value.IsBigInt() || value.IsString() || value.IsSymbol() || value.IsTrue() || value.IsFalse() || value.IsNull() || value.IsUndefined());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSPrimitiveWrapper_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSPrimitiveWrapper<D, P>::TorqueGeneratedJSPrimitiveWrapper(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSPrimitiveWrapper_NonInline(*this));
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::value() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::value(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::value(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kValueOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_value(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber() || value.IsUndefined());
  WRITE_FIELD(*this, kValueOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kValueOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::year() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::year(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::year(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kYearOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_year(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kYearOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kYearOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::month() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::month(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::month(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kMonthOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_month(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kMonthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMonthOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::day() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::day(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::day(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kDayOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_day(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kDayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kDayOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::weekday(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::weekday(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kWeekdayOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_weekday(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kWeekdayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWeekdayOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::hour(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::hour(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kHourOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_hour(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kHourOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kHourOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::min() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::min(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::min(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kMinOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_min(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kMinOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kMinOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::sec(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::sec(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kSecOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_sec(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kSecOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSecOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSDate::cache_stamp(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSDate<D, P>::cache_stamp(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kCacheStampOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSDate<D, P>::set_cache_stamp(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsUndefined() || value.IsNaN());
  WRITE_FIELD(*this, kCacheStampOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCacheStampOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSDate<D, P>::TorqueGeneratedJSDate(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSDate_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSDate<D, P>::TorqueGeneratedJSDate(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSDate_NonInline(*this));
}
template <class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::sync_iterator(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedJSAsyncFromSyncIterator<D, P>::sync_iterator(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kSyncIteratorOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_sync_iterator(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kSyncIteratorOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSyncIteratorOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSAsyncFromSyncIterator::next(isolate);
}
template <class D, class P>
Object TorqueGeneratedJSAsyncFromSyncIterator<D, P>::next(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kNextOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSAsyncFromSyncIterator<D, P>::set_next(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kNextOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNextOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedJSAsyncFromSyncIterator<D, P>::TorqueGeneratedJSAsyncFromSyncIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSAsyncFromSyncIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSAsyncFromSyncIterator<D, P>::TorqueGeneratedJSAsyncFromSyncIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSAsyncFromSyncIterator_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedJSStringIterator<D, P>::string() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedJSStringIterator::string(isolate);
}
template <class D, class P>
String TorqueGeneratedJSStringIterator<D, P>::string(IsolateRoot isolate) const {
  auto value = TaggedField<String, kStringOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedJSStringIterator<D, P>::set_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kStringOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedJSStringIterator<D, P>::index() const {
  return TaggedField<Smi, kIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedJSStringIterator<D, P>::set_index(int value) {
  WRITE_FIELD(*this, kIndexOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedJSStringIterator<D, P>::TorqueGeneratedJSStringIterator(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsJSStringIterator_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedJSStringIterator<D, P>::TorqueGeneratedJSStringIterator(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsJSStringIterator_NonInline(*this));
}
