class StackFrameInfo;
class StackTraceFrame;

// Alias for HeapObject::IsStackFrameInfo() that avoids inlining.
V8_EXPORT_PRIVATE bool IsStackFrameInfo_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedStackFrameInfo : public P {
  static_assert(std::is_same<StackFrameInfo, D>::value,
    "Use this class as direct base for StackFrameInfo.");
  static_assert(std::is_same<Struct, P>::value,
    "Pass in Struct as second template parameter for TorqueGeneratedStackFrameInfo.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedStackFrameInfo<D,P>;

  inline int line_number() const;
  inline void set_line_number(int value);

  inline int column_number() const;
  inline void set_column_number(int value);

  inline int promise_combinator_index() const;
  inline void set_promise_combinator_index(int value);

  inline int script_id() const;
  inline void set_script_id(int value);

  inline int wasm_function_index() const;
  inline void set_wasm_function_index(int value);

  inline Object script_name() const;
  inline Object script_name(IsolateRoot isolates) const;
  inline void set_script_name(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline Object script_name_or_source_url() const;
  inline Object script_name_or_source_url(IsolateRoot isolates) const;
  inline void set_script_name_or_source_url(Object value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | Null | Undefined)
  inline PrimitiveHeapObject function_name() const;
  inline PrimitiveHeapObject function_name(IsolateRoot isolates) const;
  inline void set_function_name(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | Null | Undefined)
  inline PrimitiveHeapObject method_name() const;
  inline PrimitiveHeapObject method_name(IsolateRoot isolates) const;
  inline void set_method_name(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | Null | Undefined)
  inline PrimitiveHeapObject type_name() const;
  inline PrimitiveHeapObject type_name(IsolateRoot isolates) const;
  inline void set_type_name(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | Null | Undefined)
  inline PrimitiveHeapObject eval_origin() const;
  inline PrimitiveHeapObject eval_origin(IsolateRoot isolates) const;
  inline void set_eval_origin(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (class String | Null | Undefined)
  inline PrimitiveHeapObject wasm_module_name() const;
  inline PrimitiveHeapObject wasm_module_name(IsolateRoot isolates) const;
  inline void set_wasm_module_name(PrimitiveHeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  // Torque type: (Null | Undefined | class WasmInstanceObject)
  inline HeapObject wasm_instance() const;
  inline HeapObject wasm_instance(IsolateRoot isolates) const;
  inline void set_wasm_instance(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline int flag() const;
  inline void set_flag(int value);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void StackFrameInfoVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kLineNumberOffset = P::kHeaderSize;
  static constexpr int kLineNumberOffsetEnd = kLineNumberOffset + kTaggedSize - 1;
  static constexpr int kColumnNumberOffset = kLineNumberOffsetEnd + 1;
  static constexpr int kColumnNumberOffsetEnd = kColumnNumberOffset + kTaggedSize - 1;
  static constexpr int kPromiseCombinatorIndexOffset = kColumnNumberOffsetEnd + 1;
  static constexpr int kPromiseCombinatorIndexOffsetEnd = kPromiseCombinatorIndexOffset + kTaggedSize - 1;
  static constexpr int kScriptIdOffset = kPromiseCombinatorIndexOffsetEnd + 1;
  static constexpr int kScriptIdOffsetEnd = kScriptIdOffset + kTaggedSize - 1;
  static constexpr int kWasmFunctionIndexOffset = kScriptIdOffsetEnd + 1;
  static constexpr int kWasmFunctionIndexOffsetEnd = kWasmFunctionIndexOffset + kTaggedSize - 1;
  static constexpr int kScriptNameOffset = kWasmFunctionIndexOffsetEnd + 1;
  static constexpr int kScriptNameOffsetEnd = kScriptNameOffset + kTaggedSize - 1;
  static constexpr int kScriptNameOrSourceUrlOffset = kScriptNameOffsetEnd + 1;
  static constexpr int kScriptNameOrSourceUrlOffsetEnd = kScriptNameOrSourceUrlOffset + kTaggedSize - 1;
  static constexpr int kFunctionNameOffset = kScriptNameOrSourceUrlOffsetEnd + 1;
  static constexpr int kFunctionNameOffsetEnd = kFunctionNameOffset + kTaggedSize - 1;
  static constexpr int kMethodNameOffset = kFunctionNameOffsetEnd + 1;
  static constexpr int kMethodNameOffsetEnd = kMethodNameOffset + kTaggedSize - 1;
  static constexpr int kTypeNameOffset = kMethodNameOffsetEnd + 1;
  static constexpr int kTypeNameOffsetEnd = kTypeNameOffset + kTaggedSize - 1;
  static constexpr int kEvalOriginOffset = kTypeNameOffsetEnd + 1;
  static constexpr int kEvalOriginOffsetEnd = kEvalOriginOffset + kTaggedSize - 1;
  static constexpr int kWasmModuleNameOffset = kEvalOriginOffsetEnd + 1;
  static constexpr int kWasmModuleNameOffsetEnd = kWasmModuleNameOffset + kTaggedSize - 1;
  static constexpr int kWasmInstanceOffset = kWasmModuleNameOffsetEnd + 1;
  static constexpr int kWasmInstanceOffsetEnd = kWasmInstanceOffset + kTaggedSize - 1;
  static constexpr int kFlagOffset = kWasmInstanceOffsetEnd + 1;
  static constexpr int kFlagOffsetEnd = kFlagOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFlagOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFlagOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFlagOffsetEnd + 1;
  static constexpr int kHeaderSize = kFlagOffsetEnd + 1;
  static constexpr int kSize = kFlagOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 60);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedStackFrameInfo() : P() {
    static_assert(std::is_base_of<TorqueGeneratedStackFrameInfo, 
      DAlias>::value,
      "class TorqueGeneratedStackFrameInfo should be used as direct base for StackFrameInfo.");
  }
 protected:
  inline explicit TorqueGeneratedStackFrameInfo(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedStackFrameInfo(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};


// Alias for HeapObject::IsStackTraceFrame() that avoids inlining.
V8_EXPORT_PRIVATE bool IsStackTraceFrame_NonInline(HeapObject o);

template <class D, class P>
class TorqueGeneratedStackTraceFrame : public P {
  static_assert(std::is_same<StackTraceFrame, D>::value,
    "Use this class as direct base for StackTraceFrame.");
  static_assert(std::is_same<Struct, P>::value,
    "Pass in Struct as second template parameter for TorqueGeneratedStackTraceFrame.");
 public: 
  using Super = P;
  using TorqueGeneratedClass = TorqueGeneratedStackTraceFrame<D,P>;

  // Torque type: (Undefined | FrameArray)
  inline HeapObject frame_array() const;
  inline HeapObject frame_array(IsolateRoot isolates) const;
  inline void set_frame_array(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  inline int frame_index() const;
  inline void set_frame_index(int value);

  // Torque type: (Undefined | class StackFrameInfo)
  inline HeapObject frame_info() const;
  inline HeapObject frame_info(IsolateRoot isolates) const;
  inline void set_frame_info(HeapObject value, WriteBarrierMode mode = UPDATE_WRITE_BARRIER);

  V8_INLINE static D cast(Object object) {
    return D(object.ptr());
  }
  V8_INLINE static D unchecked_cast(Object object) {
    return bit_cast<D>(object);
  }
#ifdef VERIFY_HEAP
  V8_EXPORT_PRIVATE void StackTraceFrameVerify(Isolate* isolate);
#endif  // VERIFY_HEAP

  static constexpr int kStartOfStrongFieldsOffset = P::kHeaderSize;
  static constexpr int kFrameArrayOffset = P::kHeaderSize;
  static constexpr int kFrameArrayOffsetEnd = kFrameArrayOffset + kTaggedSize - 1;
  static constexpr int kFrameIndexOffset = kFrameArrayOffsetEnd + 1;
  static constexpr int kFrameIndexOffsetEnd = kFrameIndexOffset + kTaggedSize - 1;
  static constexpr int kFrameInfoOffset = kFrameIndexOffsetEnd + 1;
  static constexpr int kFrameInfoOffsetEnd = kFrameInfoOffset + kTaggedSize - 1;
  static constexpr int kEndOfStrongFieldsOffset = kFrameInfoOffsetEnd + 1;
  static constexpr int kStartOfWeakFieldsOffset = kFrameInfoOffsetEnd + 1;
  static constexpr int kEndOfWeakFieldsOffset = kFrameInfoOffsetEnd + 1;
  static constexpr int kHeaderSize = kFrameInfoOffsetEnd + 1;
  static constexpr int kSize = kFrameInfoOffsetEnd + 1;

  V8_INLINE static constexpr int32_t SizeFor() {
    DCHECK(kHeaderSize == kSize && kHeaderSize == 16);
    int32_t size = kHeaderSize;
    return size;
  }

  V8_INLINE int32_t AllocatedSize() {
    return SizeFor();
  }

  friend class Factory;

 public:
  template <class DAlias = D>
  constexpr TorqueGeneratedStackTraceFrame() : P() {
    static_assert(std::is_base_of<TorqueGeneratedStackTraceFrame, 
      DAlias>::value,
      "class TorqueGeneratedStackTraceFrame should be used as direct base for StackTraceFrame.");
  }
 protected:
  inline explicit TorqueGeneratedStackTraceFrame(Address ptr);
  // Special-purpose constructor for subclasses that have fast paths where
  // their ptr() is a Smi.
  inline explicit TorqueGeneratedStackTraceFrame(Address ptr, HeapObject::AllowInlineSmiStorage allow_smi);
};

