// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: rpcheader.proto
// Protobuf C++ Version: 5.28.2

#include "rpcheader.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace mprpc {

inline constexpr RpcHeader::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : service_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        method_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        args_size_{0u},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR RpcHeader::RpcHeader(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct RpcHeaderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RpcHeaderDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~RpcHeaderDefaultTypeInternal() {}
  union {
    RpcHeader _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
}  // namespace mprpc
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_rpcheader_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_rpcheader_2eproto = nullptr;
const ::uint32_t
    TableStruct_rpcheader_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::mprpc::RpcHeader, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::mprpc::RpcHeader, _impl_.service_name_),
        PROTOBUF_FIELD_OFFSET(::mprpc::RpcHeader, _impl_.method_name_),
        PROTOBUF_FIELD_OFFSET(::mprpc::RpcHeader, _impl_.args_size_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::mprpc::RpcHeader)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::mprpc::_RpcHeader_default_instance_._instance,
};
const char descriptor_table_protodef_rpcheader_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\017rpcheader.proto\022\005mprpc\"I\n\tRpcHeader\022\024\n"
    "\014service_name\030\001 \001(\014\022\023\n\013method_name\030\002 \001(\014"
    "\022\021\n\targs_size\030\003 \001(\rb\006proto3"
};
static ::absl::once_flag descriptor_table_rpcheader_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_rpcheader_2eproto = {
    false,
    false,
    107,
    descriptor_table_protodef_rpcheader_2eproto,
    "rpcheader.proto",
    &descriptor_table_rpcheader_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_rpcheader_2eproto::offsets,
    file_level_enum_descriptors_rpcheader_2eproto,
    file_level_service_descriptors_rpcheader_2eproto,
};
namespace mprpc {
// ===================================================================

class RpcHeader::_Internal {
 public:
};

RpcHeader::RpcHeader(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:mprpc.RpcHeader)
}
inline PROTOBUF_NDEBUG_INLINE RpcHeader::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::mprpc::RpcHeader& from_msg)
      : service_name_(arena, from.service_name_),
        method_name_(arena, from.method_name_),
        _cached_size_{0} {}

RpcHeader::RpcHeader(
    ::google::protobuf::Arena* arena,
    const RpcHeader& from)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  RpcHeader* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  _impl_.args_size_ = from._impl_.args_size_;

  // @@protoc_insertion_point(copy_constructor:mprpc.RpcHeader)
}
inline PROTOBUF_NDEBUG_INLINE RpcHeader::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : service_name_(arena),
        method_name_(arena),
        _cached_size_{0} {}

inline void RpcHeader::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  _impl_.args_size_ = {};
}
RpcHeader::~RpcHeader() {
  // @@protoc_insertion_point(destructor:mprpc.RpcHeader)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void RpcHeader::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.service_name_.Destroy();
  _impl_.method_name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    RpcHeader::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_RpcHeader_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &RpcHeader::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<RpcHeader>(),
            ::google::protobuf::Message::GetNewImpl<RpcHeader>(),
            ::google::protobuf::Message::GetClearImpl<RpcHeader>(), &RpcHeader::ByteSizeLong,
                &RpcHeader::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_._cached_size_),
            false,
        },
        &RpcHeader::kDescriptorMethods,
        &descriptor_table_rpcheader_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* RpcHeader::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> RpcHeader::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::mprpc::RpcHeader>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // bytes service_name = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.service_name_)}},
    // bytes method_name = 2;
    {::_pbi::TcParser::FastBS1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.method_name_)}},
    // uint32 args_size = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(RpcHeader, _impl_.args_size_), 63>(),
     {24, 63, 0, PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.args_size_)}},
  }}, {{
    65535, 65535
  }}, {{
    // bytes service_name = 1;
    {PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.service_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // bytes method_name = 2;
    {PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.method_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kBytes | ::_fl::kRepAString)},
    // uint32 args_size = 3;
    {PROTOBUF_FIELD_OFFSET(RpcHeader, _impl_.args_size_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

PROTOBUF_NOINLINE void RpcHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:mprpc.RpcHeader)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.service_name_.ClearToEmpty();
  _impl_.method_name_.ClearToEmpty();
  _impl_.args_size_ = 0u;
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* RpcHeader::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const RpcHeader& this_ = static_cast<const RpcHeader&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* RpcHeader::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const RpcHeader& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:mprpc.RpcHeader)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          // bytes service_name = 1;
          if (!this_._internal_service_name().empty()) {
            const std::string& _s = this_._internal_service_name();
            target = stream->WriteBytesMaybeAliased(1, _s, target);
          }

          // bytes method_name = 2;
          if (!this_._internal_method_name().empty()) {
            const std::string& _s = this_._internal_method_name();
            target = stream->WriteBytesMaybeAliased(2, _s, target);
          }

          // uint32 args_size = 3;
          if (this_._internal_args_size() != 0) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
                3, this_._internal_args_size(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:mprpc.RpcHeader)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t RpcHeader::ByteSizeLong(const MessageLite& base) {
          const RpcHeader& this_ = static_cast<const RpcHeader&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t RpcHeader::ByteSizeLong() const {
          const RpcHeader& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:mprpc.RpcHeader)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
           {
            // bytes service_name = 1;
            if (!this_._internal_service_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                              this_._internal_service_name());
            }
            // bytes method_name = 2;
            if (!this_._internal_method_name().empty()) {
              total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                              this_._internal_method_name());
            }
            // uint32 args_size = 3;
            if (this_._internal_args_size() != 0) {
              total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
                  this_._internal_args_size());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void RpcHeader::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<RpcHeader*>(&to_msg);
  auto& from = static_cast<const RpcHeader&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:mprpc.RpcHeader)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_service_name().empty()) {
    _this->_internal_set_service_name(from._internal_service_name());
  }
  if (!from._internal_method_name().empty()) {
    _this->_internal_set_method_name(from._internal_method_name());
  }
  if (from._internal_args_size() != 0) {
    _this->_impl_.args_size_ = from._impl_.args_size_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void RpcHeader::CopyFrom(const RpcHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mprpc.RpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void RpcHeader::InternalSwap(RpcHeader* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.service_name_, &other->_impl_.service_name_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.method_name_, &other->_impl_.method_name_, arena);
        swap(_impl_.args_size_, other->_impl_.args_size_);
}

::google::protobuf::Metadata RpcHeader::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace mprpc
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_rpcheader_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
