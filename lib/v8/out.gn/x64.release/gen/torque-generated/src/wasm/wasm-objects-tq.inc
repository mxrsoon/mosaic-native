class WasmInstanceObject;
class WasmExportedFunctionData;
class WasmJSFunctionData;
class WasmCapiFunctionData;
class WasmIndirectFunctionTable;
class WasmExceptionTag;
class WasmModuleObject;
class WasmTableObject;
class WasmMemoryObject;
class WasmGlobalObject;
class WasmExceptionObject;
class AsmWasmData;
class WasmTypeInfo;
class WasmStruct;
class WasmArray;

// Alias for HeapObject::IsWasmCapiFunctionData() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmCapiFunctionData_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedWasmCapiFunctionData : public P {
  static_assert(std::is_same<WasmCapiFunctionData, D>::value,
    "Use this class as direct base for WasmCapiFunctionData.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedWasmCapiFunctionData.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmCapiFunctionData<D,P>;

  inline Address call_target() const;
  inline void set_call_target(Address value);

  inline Foreign embedder_data() const;
  inline Foreign embedder_data(IsolateRoot isolates) const;
  inline void set_embedder_data(Foreign value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline Code wrapper_code() const;
  inline Code wrapper_code(IsolateRoot isolates) const;
  inline void set_wrapper_code(Code value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: PodArrayOfWasmValueType
  inline PodArray<wasm::ValueType> serialized_signature() const;
  inline PodArray<wasm::ValueType> serialized_signature(IsolateRoot isolates) const;
  inline void set_serialized_signature(PodArray<wasm::ValueType> value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }

  DECL_PRINTER(WasmCapiFunctionData)
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void WasmCapiFunctionDataVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kCallTargetOffset = P::kHeaderSize;
  static constexpr int kCallTargetOffsetEnd = kCallTargetOffset + kSystemPointerSize - 1;
  static constexpr int kStartOfStrongFieldsOffset = kCallTargetOffsetEnd + 1;
  static constexpr int kEmbedderDataOffset = kCallTargetOffsetEnd + 1;
  static constexpr int kEmbedderDataOffsetEnd = kEmbedderDataOffset + kTaggedSize - 1;
  static constexpr int kWrapperCodeOffset = kEmbedderDataOffsetEnd + 1;
  static constexpr int kWrapperCodeOffsetEnd = kWrapperCodeOffset + kTaggedSize - 1;
  static constexpr int kSerializedSignatureOffset = kWrapperCodeOffsetEnd + 1;
  static constexpr int kSerializedSignatureOffsetEnd = kSerializedSignatureOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kHeaderSize = kSerializedSignatureOffsetEnd + 1;
  static constexpr int kSize = kSerializedSignatureOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmCapiFunctionData() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmCapiFunctionData, 
      DAlias>::value,
      "class TorqueGeneratedWasmCapiFunctionData should be used as direct base for WasmCapiFunctionData.");
  }
 protected:
  inline explicit TorqueGeneratedWasmCapiFunctionData(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmCapiFunctionData(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

class WasmCapiFunctionData : public TorqueGeneratedWasmCapiFunctionData<WasmCapiFunctionData, HeapObject> {
 public:
  class BodyDescriptor;
  TQ_OBJECT_CONSTRUCTORS(WasmCapiFunctionData)
};


// Alias for HeapObject::IsWasmExceptionTag() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmExceptionTag_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedWasmExceptionTag : public P {
  static_assert(std::is_same<WasmExceptionTag, D>::value,
    "Use this class as direct base for WasmExceptionTag.");
  static_assert(std::is_same<Struct, P>::value,
    "Pass in Struct as second template parameter for TorqueGeneratedWasmExceptionTag.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmExceptionTag<D,P>;

  inline int index() const;
  inline void set_index(int value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void WasmExceptionTagVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kIndexOffset = P::kHeaderSize;
  static constexpr int kIndexOffsetEnd = kIndexOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kIndexOffsetEnd + 1;
  static constexpr int kHeaderSize = kIndexOffsetEnd + 1;
  static constexpr int kSize = kIndexOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmExceptionTag() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmExceptionTag, 
      DAlias>::value,
      "class TorqueGeneratedWasmExceptionTag should be used as direct base for WasmExceptionTag.");
  }
 protected:
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmExceptionTag(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};


// Alias for HeapObject::IsWasmTypeInfo() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmTypeInfo_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedWasmTypeInfo : public P {
  static_assert(std::is_same<WasmTypeInfo, D>::value,
    "Use this class as direct base for WasmTypeInfo.");
  static_assert(std::is_same<Foreign, P>::value,
    "Pass in Foreign as second template parameter for TorqueGeneratedWasmTypeInfo.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmTypeInfo<D,P>;

  inline Map parent() const;
  inline Map parent(IsolateRoot isolates) const;
  inline void set_parent(Map value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline FixedArray supertypes() const;
  inline FixedArray supertypes(IsolateRoot isolates) const;
  inline void set_supertypes(FixedArray value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline ArrayList subtypes() const;
  inline ArrayList subtypes(IsolateRoot isolates) const;
  inline void set_subtypes(ArrayList value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void WasmTypeInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kParentOffset = P::kHeaderSize;
  static constexpr int kParentOffsetEnd = kParentOffset + kTaggedSize - 1;
  static constexpr int kSupertypesOffset = kParentOffsetEnd + 1;
  static constexpr int kSupertypesOffsetEnd = kSupertypesOffset + kTaggedSize - 1;
  static constexpr int kSubtypesOffset = kSupertypesOffsetEnd + 1;
  static constexpr int kSubtypesOffsetEnd = kSubtypesOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kSubtypesOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kSubtypesOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kSubtypesOffsetEnd + 1;
  static constexpr int kHeaderSize = kSubtypesOffsetEnd + 1;
  static constexpr int kSize = kSubtypesOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 24);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmTypeInfo() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmTypeInfo, 
      DAlias>::value,
      "class TorqueGeneratedWasmTypeInfo should be used as direct base for WasmTypeInfo.");
  }
 protected:
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmTypeInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};


// Alias for HeapObject::IsWasmStruct() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmStruct_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedWasmStruct : public P {
  static_assert(std::is_same<WasmStruct, D>::value,
    "Use this class as direct base for WasmStruct.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedWasmStruct.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmStruct<D,P>;

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void WasmStructVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfWeakFieldsOffset = P::kHeaderSize;
  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kEndOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kHeaderSize = P::kHeaderSize;
  static constexpr int kSize = P::kHeaderSize;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 4);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmStruct() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmStruct, 
      DAlias>::value,
      "class TorqueGeneratedWasmStruct should be used as direct base for WasmStruct.");
  }
 protected:
  inline explicit TorqueGeneratedWasmStruct(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmStruct(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};


// Alias for HeapObject::IsWasmArray() that avoids inlining.
V8_EXPORT_PRIVATE bool IsWasmArray_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedWasmArray : public P {
  static_assert(std::is_same<WasmArray, D>::value,
    "Use this class as direct base for WasmArray.");
  static_assert(std::is_same<HeapObject, P>::value,
    "Pass in HeapObject as second template parameter for TorqueGeneratedWasmArray.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedWasmArray<D,P>;

  inline uint32_t length() const;
  inline void set_length(uint32_t value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void WasmArrayVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kLengthOffset = P::kHeaderSize;
  static constexpr int kLengthOffsetEnd = kLengthOffset + kInt32Size - 1;
  static constexpr int kOptionalPaddingOffset = kLengthOffsetEnd + 1;
  static constexpr int kOptionalPaddingOffsetEnd = kOptionalPaddingOffset + 0 - 1;
  static constexpr int kStartOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kStartOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kEndOfStrongFieldsOffset = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kHeaderSize = kOptionalPaddingOffsetEnd + 1;
  static constexpr int kSize = kOptionalPaddingOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 8);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedWasmArray() : P() {
    static_assert(std::is_base_of<TorqueGeneratedWasmArray, 
      DAlias>::value,
      "class TorqueGeneratedWasmArray should be used as direct base for WasmArray.");
  }
 protected:
  inline explicit TorqueGeneratedWasmArray(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedWasmArray(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

