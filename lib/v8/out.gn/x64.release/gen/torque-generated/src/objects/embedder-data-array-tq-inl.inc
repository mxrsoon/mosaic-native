template <class D, class P>
int TorqueGeneratedEmbedderDataArray<D, P>::length() const {
  return TaggedField<Smi, kLengthOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedEmbedderDataArray<D, P>::set_length(int value) {
  WRITE_FIELD(*this, kLengthOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedEmbedderDataArray<D, P>::TorqueGeneratedEmbedderDataArray(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsEmbedderDataArray_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedEmbedderDataArray<D, P>::TorqueGeneratedEmbedderDataArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsEmbedderDataArray_NonInline(*this));
}
