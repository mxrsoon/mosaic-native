template<class D, class P>
inline TorqueGeneratedStrongDescriptorArray<D, P>::TorqueGeneratedStrongDescriptorArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsStrongDescriptorArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedStrongDescriptorArray<D, P>::TorqueGeneratedStrongDescriptorArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsStrongDescriptorArray_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(StrongDescriptorArray)
template <class D, class P>
int TorqueGeneratedInternalClass<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_a(int value) {
  WRITE_FIELD(*this, kAOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInternalClass::b(isolate);
}
template <class D, class P>
Object TorqueGeneratedInternalClass<D, P>::b(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kBOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedInternalClass<D, P>::set_b(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsInternalClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClass<D, P>::TorqueGeneratedInternalClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClass)
template <class D, class P>
int TorqueGeneratedSmiPair<D, P>::a() const {
  return TaggedField<Smi, kAOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_a(int value) {
  WRITE_FIELD(*this, kAOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSmiPair<D, P>::b() const {
  return TaggedField<Smi, kBOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSmiPair<D, P>::set_b(int value) {
  WRITE_FIELD(*this, kBOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSmiPair_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSmiPair<D, P>::TorqueGeneratedSmiPair(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSmiPair_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SmiPair)
template <class D, class P>
int TorqueGeneratedSmiBox<D, P>::value() const {
  return TaggedField<Smi, kValueOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_value(int value) {
  WRITE_FIELD(*this, kValueOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSmiBox<D, P>::unrelated() const {
  return TaggedField<Smi, kUnrelatedOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSmiBox<D, P>::set_unrelated(int value) {
  WRITE_FIELD(*this, kUnrelatedOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSmiBox_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSmiBox<D, P>::TorqueGeneratedSmiBox(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSmiBox_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SmiBox)
template <class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::a() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedExportedSubClassBase::a(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::a(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kAOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedExportedSubClassBase<D, P>::set_a(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kAOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::b() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedExportedSubClassBase::b(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedExportedSubClassBase<D, P>::b(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kBOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject());
  return value;
}
template <class D, class P>
void TorqueGeneratedExportedSubClassBase<D, P>::set_b(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject());
  WRITE_FIELD(*this, kBOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kBOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedExportedSubClassBase<D, P>::TorqueGeneratedExportedSubClassBase(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsExportedSubClassBase_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClassBase<D, P>::TorqueGeneratedExportedSubClassBase(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClassBase_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClassBase)
template <class D, class P>
int32_t TorqueGeneratedExportedSubClass<D, P>::c_field() const {
  return this->template ReadField<int32_t>(kCFieldOffset);
}
template <class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_c_field(int32_t value) {
  this->template WriteField<int32_t>(kCFieldOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedExportedSubClass<D, P>::d_field() const {
  return this->template ReadField<int32_t>(kDFieldOffset);
}
template <class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_d_field(int32_t value) {
  this->template WriteField<int32_t>(kDFieldOffset, value);
}

template <class D, class P>
int TorqueGeneratedExportedSubClass<D, P>::e_field() const {
  return TaggedField<Smi, kEFieldOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedExportedSubClass<D, P>::set_e_field(int value) {
  WRITE_FIELD(*this, kEFieldOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedExportedSubClass<D, P>::TorqueGeneratedExportedSubClass(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsExportedSubClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClass<D, P>::TorqueGeneratedExportedSubClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClass)
template<class D, class P>
inline TorqueGeneratedAbstractInternalClass<D, P>::TorqueGeneratedAbstractInternalClass(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClass_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClass<D, P>::TorqueGeneratedAbstractInternalClass(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClass_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClass)
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass1<D, P>::TorqueGeneratedAbstractInternalClassSubclass1(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClassSubclass1_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass1<D, P>::TorqueGeneratedAbstractInternalClassSubclass1(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClassSubclass1_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClassSubclass1)
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass2<D, P>::TorqueGeneratedAbstractInternalClassSubclass2(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsAbstractInternalClassSubclass2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedAbstractInternalClassSubclass2<D, P>::TorqueGeneratedAbstractInternalClassSubclass2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsAbstractInternalClassSubclass2_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(AbstractInternalClassSubclass2)
template <class D, class P>
int TorqueGeneratedInternalClassWithSmiElements<D, P>::data() const {
  return TaggedField<Smi, kDataOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_data(int value) {
  WRITE_FIELD(*this, kDataOffset, Smi::FromInt(value));
}

template <class D, class P>
Oddball TorqueGeneratedInternalClassWithSmiElements<D, P>::object() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInternalClassWithSmiElements::object(isolate);
}
template <class D, class P>
Oddball TorqueGeneratedInternalClassWithSmiElements<D, P>::object(IsolateRoot isolate) const {
  auto value = TaggedField<Oddball, kObjectOffset>::load(isolate, *this);
  DCHECK(value.IsOddball());
  return value;
}
template <class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_object(Oddball value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsOddball());
  WRITE_FIELD(*this, kObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kObjectOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedInternalClassWithSmiElements<D, P>::entries(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kEntriesOffset + i * kTaggedSize;
  return this->template ReadField<Smi>(offset).value();
}
template <class D, class P>
void TorqueGeneratedInternalClassWithSmiElements<D, P>::set_entries(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->length());
  int offset = kEntriesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedInternalClassWithSmiElements<D, P>::TorqueGeneratedInternalClassWithSmiElements(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsInternalClassWithSmiElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClassWithSmiElements<D, P>::TorqueGeneratedInternalClassWithSmiElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClassWithSmiElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClassWithSmiElements)
template <class D, class P>
int32_t TorqueGeneratedInternalClassWithStructElements<D, P>::dummy1() const {
  return this->template ReadField<int32_t>(kDummy1Offset);
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_dummy1(int32_t value) {
  this->template WriteField<int32_t>(kDummy1Offset, value);
}

template <class D, class P>
int32_t TorqueGeneratedInternalClassWithStructElements<D, P>::dummy2() const {
  return this->template ReadField<int32_t>(kDummy2Offset);
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_dummy2(int32_t value) {
  this->template WriteField<int32_t>(kDummy2Offset, value);
}

template <class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::count() const {
  return TaggedField<Smi, kCountOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_count(int value) {
  WRITE_FIELD(*this, kCountOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::data() const {
  return TaggedField<Smi, kDataOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_data(int value) {
  WRITE_FIELD(*this, kDataOffset, Smi::FromInt(value));
}

template <class D, class P>
Object TorqueGeneratedInternalClassWithStructElements<D, P>::object() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedInternalClassWithStructElements::object(isolate);
}
template <class D, class P>
Object TorqueGeneratedInternalClassWithStructElements<D, P>::object(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kObjectOffset>::load(isolate, *this);
  DCHECK(value.IsHeapObject() || value.IsSmi());
  return value;
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_object(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsHeapObject() || value.IsSmi());
  WRITE_FIELD(*this, kObjectOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kObjectOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedInternalClassWithStructElements<D, P>::entries(int i) const {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->count());
  int offset = kEntriesOffset + i * kTaggedSize;
  return this->template ReadField<Smi>(offset).value();
}
template <class D, class P>
void TorqueGeneratedInternalClassWithStructElements<D, P>::set_entries(int i, int value) {
  DCHECK_GE(i, 0);
  DCHECK_LT(i, this->count());
  int offset = kEntriesOffset + i * kTaggedSize;
  WRITE_FIELD(*this, offset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedInternalClassWithStructElements<D, P>::TorqueGeneratedInternalClassWithStructElements(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsInternalClassWithStructElements_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedInternalClassWithStructElements<D, P>::TorqueGeneratedInternalClassWithStructElements(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsInternalClassWithStructElements_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(InternalClassWithStructElements)
template <class D, class P>
int32_t TorqueGeneratedExportedSubClass2<D, P>::x_field() const {
  return this->template ReadField<int32_t>(kXFieldOffset);
}
template <class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_x_field(int32_t value) {
  this->template WriteField<int32_t>(kXFieldOffset, value);
}

template <class D, class P>
int32_t TorqueGeneratedExportedSubClass2<D, P>::y_field() const {
  return this->template ReadField<int32_t>(kYFieldOffset);
}
template <class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_y_field(int32_t value) {
  this->template WriteField<int32_t>(kYFieldOffset, value);
}

template <class D, class P>
int TorqueGeneratedExportedSubClass2<D, P>::z_field() const {
  return TaggedField<Smi, kZFieldOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedExportedSubClass2<D, P>::set_z_field(int value) {
  WRITE_FIELD(*this, kZFieldOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedExportedSubClass2<D, P>::TorqueGeneratedExportedSubClass2(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsExportedSubClass2_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedExportedSubClass2<D, P>::TorqueGeneratedExportedSubClass2(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsExportedSubClass2_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(ExportedSubClass2)
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::receiver(isolate);
}
template <class D, class P>
JSReceiver TorqueGeneratedSortState<D, P>::receiver(IsolateRoot isolate) const {
  auto value = TaggedField<JSReceiver, kReceiverOffset>::load(isolate, *this);
  DCHECK(value.IsJSReceiver());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_receiver(JSReceiver value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSReceiver());
  WRITE_FIELD(*this, kReceiverOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kReceiverOffset, value, mode);
}

template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverMap(isolate);
}
template <class D, class P>
Map TorqueGeneratedSortState<D, P>::initialReceiverMap(IsolateRoot isolate) const {
  auto value = TaggedField<Map, kInitialReceiverMapOffset>::load(isolate, *this);
  DCHECK(value.IsMap());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverMap(Map value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsMap());
  WRITE_FIELD(*this, kInitialReceiverMapOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverMapOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::initialReceiverLength(isolate);
}
template <class D, class P>
Object TorqueGeneratedSortState<D, P>::initialReceiverLength(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kInitialReceiverLengthOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_initialReceiverLength(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kInitialReceiverLengthOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kInitialReceiverLengthOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::userCmpFn(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSortState<D, P>::userCmpFn(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kUserCmpFnOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_userCmpFn(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsCallableApiObject() || value.IsCallableJSProxy() || value.IsJSFunction() || value.IsJSBoundFunction());
  WRITE_FIELD(*this, kUserCmpFnOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kUserCmpFnOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::sortComparePtr() const {
  return TaggedField<Smi, kSortComparePtrOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortComparePtr(int value) {
  WRITE_FIELD(*this, kSortComparePtrOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::loadFn() const {
  return TaggedField<Smi, kLoadFnOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_loadFn(int value) {
  WRITE_FIELD(*this, kLoadFnOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::storeFn() const {
  return TaggedField<Smi, kStoreFnOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_storeFn(int value) {
  WRITE_FIELD(*this, kStoreFnOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::deleteFn() const {
  return TaggedField<Smi, kDeleteFnOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_deleteFn(int value) {
  WRITE_FIELD(*this, kDeleteFnOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::canUseSameAccessorFn() const {
  return TaggedField<Smi, kCanUseSameAccessorFnOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_canUseSameAccessorFn(int value) {
  WRITE_FIELD(*this, kCanUseSameAccessorFnOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::minGallop() const {
  return TaggedField<Smi, kMinGallopOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_minGallop(int value) {
  WRITE_FIELD(*this, kMinGallopOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::pendingRunsSize() const {
  return TaggedField<Smi, kPendingRunsSizeOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRunsSize(int value) {
  WRITE_FIELD(*this, kPendingRunsSizeOffset, Smi::FromInt(value));
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::pendingRuns(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::pendingRuns(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kPendingRunsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_pendingRuns(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kPendingRunsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kPendingRunsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::workArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::workArray(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kWorkArrayOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_workArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kWorkArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kWorkArrayOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSortState::tempArray(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSortState<D, P>::tempArray(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kTempArrayOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_tempArray(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kTempArrayOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTempArrayOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::sortLength() const {
  return TaggedField<Smi, kSortLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_sortLength(int value) {
  WRITE_FIELD(*this, kSortLengthOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSortState<D, P>::numberOfUndefined() const {
  return TaggedField<Smi, kNumberOfUndefinedOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSortState<D, P>::set_numberOfUndefined(int value) {
  WRITE_FIELD(*this, kNumberOfUndefinedOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSortState_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSortState<D, P>::TorqueGeneratedSortState(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSortState_NonInline(*this));
}
TQ_OBJECT_CONSTRUCTORS_IMPL(SortState)
