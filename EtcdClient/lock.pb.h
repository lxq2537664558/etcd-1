// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lock.proto

#ifndef PROTOBUF_INCLUDED_lock_2eproto
#define PROTOBUF_INCLUDED_lock_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "rpc.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_lock_2eproto 

namespace protobuf_lock_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_lock_2eproto
namespace v3lockpb {
class LockRequest;
class LockRequestDefaultTypeInternal;
extern LockRequestDefaultTypeInternal _LockRequest_default_instance_;
class LockResponse;
class LockResponseDefaultTypeInternal;
extern LockResponseDefaultTypeInternal _LockResponse_default_instance_;
class UnlockRequest;
class UnlockRequestDefaultTypeInternal;
extern UnlockRequestDefaultTypeInternal _UnlockRequest_default_instance_;
class UnlockResponse;
class UnlockResponseDefaultTypeInternal;
extern UnlockResponseDefaultTypeInternal _UnlockResponse_default_instance_;
}  // namespace v3lockpb
namespace google {
namespace protobuf {
template<> ::v3lockpb::LockRequest* Arena::CreateMaybeMessage<::v3lockpb::LockRequest>(Arena*);
template<> ::v3lockpb::LockResponse* Arena::CreateMaybeMessage<::v3lockpb::LockResponse>(Arena*);
template<> ::v3lockpb::UnlockRequest* Arena::CreateMaybeMessage<::v3lockpb::UnlockRequest>(Arena*);
template<> ::v3lockpb::UnlockResponse* Arena::CreateMaybeMessage<::v3lockpb::UnlockResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace v3lockpb {

// ===================================================================

class LockRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3lockpb.LockRequest) */ {
 public:
  LockRequest();
  virtual ~LockRequest();

  LockRequest(const LockRequest& from);

  inline LockRequest& operator=(const LockRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LockRequest(LockRequest&& from) noexcept
    : LockRequest() {
    *this = ::std::move(from);
  }

  inline LockRequest& operator=(LockRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LockRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LockRequest* internal_default_instance() {
    return reinterpret_cast<const LockRequest*>(
               &_LockRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LockRequest* other);
  friend void swap(LockRequest& a, LockRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LockRequest* New() const final {
    return CreateMaybeMessage<LockRequest>(NULL);
  }

  LockRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LockRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LockRequest& from);
  void MergeFrom(const LockRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LockRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int64 lease = 2;
  void clear_lease();
  static const int kLeaseFieldNumber = 2;
  ::google::protobuf::int64 lease() const;
  void set_lease(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:v3lockpb.LockRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int64 lease_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_lock_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LockResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3lockpb.LockResponse) */ {
 public:
  LockResponse();
  virtual ~LockResponse();

  LockResponse(const LockResponse& from);

  inline LockResponse& operator=(const LockResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LockResponse(LockResponse&& from) noexcept
    : LockResponse() {
    *this = ::std::move(from);
  }

  inline LockResponse& operator=(LockResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LockResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LockResponse* internal_default_instance() {
    return reinterpret_cast<const LockResponse*>(
               &_LockResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(LockResponse* other);
  friend void swap(LockResponse& a, LockResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LockResponse* New() const final {
    return CreateMaybeMessage<LockResponse>(NULL);
  }

  LockResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LockResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LockResponse& from);
  void MergeFrom(const LockResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LockResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 2;
  void clear_key();
  static const int kKeyFieldNumber = 2;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // .etcdserverpb.ResponseHeader header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::etcdserverpb::ResponseHeader& _internal_header() const;
  public:
  const ::etcdserverpb::ResponseHeader& header() const;
  ::etcdserverpb::ResponseHeader* release_header();
  ::etcdserverpb::ResponseHeader* mutable_header();
  void set_allocated_header(::etcdserverpb::ResponseHeader* header);

  // @@protoc_insertion_point(class_scope:v3lockpb.LockResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::etcdserverpb::ResponseHeader* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_lock_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class UnlockRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3lockpb.UnlockRequest) */ {
 public:
  UnlockRequest();
  virtual ~UnlockRequest();

  UnlockRequest(const UnlockRequest& from);

  inline UnlockRequest& operator=(const UnlockRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnlockRequest(UnlockRequest&& from) noexcept
    : UnlockRequest() {
    *this = ::std::move(from);
  }

  inline UnlockRequest& operator=(UnlockRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnlockRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnlockRequest* internal_default_instance() {
    return reinterpret_cast<const UnlockRequest*>(
               &_UnlockRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(UnlockRequest* other);
  friend void swap(UnlockRequest& a, UnlockRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnlockRequest* New() const final {
    return CreateMaybeMessage<UnlockRequest>(NULL);
  }

  UnlockRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UnlockRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UnlockRequest& from);
  void MergeFrom(const UnlockRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UnlockRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes key = 1;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:v3lockpb.UnlockRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_lock_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class UnlockResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:v3lockpb.UnlockResponse) */ {
 public:
  UnlockResponse();
  virtual ~UnlockResponse();

  UnlockResponse(const UnlockResponse& from);

  inline UnlockResponse& operator=(const UnlockResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnlockResponse(UnlockResponse&& from) noexcept
    : UnlockResponse() {
    *this = ::std::move(from);
  }

  inline UnlockResponse& operator=(UnlockResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnlockResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnlockResponse* internal_default_instance() {
    return reinterpret_cast<const UnlockResponse*>(
               &_UnlockResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(UnlockResponse* other);
  friend void swap(UnlockResponse& a, UnlockResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnlockResponse* New() const final {
    return CreateMaybeMessage<UnlockResponse>(NULL);
  }

  UnlockResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UnlockResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UnlockResponse& from);
  void MergeFrom(const UnlockResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(UnlockResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .etcdserverpb.ResponseHeader header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::etcdserverpb::ResponseHeader& _internal_header() const;
  public:
  const ::etcdserverpb::ResponseHeader& header() const;
  ::etcdserverpb::ResponseHeader* release_header();
  ::etcdserverpb::ResponseHeader* mutable_header();
  void set_allocated_header(::etcdserverpb::ResponseHeader* header);

  // @@protoc_insertion_point(class_scope:v3lockpb.UnlockResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::etcdserverpb::ResponseHeader* header_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_lock_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LockRequest

// bytes name = 1;
inline void LockRequest::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LockRequest::name() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockRequest.name)
  return name_.GetNoArena();
}
inline void LockRequest::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3lockpb.LockRequest.name)
}
#if LANG_CXX11
inline void LockRequest::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.LockRequest.name)
}
#endif
inline void LockRequest::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.LockRequest.name)
}
inline void LockRequest::set_name(const void* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.LockRequest.name)
}
inline ::std::string* LockRequest::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockRequest.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LockRequest::release_name() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockRequest.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LockRequest::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockRequest.name)
}

// int64 lease = 2;
inline void LockRequest::clear_lease() {
  lease_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 LockRequest::lease() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockRequest.lease)
  return lease_;
}
inline void LockRequest::set_lease(::google::protobuf::int64 value) {
  
  lease_ = value;
  // @@protoc_insertion_point(field_set:v3lockpb.LockRequest.lease)
}

// -------------------------------------------------------------------

// LockResponse

// .etcdserverpb.ResponseHeader header = 1;
inline bool LockResponse::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::etcdserverpb::ResponseHeader& LockResponse::_internal_header() const {
  return *header_;
}
inline const ::etcdserverpb::ResponseHeader& LockResponse::header() const {
  const ::etcdserverpb::ResponseHeader* p = header_;
  // @@protoc_insertion_point(field_get:v3lockpb.LockResponse.header)
  return p != NULL ? *p : *reinterpret_cast<const ::etcdserverpb::ResponseHeader*>(
      &::etcdserverpb::_ResponseHeader_default_instance_);
}
inline ::etcdserverpb::ResponseHeader* LockResponse::release_header() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockResponse.header)
  
  ::etcdserverpb::ResponseHeader* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::etcdserverpb::ResponseHeader* LockResponse::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::etcdserverpb::ResponseHeader>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockResponse.header)
  return header_;
}
inline void LockResponse::set_allocated_header(::etcdserverpb::ResponseHeader* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockResponse.header)
}

// bytes key = 2;
inline void LockResponse::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LockResponse::key() const {
  // @@protoc_insertion_point(field_get:v3lockpb.LockResponse.key)
  return key_.GetNoArena();
}
inline void LockResponse::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3lockpb.LockResponse.key)
}
#if LANG_CXX11
inline void LockResponse::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.LockResponse.key)
}
#endif
inline void LockResponse::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.LockResponse.key)
}
inline void LockResponse::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.LockResponse.key)
}
inline ::std::string* LockResponse::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:v3lockpb.LockResponse.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LockResponse::release_key() {
  // @@protoc_insertion_point(field_release:v3lockpb.LockResponse.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LockResponse::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.LockResponse.key)
}

// -------------------------------------------------------------------

// UnlockRequest

// bytes key = 1;
inline void UnlockRequest::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UnlockRequest::key() const {
  // @@protoc_insertion_point(field_get:v3lockpb.UnlockRequest.key)
  return key_.GetNoArena();
}
inline void UnlockRequest::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:v3lockpb.UnlockRequest.key)
}
#if LANG_CXX11
inline void UnlockRequest::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:v3lockpb.UnlockRequest.key)
}
#endif
inline void UnlockRequest::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:v3lockpb.UnlockRequest.key)
}
inline void UnlockRequest::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:v3lockpb.UnlockRequest.key)
}
inline ::std::string* UnlockRequest::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:v3lockpb.UnlockRequest.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnlockRequest::release_key() {
  // @@protoc_insertion_point(field_release:v3lockpb.UnlockRequest.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnlockRequest::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.UnlockRequest.key)
}

// -------------------------------------------------------------------

// UnlockResponse

// .etcdserverpb.ResponseHeader header = 1;
inline bool UnlockResponse::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::etcdserverpb::ResponseHeader& UnlockResponse::_internal_header() const {
  return *header_;
}
inline const ::etcdserverpb::ResponseHeader& UnlockResponse::header() const {
  const ::etcdserverpb::ResponseHeader* p = header_;
  // @@protoc_insertion_point(field_get:v3lockpb.UnlockResponse.header)
  return p != NULL ? *p : *reinterpret_cast<const ::etcdserverpb::ResponseHeader*>(
      &::etcdserverpb::_ResponseHeader_default_instance_);
}
inline ::etcdserverpb::ResponseHeader* UnlockResponse::release_header() {
  // @@protoc_insertion_point(field_release:v3lockpb.UnlockResponse.header)
  
  ::etcdserverpb::ResponseHeader* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::etcdserverpb::ResponseHeader* UnlockResponse::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::etcdserverpb::ResponseHeader>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:v3lockpb.UnlockResponse.header)
  return header_;
}
inline void UnlockResponse::set_allocated_header(::etcdserverpb::ResponseHeader* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:v3lockpb.UnlockResponse.header)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v3lockpb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_lock_2eproto