template <class D, class P>
String TorqueGeneratedSyntheticModule<D, P>::name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::name(isolate);
}
template <class D, class P>
String TorqueGeneratedSyntheticModule<D, P>::name(IsolateRoot isolate) const {
  auto value = TaggedField<String, kNameOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_name(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kNameOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSyntheticModule<D, P>::export_names() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::export_names(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSyntheticModule<D, P>::export_names(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kExportNamesOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_export_names(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kExportNamesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportNamesOffset, value, mode);
}

template <class D, class P>
Foreign TorqueGeneratedSyntheticModule<D, P>::evaluation_steps() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSyntheticModule::evaluation_steps(isolate);
}
template <class D, class P>
Foreign TorqueGeneratedSyntheticModule<D, P>::evaluation_steps(IsolateRoot isolate) const {
  auto value = TaggedField<Foreign, kEvaluationStepsOffset>::load(isolate, *this);
  DCHECK(value.IsForeign());
  return value;
}
template <class D, class P>
void TorqueGeneratedSyntheticModule<D, P>::set_evaluation_steps(Foreign value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsForeign());
  WRITE_FIELD(*this, kEvaluationStepsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kEvaluationStepsOffset, value, mode);
}

template<class D, class P>
inline TorqueGeneratedSyntheticModule<D, P>::TorqueGeneratedSyntheticModule(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSyntheticModule_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSyntheticModule<D, P>::TorqueGeneratedSyntheticModule(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSyntheticModule_NonInline(*this));
}
