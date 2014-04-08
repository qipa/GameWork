// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LanBattleResult.proto

#ifndef PROTOBUF_LanBattleResult_2eproto__INCLUDED
#define PROTOBUF_LanBattleResult_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "LanUserInfo.pb.h"
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_LanBattleResult_2eproto();
void protobuf_AssignDesc_LanBattleResult_2eproto();
void protobuf_ShutdownFile_LanBattleResult_2eproto();

class LanBattleResultNotice;

enum LanBattleResultNotice_GameStatus {
  LanBattleResultNotice_GameStatus_OVER = 1
};
bool LanBattleResultNotice_GameStatus_IsValid(int value);
const LanBattleResultNotice_GameStatus LanBattleResultNotice_GameStatus_GameStatus_MIN = LanBattleResultNotice_GameStatus_OVER;
const LanBattleResultNotice_GameStatus LanBattleResultNotice_GameStatus_GameStatus_MAX = LanBattleResultNotice_GameStatus_OVER;
const int LanBattleResultNotice_GameStatus_GameStatus_ARRAYSIZE = LanBattleResultNotice_GameStatus_GameStatus_MAX + 1;

// ===================================================================

class LanBattleResultNotice : public ::google::protobuf::MessageLite {
 public:
  LanBattleResultNotice();
  virtual ~LanBattleResultNotice();

  LanBattleResultNotice(const LanBattleResultNotice& from);

  inline LanBattleResultNotice& operator=(const LanBattleResultNotice& from) {
    CopyFrom(from);
    return *this;
  }

  static const LanBattleResultNotice& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const LanBattleResultNotice* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(LanBattleResultNotice* other);

  // implements Message ----------------------------------------------

  LanBattleResultNotice* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const LanBattleResultNotice& from);
  void MergeFrom(const LanBattleResultNotice& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef LanBattleResultNotice_GameStatus GameStatus;
  static const GameStatus OVER = LanBattleResultNotice_GameStatus_OVER;
  static inline bool GameStatus_IsValid(int value) {
    return LanBattleResultNotice_GameStatus_IsValid(value);
  }
  static const GameStatus GameStatus_MIN =
    LanBattleResultNotice_GameStatus_GameStatus_MIN;
  static const GameStatus GameStatus_MAX =
    LanBattleResultNotice_GameStatus_GameStatus_MAX;
  static const int GameStatus_ARRAYSIZE =
    LanBattleResultNotice_GameStatus_GameStatus_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string uuid = 1;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUuidFieldNumber = 1;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // required .message.LanBattleResultNotice.GameStatus status = 2;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::message::LanBattleResultNotice_GameStatus status() const;
  inline void set_status(::message::LanBattleResultNotice_GameStatus value);

  // required .message.LanUserInfoData userInfo = 3;
  inline bool has_userinfo() const;
  inline void clear_userinfo();
  static const int kUserInfoFieldNumber = 3;
  inline const ::message::LanUserInfoData& userinfo() const;
  inline ::message::LanUserInfoData* mutable_userinfo();
  inline ::message::LanUserInfoData* release_userinfo();
  inline void set_allocated_userinfo(::message::LanUserInfoData* userinfo);

  // @@protoc_insertion_point(class_scope:message.LanBattleResultNotice)
 private:
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_userinfo();
  inline void clear_has_userinfo();

  ::std::string* uuid_;
  ::message::LanUserInfoData* userinfo_;
  int status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_LanBattleResult_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_LanBattleResult_2eproto();
  #endif
  friend void protobuf_AssignDesc_LanBattleResult_2eproto();
  friend void protobuf_ShutdownFile_LanBattleResult_2eproto();

  void InitAsDefaultInstance();
  static LanBattleResultNotice* default_instance_;
};
// ===================================================================


// ===================================================================

// LanBattleResultNotice

// required string uuid = 1;
inline bool LanBattleResultNotice::has_uuid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LanBattleResultNotice::set_has_uuid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LanBattleResultNotice::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LanBattleResultNotice::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& LanBattleResultNotice::uuid() const {
  return *uuid_;
}
inline void LanBattleResultNotice::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LanBattleResultNotice::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void LanBattleResultNotice::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* LanBattleResultNotice::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  return uuid_;
}
inline ::std::string* LanBattleResultNotice::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void LanBattleResultNotice::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .message.LanBattleResultNotice.GameStatus status = 2;
inline bool LanBattleResultNotice::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LanBattleResultNotice::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LanBattleResultNotice::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LanBattleResultNotice::clear_status() {
  status_ = 1;
  clear_has_status();
}
inline ::message::LanBattleResultNotice_GameStatus LanBattleResultNotice::status() const {
  return static_cast< ::message::LanBattleResultNotice_GameStatus >(status_);
}
inline void LanBattleResultNotice::set_status(::message::LanBattleResultNotice_GameStatus value) {
  assert(::message::LanBattleResultNotice_GameStatus_IsValid(value));
  set_has_status();
  status_ = value;
}

// required .message.LanUserInfoData userInfo = 3;
inline bool LanBattleResultNotice::has_userinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LanBattleResultNotice::set_has_userinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LanBattleResultNotice::clear_has_userinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LanBattleResultNotice::clear_userinfo() {
  if (userinfo_ != NULL) userinfo_->::message::LanUserInfoData::Clear();
  clear_has_userinfo();
}
inline const ::message::LanUserInfoData& LanBattleResultNotice::userinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return userinfo_ != NULL ? *userinfo_ : *default_instance().userinfo_;
#else
  return userinfo_ != NULL ? *userinfo_ : *default_instance_->userinfo_;
#endif
}
inline ::message::LanUserInfoData* LanBattleResultNotice::mutable_userinfo() {
  set_has_userinfo();
  if (userinfo_ == NULL) userinfo_ = new ::message::LanUserInfoData;
  return userinfo_;
}
inline ::message::LanUserInfoData* LanBattleResultNotice::release_userinfo() {
  clear_has_userinfo();
  ::message::LanUserInfoData* temp = userinfo_;
  userinfo_ = NULL;
  return temp;
}
inline void LanBattleResultNotice::set_allocated_userinfo(::message::LanUserInfoData* userinfo) {
  delete userinfo_;
  userinfo_ = userinfo;
  if (userinfo) {
    set_has_userinfo();
  } else {
    clear_has_userinfo();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LanBattleResult_2eproto__INCLUDED