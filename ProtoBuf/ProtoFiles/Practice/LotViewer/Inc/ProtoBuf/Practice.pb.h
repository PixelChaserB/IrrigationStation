// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Practice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Practice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Practice_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Practice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Practice_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Practice_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_Practice_2eproto_metadata_getter(int index);
namespace Practice {
class ParkingLot;
struct ParkingLotDefaultTypeInternal;
extern ParkingLotDefaultTypeInternal _ParkingLot_default_instance_;
class ParkingSpot;
struct ParkingSpotDefaultTypeInternal;
extern ParkingSpotDefaultTypeInternal _ParkingSpot_default_instance_;
}  // namespace Practice
PROTOBUF_NAMESPACE_OPEN
template<> ::Practice::ParkingLot* Arena::CreateMaybeMessage<::Practice::ParkingLot>(Arena*);
template<> ::Practice::ParkingSpot* Arena::CreateMaybeMessage<::Practice::ParkingSpot>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Practice {

enum ParkingSpot_VehicleType : int {
  ParkingSpot_VehicleType_CAR = 0,
  ParkingSpot_VehicleType_VAN = 1,
  ParkingSpot_VehicleType_TRUCK = 2,
  ParkingSpot_VehicleType_MOTO = 3,
  ParkingSpot_VehicleType_EMPTY = 4
};
bool ParkingSpot_VehicleType_IsValid(int value);
constexpr ParkingSpot_VehicleType ParkingSpot_VehicleType_VehicleType_MIN = ParkingSpot_VehicleType_CAR;
constexpr ParkingSpot_VehicleType ParkingSpot_VehicleType_VehicleType_MAX = ParkingSpot_VehicleType_EMPTY;
constexpr int ParkingSpot_VehicleType_VehicleType_ARRAYSIZE = ParkingSpot_VehicleType_VehicleType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ParkingSpot_VehicleType_descriptor();
template<typename T>
inline const std::string& ParkingSpot_VehicleType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ParkingSpot_VehicleType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ParkingSpot_VehicleType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ParkingSpot_VehicleType_descriptor(), enum_t_value);
}
inline bool ParkingSpot_VehicleType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ParkingSpot_VehicleType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ParkingSpot_VehicleType>(
    ParkingSpot_VehicleType_descriptor(), name, value);
}
// ===================================================================

class ParkingSpot PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Practice.ParkingSpot) */ {
 public:
  inline ParkingSpot() : ParkingSpot(nullptr) {}
  virtual ~ParkingSpot();
  explicit constexpr ParkingSpot(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ParkingSpot(const ParkingSpot& from);
  ParkingSpot(ParkingSpot&& from) noexcept
    : ParkingSpot() {
    *this = ::std::move(from);
  }

  inline ParkingSpot& operator=(const ParkingSpot& from) {
    CopyFrom(from);
    return *this;
  }
  inline ParkingSpot& operator=(ParkingSpot&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const ParkingSpot& default_instance() {
    return *internal_default_instance();
  }
  static inline const ParkingSpot* internal_default_instance() {
    return reinterpret_cast<const ParkingSpot*>(
               &_ParkingSpot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ParkingSpot& a, ParkingSpot& b) {
    a.Swap(&b);
  }
  inline void Swap(ParkingSpot* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ParkingSpot* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ParkingSpot* New() const final {
    return CreateMaybeMessage<ParkingSpot>(nullptr);
  }

  ParkingSpot* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ParkingSpot>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ParkingSpot& from);
  void MergeFrom(const ParkingSpot& from);
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
  void InternalSwap(ParkingSpot* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Practice.ParkingSpot";
  }
  protected:
  explicit ParkingSpot(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_Practice_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  typedef ParkingSpot_VehicleType VehicleType;
  static constexpr VehicleType CAR =
    ParkingSpot_VehicleType_CAR;
  static constexpr VehicleType VAN =
    ParkingSpot_VehicleType_VAN;
  static constexpr VehicleType TRUCK =
    ParkingSpot_VehicleType_TRUCK;
  static constexpr VehicleType MOTO =
    ParkingSpot_VehicleType_MOTO;
  static constexpr VehicleType EMPTY =
    ParkingSpot_VehicleType_EMPTY;
  static inline bool VehicleType_IsValid(int value) {
    return ParkingSpot_VehicleType_IsValid(value);
  }
  static constexpr VehicleType VehicleType_MIN =
    ParkingSpot_VehicleType_VehicleType_MIN;
  static constexpr VehicleType VehicleType_MAX =
    ParkingSpot_VehicleType_VehicleType_MAX;
  static constexpr int VehicleType_ARRAYSIZE =
    ParkingSpot_VehicleType_VehicleType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  VehicleType_descriptor() {
    return ParkingSpot_VehicleType_descriptor();
  }
  template<typename T>
  static inline const std::string& VehicleType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, VehicleType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function VehicleType_Name.");
    return ParkingSpot_VehicleType_Name(enum_t_value);
  }
  static inline bool VehicleType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      VehicleType* value) {
    return ParkingSpot_VehicleType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSpotNumFieldNumber = 1,
  };
  // required int32 SpotNum = 1;
  bool has_spotnum() const;
  private:
  bool _internal_has_spotnum() const;
  public:
  void clear_spotnum();
  ::PROTOBUF_NAMESPACE_ID::int32 spotnum() const;
  void set_spotnum(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_spotnum() const;
  void _internal_set_spotnum(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:Practice.ParkingSpot)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 spotnum_;
  friend struct ::TableStruct_Practice_2eproto;
};
// -------------------------------------------------------------------

class ParkingLot PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Practice.ParkingLot) */ {
 public:
  inline ParkingLot() : ParkingLot(nullptr) {}
  virtual ~ParkingLot();
  explicit constexpr ParkingLot(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ParkingLot(const ParkingLot& from);
  ParkingLot(ParkingLot&& from) noexcept
    : ParkingLot() {
    *this = ::std::move(from);
  }

  inline ParkingLot& operator=(const ParkingLot& from) {
    CopyFrom(from);
    return *this;
  }
  inline ParkingLot& operator=(ParkingLot&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const ParkingLot& default_instance() {
    return *internal_default_instance();
  }
  static inline const ParkingLot* internal_default_instance() {
    return reinterpret_cast<const ParkingLot*>(
               &_ParkingLot_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ParkingLot& a, ParkingLot& b) {
    a.Swap(&b);
  }
  inline void Swap(ParkingLot* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ParkingLot* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ParkingLot* New() const final {
    return CreateMaybeMessage<ParkingLot>(nullptr);
  }

  ParkingLot* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ParkingLot>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ParkingLot& from);
  void MergeFrom(const ParkingLot& from);
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
  void InternalSwap(ParkingLot* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Practice.ParkingLot";
  }
  protected:
  explicit ParkingLot(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_Practice_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSpotsFieldNumber = 1,
  };
  // repeated .Practice.ParkingSpot spots = 1;
  int spots_size() const;
  private:
  int _internal_spots_size() const;
  public:
  void clear_spots();
  ::Practice::ParkingSpot* mutable_spots(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Practice::ParkingSpot >*
      mutable_spots();
  private:
  const ::Practice::ParkingSpot& _internal_spots(int index) const;
  ::Practice::ParkingSpot* _internal_add_spots();
  public:
  const ::Practice::ParkingSpot& spots(int index) const;
  ::Practice::ParkingSpot* add_spots();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Practice::ParkingSpot >&
      spots() const;

  // @@protoc_insertion_point(class_scope:Practice.ParkingLot)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Practice::ParkingSpot > spots_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Practice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ParkingSpot

// required int32 SpotNum = 1;
inline bool ParkingSpot::_internal_has_spotnum() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ParkingSpot::has_spotnum() const {
  return _internal_has_spotnum();
}
inline void ParkingSpot::clear_spotnum() {
  spotnum_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ParkingSpot::_internal_spotnum() const {
  return spotnum_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ParkingSpot::spotnum() const {
  // @@protoc_insertion_point(field_get:Practice.ParkingSpot.SpotNum)
  return _internal_spotnum();
}
inline void ParkingSpot::_internal_set_spotnum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  spotnum_ = value;
}
inline void ParkingSpot::set_spotnum(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_spotnum(value);
  // @@protoc_insertion_point(field_set:Practice.ParkingSpot.SpotNum)
}

// -------------------------------------------------------------------

// ParkingLot

// repeated .Practice.ParkingSpot spots = 1;
inline int ParkingLot::_internal_spots_size() const {
  return spots_.size();
}
inline int ParkingLot::spots_size() const {
  return _internal_spots_size();
}
inline void ParkingLot::clear_spots() {
  spots_.Clear();
}
inline ::Practice::ParkingSpot* ParkingLot::mutable_spots(int index) {
  // @@protoc_insertion_point(field_mutable:Practice.ParkingLot.spots)
  return spots_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Practice::ParkingSpot >*
ParkingLot::mutable_spots() {
  // @@protoc_insertion_point(field_mutable_list:Practice.ParkingLot.spots)
  return &spots_;
}
inline const ::Practice::ParkingSpot& ParkingLot::_internal_spots(int index) const {
  return spots_.Get(index);
}
inline const ::Practice::ParkingSpot& ParkingLot::spots(int index) const {
  // @@protoc_insertion_point(field_get:Practice.ParkingLot.spots)
  return _internal_spots(index);
}
inline ::Practice::ParkingSpot* ParkingLot::_internal_add_spots() {
  return spots_.Add();
}
inline ::Practice::ParkingSpot* ParkingLot::add_spots() {
  // @@protoc_insertion_point(field_add:Practice.ParkingLot.spots)
  return _internal_add_spots();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Practice::ParkingSpot >&
ParkingLot::spots() const {
  // @@protoc_insertion_point(field_list:Practice.ParkingLot.spots)
  return spots_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Practice

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Practice::ParkingSpot_VehicleType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Practice::ParkingSpot_VehicleType>() {
  return ::Practice::ParkingSpot_VehicleType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Practice_2eproto
