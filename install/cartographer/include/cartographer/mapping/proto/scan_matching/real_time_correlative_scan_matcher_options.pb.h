// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/scan_matching/real_time_correlative_scan_matcher_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto;
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {
class RealTimeCorrelativeScanMatcherOptions;
class RealTimeCorrelativeScanMatcherOptionsDefaultTypeInternal;
extern RealTimeCorrelativeScanMatcherOptionsDefaultTypeInternal _RealTimeCorrelativeScanMatcherOptions_default_instance_;
}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions* Arena::CreateMaybeMessage<::cartographer::mapping::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace mapping {
namespace scan_matching {
namespace proto {

// ===================================================================

class RealTimeCorrelativeScanMatcherOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions) */ {
 public:
  inline RealTimeCorrelativeScanMatcherOptions() : RealTimeCorrelativeScanMatcherOptions(nullptr) {};
  virtual ~RealTimeCorrelativeScanMatcherOptions();

  RealTimeCorrelativeScanMatcherOptions(const RealTimeCorrelativeScanMatcherOptions& from);
  RealTimeCorrelativeScanMatcherOptions(RealTimeCorrelativeScanMatcherOptions&& from) noexcept
    : RealTimeCorrelativeScanMatcherOptions() {
    *this = ::std::move(from);
  }

  inline RealTimeCorrelativeScanMatcherOptions& operator=(const RealTimeCorrelativeScanMatcherOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline RealTimeCorrelativeScanMatcherOptions& operator=(RealTimeCorrelativeScanMatcherOptions&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RealTimeCorrelativeScanMatcherOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RealTimeCorrelativeScanMatcherOptions* internal_default_instance() {
    return reinterpret_cast<const RealTimeCorrelativeScanMatcherOptions*>(
               &_RealTimeCorrelativeScanMatcherOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RealTimeCorrelativeScanMatcherOptions& a, RealTimeCorrelativeScanMatcherOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(RealTimeCorrelativeScanMatcherOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RealTimeCorrelativeScanMatcherOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RealTimeCorrelativeScanMatcherOptions* New() const final {
    return CreateMaybeMessage<RealTimeCorrelativeScanMatcherOptions>(nullptr);
  }

  RealTimeCorrelativeScanMatcherOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RealTimeCorrelativeScanMatcherOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RealTimeCorrelativeScanMatcherOptions& from);
  void MergeFrom(const RealTimeCorrelativeScanMatcherOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RealTimeCorrelativeScanMatcherOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions";
  }
  protected:
  explicit RealTimeCorrelativeScanMatcherOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto);
    return ::descriptor_table_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLinearSearchWindowFieldNumber = 1,
    kAngularSearchWindowFieldNumber = 2,
    kTranslationDeltaCostWeightFieldNumber = 3,
    kRotationDeltaCostWeightFieldNumber = 4,
  };
  // double linear_search_window = 1;
  void clear_linear_search_window();
  double linear_search_window() const;
  void set_linear_search_window(double value);
  private:
  double _internal_linear_search_window() const;
  void _internal_set_linear_search_window(double value);
  public:

  // double angular_search_window = 2;
  void clear_angular_search_window();
  double angular_search_window() const;
  void set_angular_search_window(double value);
  private:
  double _internal_angular_search_window() const;
  void _internal_set_angular_search_window(double value);
  public:

  // double translation_delta_cost_weight = 3;
  void clear_translation_delta_cost_weight();
  double translation_delta_cost_weight() const;
  void set_translation_delta_cost_weight(double value);
  private:
  double _internal_translation_delta_cost_weight() const;
  void _internal_set_translation_delta_cost_weight(double value);
  public:

  // double rotation_delta_cost_weight = 4;
  void clear_rotation_delta_cost_weight();
  double rotation_delta_cost_weight() const;
  void set_rotation_delta_cost_weight(double value);
  private:
  double _internal_rotation_delta_cost_weight() const;
  void _internal_set_rotation_delta_cost_weight(double value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double linear_search_window_;
  double angular_search_window_;
  double translation_delta_cost_weight_;
  double rotation_delta_cost_weight_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RealTimeCorrelativeScanMatcherOptions

// double linear_search_window = 1;
inline void RealTimeCorrelativeScanMatcherOptions::clear_linear_search_window() {
  linear_search_window_ = 0;
}
inline double RealTimeCorrelativeScanMatcherOptions::_internal_linear_search_window() const {
  return linear_search_window_;
}
inline double RealTimeCorrelativeScanMatcherOptions::linear_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.linear_search_window)
  return _internal_linear_search_window();
}
inline void RealTimeCorrelativeScanMatcherOptions::_internal_set_linear_search_window(double value) {
  
  linear_search_window_ = value;
}
inline void RealTimeCorrelativeScanMatcherOptions::set_linear_search_window(double value) {
  _internal_set_linear_search_window(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.linear_search_window)
}

// double angular_search_window = 2;
inline void RealTimeCorrelativeScanMatcherOptions::clear_angular_search_window() {
  angular_search_window_ = 0;
}
inline double RealTimeCorrelativeScanMatcherOptions::_internal_angular_search_window() const {
  return angular_search_window_;
}
inline double RealTimeCorrelativeScanMatcherOptions::angular_search_window() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.angular_search_window)
  return _internal_angular_search_window();
}
inline void RealTimeCorrelativeScanMatcherOptions::_internal_set_angular_search_window(double value) {
  
  angular_search_window_ = value;
}
inline void RealTimeCorrelativeScanMatcherOptions::set_angular_search_window(double value) {
  _internal_set_angular_search_window(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.angular_search_window)
}

// double translation_delta_cost_weight = 3;
inline void RealTimeCorrelativeScanMatcherOptions::clear_translation_delta_cost_weight() {
  translation_delta_cost_weight_ = 0;
}
inline double RealTimeCorrelativeScanMatcherOptions::_internal_translation_delta_cost_weight() const {
  return translation_delta_cost_weight_;
}
inline double RealTimeCorrelativeScanMatcherOptions::translation_delta_cost_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.translation_delta_cost_weight)
  return _internal_translation_delta_cost_weight();
}
inline void RealTimeCorrelativeScanMatcherOptions::_internal_set_translation_delta_cost_weight(double value) {
  
  translation_delta_cost_weight_ = value;
}
inline void RealTimeCorrelativeScanMatcherOptions::set_translation_delta_cost_weight(double value) {
  _internal_set_translation_delta_cost_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.translation_delta_cost_weight)
}

// double rotation_delta_cost_weight = 4;
inline void RealTimeCorrelativeScanMatcherOptions::clear_rotation_delta_cost_weight() {
  rotation_delta_cost_weight_ = 0;
}
inline double RealTimeCorrelativeScanMatcherOptions::_internal_rotation_delta_cost_weight() const {
  return rotation_delta_cost_weight_;
}
inline double RealTimeCorrelativeScanMatcherOptions::rotation_delta_cost_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.rotation_delta_cost_weight)
  return _internal_rotation_delta_cost_weight();
}
inline void RealTimeCorrelativeScanMatcherOptions::_internal_set_rotation_delta_cost_weight(double value) {
  
  rotation_delta_cost_weight_ = value;
}
inline void RealTimeCorrelativeScanMatcherOptions::set_rotation_delta_cost_weight(double value) {
  _internal_set_rotation_delta_cost_weight(value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions.rotation_delta_cost_weight)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fmapping_2fproto_2fscan_5fmatching_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto
