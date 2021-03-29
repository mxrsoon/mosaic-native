template <class D, class P>
double TorqueGeneratedOddball<D, P>::to_number_raw() const {
  return this->template ReadField<double>(kToNumberRawOffset);
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number_raw(double value) {
  this->template WriteField<double>(kToNumberRawOffset, value);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_string(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::to_string(IsolateRoot isolate) const {
  auto value = TaggedField<String, kToStringOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_string(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kToStringOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToStringOffset, value, mode);
}

template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::to_number(isolate);
}
template <class D, class P>
Object TorqueGeneratedOddball<D, P>::to_number(IsolateRoot isolate) const {
  auto value = TaggedField<Object, kToNumberOffset>::load(isolate, *this);
  DCHECK(value.IsSmi() || value.IsHeapNumber());
  return value;
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_to_number(Object value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsSmi() || value.IsHeapNumber());
  WRITE_FIELD(*this, kToNumberOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kToNumberOffset, value, mode);
}

template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedOddball::type_of(isolate);
}
template <class D, class P>
String TorqueGeneratedOddball<D, P>::type_of(IsolateRoot isolate) const {
  auto value = TaggedField<String, kTypeOfOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_type_of(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kTypeOfOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTypeOfOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedOddball<D, P>::kind() const {
  return TaggedField<Smi, kKindOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedOddball<D, P>::set_kind(int value) {
  WRITE_FIELD(*this, kKindOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedOddball<D, P>::TorqueGeneratedOddball(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsOddball_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedOddball<D, P>::TorqueGeneratedOddball(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsOddball_NonInline(*this));
}
