// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/framework/formats/rect.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2frect_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2frect_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2fframework_2fformats_2frect_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2fframework_2fformats_2frect_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2fframework_2fformats_2frect_2eproto;
namespace mediapipe {
class NormalizedRect;
struct NormalizedRectDefaultTypeInternal;
extern NormalizedRectDefaultTypeInternal _NormalizedRect_default_instance_;
class Rect;
struct RectDefaultTypeInternal;
extern RectDefaultTypeInternal _Rect_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::NormalizedRect* Arena::CreateMaybeMessage<::mediapipe::NormalizedRect>(Arena*);
template<> ::mediapipe::Rect* Arena::CreateMaybeMessage<::mediapipe::Rect>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class Rect PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.Rect) */ {
 public:
  inline Rect() : Rect(nullptr) {}
  ~Rect() override;
  explicit constexpr Rect(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Rect(const Rect& from);
  Rect(Rect&& from) noexcept
    : Rect() {
    *this = ::std::move(from);
  }

  inline Rect& operator=(const Rect& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rect& operator=(Rect&& from) noexcept {
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
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Rect& default_instance() {
    return *internal_default_instance();
  }
  static inline const Rect* internal_default_instance() {
    return reinterpret_cast<const Rect*>(
               &_Rect_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Rect& a, Rect& b) {
    a.Swap(&b);
  }
  inline void Swap(Rect* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Rect* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rect* New() const final {
    return CreateMaybeMessage<Rect>(nullptr);
  }

  Rect* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rect>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rect& from);
  void MergeFrom(const Rect& from);
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
  void InternalSwap(Rect* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.Rect";
  }
  protected:
  explicit Rect(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXCenterFieldNumber = 1,
    kYCenterFieldNumber = 2,
    kHeightFieldNumber = 3,
    kWidthFieldNumber = 4,
    kRectIdFieldNumber = 6,
    kRotationFieldNumber = 5,
  };
  // required int32 x_center = 1;
  bool has_x_center() const;
  private:
  bool _internal_has_x_center() const;
  public:
  void clear_x_center();
  ::PROTOBUF_NAMESPACE_ID::int32 x_center() const;
  void set_x_center(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x_center() const;
  void _internal_set_x_center(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 y_center = 2;
  bool has_y_center() const;
  private:
  bool _internal_has_y_center() const;
  public:
  void clear_y_center();
  ::PROTOBUF_NAMESPACE_ID::int32 y_center() const;
  void set_y_center(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y_center() const;
  void _internal_set_y_center(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 height = 3;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  ::PROTOBUF_NAMESPACE_ID::int32 height() const;
  void set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_height() const;
  void _internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 width = 4;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  ::PROTOBUF_NAMESPACE_ID::int32 width() const;
  void set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_width() const;
  void _internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional int64 rect_id = 6;
  bool has_rect_id() const;
  private:
  bool _internal_has_rect_id() const;
  public:
  void clear_rect_id();
  ::PROTOBUF_NAMESPACE_ID::int64 rect_id() const;
  void set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_rect_id() const;
  void _internal_set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // optional float rotation = 5 [default = 0];
  bool has_rotation() const;
  private:
  bool _internal_has_rotation() const;
  public:
  void clear_rotation();
  float rotation() const;
  void set_rotation(float value);
  private:
  float _internal_rotation() const;
  void _internal_set_rotation(float value);
  public:

  // @@protoc_insertion_point(class_scope:mediapipe.Rect)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 x_center_;
  ::PROTOBUF_NAMESPACE_ID::int32 y_center_;
  ::PROTOBUF_NAMESPACE_ID::int32 height_;
  ::PROTOBUF_NAMESPACE_ID::int32 width_;
  ::PROTOBUF_NAMESPACE_ID::int64 rect_id_;
  float rotation_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2frect_2eproto;
};
// -------------------------------------------------------------------

class NormalizedRect PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.NormalizedRect) */ {
 public:
  inline NormalizedRect() : NormalizedRect(nullptr) {}
  ~NormalizedRect() override;
  explicit constexpr NormalizedRect(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NormalizedRect(const NormalizedRect& from);
  NormalizedRect(NormalizedRect&& from) noexcept
    : NormalizedRect() {
    *this = ::std::move(from);
  }

  inline NormalizedRect& operator=(const NormalizedRect& from) {
    CopyFrom(from);
    return *this;
  }
  inline NormalizedRect& operator=(NormalizedRect&& from) noexcept {
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
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NormalizedRect& default_instance() {
    return *internal_default_instance();
  }
  static inline const NormalizedRect* internal_default_instance() {
    return reinterpret_cast<const NormalizedRect*>(
               &_NormalizedRect_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NormalizedRect& a, NormalizedRect& b) {
    a.Swap(&b);
  }
  inline void Swap(NormalizedRect* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NormalizedRect* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NormalizedRect* New() const final {
    return CreateMaybeMessage<NormalizedRect>(nullptr);
  }

  NormalizedRect* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NormalizedRect>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NormalizedRect& from);
  void MergeFrom(const NormalizedRect& from);
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
  void InternalSwap(NormalizedRect* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.NormalizedRect";
  }
  protected:
  explicit NormalizedRect(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXCenterFieldNumber = 1,
    kYCenterFieldNumber = 2,
    kHeightFieldNumber = 3,
    kWidthFieldNumber = 4,
    kRectIdFieldNumber = 6,
    kRotationFieldNumber = 5,
  };
  // required float x_center = 1;
  bool has_x_center() const;
  private:
  bool _internal_has_x_center() const;
  public:
  void clear_x_center();
  float x_center() const;
  void set_x_center(float value);
  private:
  float _internal_x_center() const;
  void _internal_set_x_center(float value);
  public:

  // required float y_center = 2;
  bool has_y_center() const;
  private:
  bool _internal_has_y_center() const;
  public:
  void clear_y_center();
  float y_center() const;
  void set_y_center(float value);
  private:
  float _internal_y_center() const;
  void _internal_set_y_center(float value);
  public:

  // required float height = 3;
  bool has_height() const;
  private:
  bool _internal_has_height() const;
  public:
  void clear_height();
  float height() const;
  void set_height(float value);
  private:
  float _internal_height() const;
  void _internal_set_height(float value);
  public:

  // required float width = 4;
  bool has_width() const;
  private:
  bool _internal_has_width() const;
  public:
  void clear_width();
  float width() const;
  void set_width(float value);
  private:
  float _internal_width() const;
  void _internal_set_width(float value);
  public:

  // optional int64 rect_id = 6;
  bool has_rect_id() const;
  private:
  bool _internal_has_rect_id() const;
  public:
  void clear_rect_id();
  ::PROTOBUF_NAMESPACE_ID::int64 rect_id() const;
  void set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_rect_id() const;
  void _internal_set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // optional float rotation = 5 [default = 0];
  bool has_rotation() const;
  private:
  bool _internal_has_rotation() const;
  public:
  void clear_rotation();
  float rotation() const;
  void set_rotation(float value);
  private:
  float _internal_rotation() const;
  void _internal_set_rotation(float value);
  public:

  // @@protoc_insertion_point(class_scope:mediapipe.NormalizedRect)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float x_center_;
  float y_center_;
  float height_;
  float width_;
  ::PROTOBUF_NAMESPACE_ID::int64 rect_id_;
  float rotation_;
  friend struct ::TableStruct_mediapipe_2fframework_2fformats_2frect_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Rect

// required int32 x_center = 1;
inline bool Rect::_internal_has_x_center() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Rect::has_x_center() const {
  return _internal_has_x_center();
}
inline void Rect::clear_x_center() {
  x_center_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::_internal_x_center() const {
  return x_center_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::x_center() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.x_center)
  return _internal_x_center();
}
inline void Rect::_internal_set_x_center(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  x_center_ = value;
}
inline void Rect::set_x_center(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x_center(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.x_center)
}

// required int32 y_center = 2;
inline bool Rect::_internal_has_y_center() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Rect::has_y_center() const {
  return _internal_has_y_center();
}
inline void Rect::clear_y_center() {
  y_center_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::_internal_y_center() const {
  return y_center_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::y_center() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.y_center)
  return _internal_y_center();
}
inline void Rect::_internal_set_y_center(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  y_center_ = value;
}
inline void Rect::set_y_center(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y_center(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.y_center)
}

// required int32 height = 3;
inline bool Rect::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Rect::has_height() const {
  return _internal_has_height();
}
inline void Rect::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::_internal_height() const {
  return height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::height() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.height)
  return _internal_height();
}
inline void Rect::_internal_set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  height_ = value;
}
inline void Rect::set_height(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.height)
}

// required int32 width = 4;
inline bool Rect::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Rect::has_width() const {
  return _internal_has_width();
}
inline void Rect::clear_width() {
  width_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::_internal_width() const {
  return width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Rect::width() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.width)
  return _internal_width();
}
inline void Rect::_internal_set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  width_ = value;
}
inline void Rect::set_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.width)
}

// optional float rotation = 5 [default = 0];
inline bool Rect::_internal_has_rotation() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Rect::has_rotation() const {
  return _internal_has_rotation();
}
inline void Rect::clear_rotation() {
  rotation_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float Rect::_internal_rotation() const {
  return rotation_;
}
inline float Rect::rotation() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.rotation)
  return _internal_rotation();
}
inline void Rect::_internal_set_rotation(float value) {
  _has_bits_[0] |= 0x00000020u;
  rotation_ = value;
}
inline void Rect::set_rotation(float value) {
  _internal_set_rotation(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.rotation)
}

// optional int64 rect_id = 6;
inline bool Rect::_internal_has_rect_id() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Rect::has_rect_id() const {
  return _internal_has_rect_id();
}
inline void Rect::clear_rect_id() {
  rect_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Rect::_internal_rect_id() const {
  return rect_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Rect::rect_id() const {
  // @@protoc_insertion_point(field_get:mediapipe.Rect.rect_id)
  return _internal_rect_id();
}
inline void Rect::_internal_set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000010u;
  rect_id_ = value;
}
inline void Rect::set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_rect_id(value);
  // @@protoc_insertion_point(field_set:mediapipe.Rect.rect_id)
}

// -------------------------------------------------------------------

// NormalizedRect

// required float x_center = 1;
inline bool NormalizedRect::_internal_has_x_center() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NormalizedRect::has_x_center() const {
  return _internal_has_x_center();
}
inline void NormalizedRect::clear_x_center() {
  x_center_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float NormalizedRect::_internal_x_center() const {
  return x_center_;
}
inline float NormalizedRect::x_center() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.x_center)
  return _internal_x_center();
}
inline void NormalizedRect::_internal_set_x_center(float value) {
  _has_bits_[0] |= 0x00000001u;
  x_center_ = value;
}
inline void NormalizedRect::set_x_center(float value) {
  _internal_set_x_center(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.x_center)
}

// required float y_center = 2;
inline bool NormalizedRect::_internal_has_y_center() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool NormalizedRect::has_y_center() const {
  return _internal_has_y_center();
}
inline void NormalizedRect::clear_y_center() {
  y_center_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float NormalizedRect::_internal_y_center() const {
  return y_center_;
}
inline float NormalizedRect::y_center() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.y_center)
  return _internal_y_center();
}
inline void NormalizedRect::_internal_set_y_center(float value) {
  _has_bits_[0] |= 0x00000002u;
  y_center_ = value;
}
inline void NormalizedRect::set_y_center(float value) {
  _internal_set_y_center(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.y_center)
}

// required float height = 3;
inline bool NormalizedRect::_internal_has_height() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool NormalizedRect::has_height() const {
  return _internal_has_height();
}
inline void NormalizedRect::clear_height() {
  height_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float NormalizedRect::_internal_height() const {
  return height_;
}
inline float NormalizedRect::height() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.height)
  return _internal_height();
}
inline void NormalizedRect::_internal_set_height(float value) {
  _has_bits_[0] |= 0x00000004u;
  height_ = value;
}
inline void NormalizedRect::set_height(float value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.height)
}

// required float width = 4;
inline bool NormalizedRect::_internal_has_width() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool NormalizedRect::has_width() const {
  return _internal_has_width();
}
inline void NormalizedRect::clear_width() {
  width_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float NormalizedRect::_internal_width() const {
  return width_;
}
inline float NormalizedRect::width() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.width)
  return _internal_width();
}
inline void NormalizedRect::_internal_set_width(float value) {
  _has_bits_[0] |= 0x00000008u;
  width_ = value;
}
inline void NormalizedRect::set_width(float value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.width)
}

// optional float rotation = 5 [default = 0];
inline bool NormalizedRect::_internal_has_rotation() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool NormalizedRect::has_rotation() const {
  return _internal_has_rotation();
}
inline void NormalizedRect::clear_rotation() {
  rotation_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline float NormalizedRect::_internal_rotation() const {
  return rotation_;
}
inline float NormalizedRect::rotation() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.rotation)
  return _internal_rotation();
}
inline void NormalizedRect::_internal_set_rotation(float value) {
  _has_bits_[0] |= 0x00000020u;
  rotation_ = value;
}
inline void NormalizedRect::set_rotation(float value) {
  _internal_set_rotation(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.rotation)
}

// optional int64 rect_id = 6;
inline bool NormalizedRect::_internal_has_rect_id() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool NormalizedRect::has_rect_id() const {
  return _internal_has_rect_id();
}
inline void NormalizedRect::clear_rect_id() {
  rect_id_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 NormalizedRect::_internal_rect_id() const {
  return rect_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 NormalizedRect::rect_id() const {
  // @@protoc_insertion_point(field_get:mediapipe.NormalizedRect.rect_id)
  return _internal_rect_id();
}
inline void NormalizedRect::_internal_set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000010u;
  rect_id_ = value;
}
inline void NormalizedRect::set_rect_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_rect_id(value);
  // @@protoc_insertion_point(field_set:mediapipe.NormalizedRect.rect_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2fframework_2fformats_2frect_2eproto
