// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/sensor/proto/adaptive_voxel_filter_options.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto;
namespace cartographer {
namespace sensor {
namespace proto {
class AdaptiveVoxelFilterOptions;
class AdaptiveVoxelFilterOptionsDefaultTypeInternal;
extern AdaptiveVoxelFilterOptionsDefaultTypeInternal _AdaptiveVoxelFilterOptions_default_instance_;
}  // namespace proto
}  // namespace sensor
}  // namespace cartographer
PROTOBUF_NAMESPACE_OPEN
template<> ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions* Arena::CreateMaybeMessage<::cartographer::sensor::proto::AdaptiveVoxelFilterOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace cartographer {
namespace sensor {
namespace proto {

// ===================================================================

class AdaptiveVoxelFilterOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:cartographer.sensor.proto.AdaptiveVoxelFilterOptions) */ {
 public:
  inline AdaptiveVoxelFilterOptions() : AdaptiveVoxelFilterOptions(nullptr) {};
  virtual ~AdaptiveVoxelFilterOptions();

  AdaptiveVoxelFilterOptions(const AdaptiveVoxelFilterOptions& from);
  AdaptiveVoxelFilterOptions(AdaptiveVoxelFilterOptions&& from) noexcept
    : AdaptiveVoxelFilterOptions() {
    *this = ::std::move(from);
  }

  inline AdaptiveVoxelFilterOptions& operator=(const AdaptiveVoxelFilterOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline AdaptiveVoxelFilterOptions& operator=(AdaptiveVoxelFilterOptions&& from) noexcept {
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
  static const AdaptiveVoxelFilterOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AdaptiveVoxelFilterOptions* internal_default_instance() {
    return reinterpret_cast<const AdaptiveVoxelFilterOptions*>(
               &_AdaptiveVoxelFilterOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AdaptiveVoxelFilterOptions& a, AdaptiveVoxelFilterOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(AdaptiveVoxelFilterOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AdaptiveVoxelFilterOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AdaptiveVoxelFilterOptions* New() const final {
    return CreateMaybeMessage<AdaptiveVoxelFilterOptions>(nullptr);
  }

  AdaptiveVoxelFilterOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AdaptiveVoxelFilterOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AdaptiveVoxelFilterOptions& from);
  void MergeFrom(const AdaptiveVoxelFilterOptions& from);
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
  void InternalSwap(AdaptiveVoxelFilterOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "cartographer.sensor.proto.AdaptiveVoxelFilterOptions";
  }
  protected:
  explicit AdaptiveVoxelFilterOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto);
    return ::descriptor_table_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMaxLengthFieldNumber = 1,
    kMinNumPointsFieldNumber = 2,
    kMaxRangeFieldNumber = 3,
  };
  // float max_length = 1;
  void clear_max_length();
  float max_length() const;
  void set_max_length(float value);
  private:
  float _internal_max_length() const;
  void _internal_set_max_length(float value);
  public:

  // float min_num_points = 2;
  void clear_min_num_points();
  float min_num_points() const;
  void set_min_num_points(float value);
  private:
  float _internal_min_num_points() const;
  void _internal_set_min_num_points(float value);
  public:

  // float max_range = 3;
  void clear_max_range();
  float max_range() const;
  void set_max_range(float value);
  private:
  float _internal_max_range() const;
  void _internal_set_max_range(float value);
  public:

  // @@protoc_insertion_point(class_scope:cartographer.sensor.proto.AdaptiveVoxelFilterOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float max_length_;
  float min_num_points_;
  float max_range_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AdaptiveVoxelFilterOptions

// float max_length = 1;
inline void AdaptiveVoxelFilterOptions::clear_max_length() {
  max_length_ = 0;
}
inline float AdaptiveVoxelFilterOptions::_internal_max_length() const {
  return max_length_;
}
inline float AdaptiveVoxelFilterOptions::max_length() const {
  // @@protoc_insertion_point(field_get:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.max_length)
  return _internal_max_length();
}
inline void AdaptiveVoxelFilterOptions::_internal_set_max_length(float value) {
  
  max_length_ = value;
}
inline void AdaptiveVoxelFilterOptions::set_max_length(float value) {
  _internal_set_max_length(value);
  // @@protoc_insertion_point(field_set:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.max_length)
}

// float min_num_points = 2;
inline void AdaptiveVoxelFilterOptions::clear_min_num_points() {
  min_num_points_ = 0;
}
inline float AdaptiveVoxelFilterOptions::_internal_min_num_points() const {
  return min_num_points_;
}
inline float AdaptiveVoxelFilterOptions::min_num_points() const {
  // @@protoc_insertion_point(field_get:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.min_num_points)
  return _internal_min_num_points();
}
inline void AdaptiveVoxelFilterOptions::_internal_set_min_num_points(float value) {
  
  min_num_points_ = value;
}
inline void AdaptiveVoxelFilterOptions::set_min_num_points(float value) {
  _internal_set_min_num_points(value);
  // @@protoc_insertion_point(field_set:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.min_num_points)
}

// float max_range = 3;
inline void AdaptiveVoxelFilterOptions::clear_max_range() {
  max_range_ = 0;
}
inline float AdaptiveVoxelFilterOptions::_internal_max_range() const {
  return max_range_;
}
inline float AdaptiveVoxelFilterOptions::max_range() const {
  // @@protoc_insertion_point(field_get:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.max_range)
  return _internal_max_range();
}
inline void AdaptiveVoxelFilterOptions::_internal_set_max_range(float value) {
  
  max_range_ = value;
}
inline void AdaptiveVoxelFilterOptions::set_max_range(float value) {
  _internal_set_max_range(value);
  // @@protoc_insertion_point(field_set:cartographer.sensor.proto.AdaptiveVoxelFilterOptions.max_range)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace sensor
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto
