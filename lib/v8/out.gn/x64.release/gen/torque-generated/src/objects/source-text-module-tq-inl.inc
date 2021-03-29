template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::code() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::code(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::code(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kCodeOffset>::load(isolate, *this);
  DCHECK(value.IsJSFunction() || value.IsJSGeneratorObject() || value.IsSharedFunctionInfo());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_code(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSFunction() || value.IsJSGeneratorObject() || value.IsSharedFunctionInfo());
  WRITE_FIELD(*this, kCodeOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kCodeOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_exports() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::regular_exports(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_exports(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kRegularExportsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_regular_exports(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRegularExportsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegularExportsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_imports() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::regular_imports(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::regular_imports(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kRegularImportsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_regular_imports(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRegularImportsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRegularImportsOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::requested_modules() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::requested_modules(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedSourceTextModule<D, P>::requested_modules(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kRequestedModulesOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_requested_modules(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kRequestedModulesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kRequestedModulesOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::import_meta() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::import_meta(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::import_meta(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kImportMetaOffset>::load(isolate, *this);
  DCHECK(value.IsJSObject() || value.IsTheHole());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_import_meta(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsJSObject() || value.IsTheHole());
  WRITE_FIELD(*this, kImportMetaOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kImportMetaOffset, value, mode);
}

template <class D, class P>
ArrayList TorqueGeneratedSourceTextModule<D, P>::async_parent_modules() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::async_parent_modules(isolate);
}
template <class D, class P>
ArrayList TorqueGeneratedSourceTextModule<D, P>::async_parent_modules(IsolateRoot isolate) const {
  auto value = TaggedField<ArrayList, kAsyncParentModulesOffset>::load(isolate, *this);
  DCHECK(value.IsArrayList());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_async_parent_modules(ArrayList value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsArrayList());
  WRITE_FIELD(*this, kAsyncParentModulesOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kAsyncParentModulesOffset, value, mode);
}

template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::top_level_capability() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModule::top_level_capability(isolate);
}
template <class D, class P>
HeapObject TorqueGeneratedSourceTextModule<D, P>::top_level_capability(IsolateRoot isolate) const {
  auto value = TaggedField<HeapObject, kTopLevelCapabilityOffset>::load(isolate, *this);
  DCHECK(value.IsUndefined() || value.IsJSPromise());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_top_level_capability(HeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsUndefined() || value.IsJSPromise());
  WRITE_FIELD(*this, kTopLevelCapabilityOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kTopLevelCapabilityOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedSourceTextModule<D, P>::dfs_index() const {
  return TaggedField<Smi, kDfsIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_dfs_index(int value) {
  WRITE_FIELD(*this, kDfsIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModule<D, P>::dfs_ancestor_index() const {
  return TaggedField<Smi, kDfsAncestorIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_dfs_ancestor_index(int value) {
  WRITE_FIELD(*this, kDfsAncestorIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModule<D, P>::pending_async_dependencies() const {
  return TaggedField<Smi, kPendingAsyncDependenciesOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_pending_async_dependencies(int value) {
  WRITE_FIELD(*this, kPendingAsyncDependenciesOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModule<D, P>::flags() const {
  return TaggedField<Smi, kFlagsOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModule<D, P>::set_flags(int value) {
  WRITE_FIELD(*this, kFlagsOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSourceTextModule<D, P>::TorqueGeneratedSourceTextModule(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSourceTextModule_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSourceTextModule<D, P>::TorqueGeneratedSourceTextModule(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSourceTextModule_NonInline(*this));
}
template <class D, class P>
String TorqueGeneratedModuleRequest<D, P>::specifier() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedModuleRequest::specifier(isolate);
}
template <class D, class P>
String TorqueGeneratedModuleRequest<D, P>::specifier(IsolateRoot isolate) const {
  auto value = TaggedField<String, kSpecifierOffset>::load(isolate, *this);
  DCHECK(value.IsString());
  return value;
}
template <class D, class P>
void TorqueGeneratedModuleRequest<D, P>::set_specifier(String value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString());
  WRITE_FIELD(*this, kSpecifierOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kSpecifierOffset, value, mode);
}

template <class D, class P>
FixedArray TorqueGeneratedModuleRequest<D, P>::import_assertions() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedModuleRequest::import_assertions(isolate);
}
template <class D, class P>
FixedArray TorqueGeneratedModuleRequest<D, P>::import_assertions(IsolateRoot isolate) const {
  auto value = TaggedField<FixedArray, kImportAssertionsOffset>::load(isolate, *this);
  DCHECK(value.IsFixedArray());
  return value;
}
template <class D, class P>
void TorqueGeneratedModuleRequest<D, P>::set_import_assertions(FixedArray value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsFixedArray());
  WRITE_FIELD(*this, kImportAssertionsOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kImportAssertionsOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedModuleRequest<D, P>::position() const {
  return TaggedField<Smi, kPositionOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedModuleRequest<D, P>::set_position(int value) {
  WRITE_FIELD(*this, kPositionOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedModuleRequest<D, P>::TorqueGeneratedModuleRequest(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsModuleRequest_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedModuleRequest<D, P>::TorqueGeneratedModuleRequest(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsModuleRequest_NonInline(*this));
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::export_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::export_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::export_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kExportNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_export_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kExportNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kExportNameOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::local_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::local_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::local_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kLocalNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_local_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kLocalNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kLocalNameOffset, value, mode);
}

template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::import_name() const {
  IsolateRoot isolate = GetIsolateForPtrCompr(*this);
  return TorqueGeneratedSourceTextModuleInfoEntry::import_name(isolate);
}
template <class D, class P>
PrimitiveHeapObject TorqueGeneratedSourceTextModuleInfoEntry<D, P>::import_name(IsolateRoot isolate) const {
  auto value = TaggedField<PrimitiveHeapObject, kImportNameOffset>::load(isolate, *this);
  DCHECK(value.IsString() || value.IsUndefined());
  return value;
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_import_name(PrimitiveHeapObject value, WriteBarrierMode mode) {
  SLOW_DCHECK(value.IsString() || value.IsUndefined());
  WRITE_FIELD(*this, kImportNameOffset, value);
  CONDITIONAL_WRITE_BARRIER(*this, kImportNameOffset, value, mode);
}

template <class D, class P>
int TorqueGeneratedSourceTextModuleInfoEntry<D, P>::module_request() const {
  return TaggedField<Smi, kModuleRequestOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_module_request(int value) {
  WRITE_FIELD(*this, kModuleRequestOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModuleInfoEntry<D, P>::cell_index() const {
  return TaggedField<Smi, kCellIndexOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_cell_index(int value) {
  WRITE_FIELD(*this, kCellIndexOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModuleInfoEntry<D, P>::beg_pos() const {
  return TaggedField<Smi, kBegPosOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_beg_pos(int value) {
  WRITE_FIELD(*this, kBegPosOffset, Smi::FromInt(value));
}

template <class D, class P>
int TorqueGeneratedSourceTextModuleInfoEntry<D, P>::end_pos() const {
  return TaggedField<Smi, kEndPosOffset>::load(*this).value();
}
template <class D, class P>
void TorqueGeneratedSourceTextModuleInfoEntry<D, P>::set_end_pos(int value) {
  WRITE_FIELD(*this, kEndPosOffset, Smi::FromInt(value));
}

template<class D, class P>
inline TorqueGeneratedSourceTextModuleInfoEntry<D, P>::TorqueGeneratedSourceTextModuleInfoEntry(Address ptr)
  : P(ptr) {
  SLOW_DCHECK(IsSourceTextModuleInfoEntry_NonInline(*this));
}
template<class D, class P>
inline TorqueGeneratedSourceTextModuleInfoEntry<D, P>::TorqueGeneratedSourceTextModuleInfoEntry(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi)
  : P(ptr, allow_smi) {
  SLOW_DCHECK((allow_smi == HeapObject::AllowInlineSmiStorage::kAllowBeingASmi && this->IsSmi()) || IsSourceTextModuleInfoEntry_NonInline(*this));
}
