// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattleResult.proto

#ifndef PROTOBUF_BattleResult_2eproto__INCLUDED
#define PROTOBUF_BattleResult_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BattleResult_2eproto();
void protobuf_AssignDesc_BattleResult_2eproto();
void protobuf_ShutdownFile_BattleResult_2eproto();

class BattleResultRequest;
class BattleResultResponse;
class UpdateUserInfo;

enum BattleResultRequest_GameStatus {
  BattleResultRequest_GameStatus_OVER = 1
};
bool BattleResultRequest_GameStatus_IsValid(int value);
const BattleResultRequest_GameStatus BattleResultRequest_GameStatus_GameStatus_MIN = BattleResultRequest_GameStatus_OVER;
const BattleResultRequest_GameStatus BattleResultRequest_GameStatus_GameStatus_MAX = BattleResultRequest_GameStatus_OVER;
const int BattleResultRequest_GameStatus_GameStatus_ARRAYSIZE = BattleResultRequest_GameStatus_GameStatus_MAX + 1;

enum BattleResultResponse_PlayerMatchResult {
  BattleResultResponse_PlayerMatchResult_WIN = 1,
  BattleResultResponse_PlayerMatchResult_LOST = 2,
  BattleResultResponse_PlayerMatchResult_DRAW = 3
};
bool BattleResultResponse_PlayerMatchResult_IsValid(int value);
const BattleResultResponse_PlayerMatchResult BattleResultResponse_PlayerMatchResult_PlayerMatchResult_MIN = BattleResultResponse_PlayerMatchResult_WIN;
const BattleResultResponse_PlayerMatchResult BattleResultResponse_PlayerMatchResult_PlayerMatchResult_MAX = BattleResultResponse_PlayerMatchResult_DRAW;
const int BattleResultResponse_PlayerMatchResult_PlayerMatchResult_ARRAYSIZE = BattleResultResponse_PlayerMatchResult_PlayerMatchResult_MAX + 1;

// ===================================================================

class BattleResultRequest : public ::google::protobuf::MessageLite {
 public:
  BattleResultRequest();
  virtual ~BattleResultRequest();

  BattleResultRequest(const BattleResultRequest& from);

  inline BattleResultRequest& operator=(const BattleResultRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattleResultRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattleResultRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattleResultRequest* other);

  // implements Message ----------------------------------------------

  BattleResultRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattleResultRequest& from);
  void MergeFrom(const BattleResultRequest& from);
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

  typedef BattleResultRequest_GameStatus GameStatus;
  static const GameStatus OVER = BattleResultRequest_GameStatus_OVER;
  static inline bool GameStatus_IsValid(int value) {
    return BattleResultRequest_GameStatus_IsValid(value);
  }
  static const GameStatus GameStatus_MIN =
    BattleResultRequest_GameStatus_GameStatus_MIN;
  static const GameStatus GameStatus_MAX =
    BattleResultRequest_GameStatus_GameStatus_MAX;
  static const int GameStatus_ARRAYSIZE =
    BattleResultRequest_GameStatus_GameStatus_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required string did = 1;
  inline bool has_did() const;
  inline void clear_did();
  static const int kDidFieldNumber = 1;
  inline const ::std::string& did() const;
  inline void set_did(const ::std::string& value);
  inline void set_did(const char* value);
  inline void set_did(const char* value, size_t size);
  inline ::std::string* mutable_did();
  inline ::std::string* release_did();
  inline void set_allocated_did(::std::string* did);

  // required .message.BattleResultRequest.GameStatus status = 2;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::message::BattleResultRequest_GameStatus status() const;
  inline void set_status(::message::BattleResultRequest_GameStatus value);

  // @@protoc_insertion_point(class_scope:message.BattleResultRequest)
 private:
  inline void set_has_did();
  inline void clear_has_did();
  inline void set_has_status();
  inline void clear_has_status();

  ::std::string* did_;
  int status_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattleResult_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattleResult_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattleResult_2eproto();
  friend void protobuf_ShutdownFile_BattleResult_2eproto();

  void InitAsDefaultInstance();
  static BattleResultRequest* default_instance_;
};
// -------------------------------------------------------------------

class BattleResultResponse : public ::google::protobuf::MessageLite {
 public:
  BattleResultResponse();
  virtual ~BattleResultResponse();

  BattleResultResponse(const BattleResultResponse& from);

  inline BattleResultResponse& operator=(const BattleResultResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattleResultResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattleResultResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattleResultResponse* other);

  // implements Message ----------------------------------------------

  BattleResultResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattleResultResponse& from);
  void MergeFrom(const BattleResultResponse& from);
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

  typedef BattleResultResponse_PlayerMatchResult PlayerMatchResult;
  static const PlayerMatchResult WIN = BattleResultResponse_PlayerMatchResult_WIN;
  static const PlayerMatchResult LOST = BattleResultResponse_PlayerMatchResult_LOST;
  static const PlayerMatchResult DRAW = BattleResultResponse_PlayerMatchResult_DRAW;
  static inline bool PlayerMatchResult_IsValid(int value) {
    return BattleResultResponse_PlayerMatchResult_IsValid(value);
  }
  static const PlayerMatchResult PlayerMatchResult_MIN =
    BattleResultResponse_PlayerMatchResult_PlayerMatchResult_MIN;
  static const PlayerMatchResult PlayerMatchResult_MAX =
    BattleResultResponse_PlayerMatchResult_PlayerMatchResult_MAX;
  static const int PlayerMatchResult_ARRAYSIZE =
    BattleResultResponse_PlayerMatchResult_PlayerMatchResult_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .message.BattleResultResponse.PlayerMatchResult result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::message::BattleResultResponse_PlayerMatchResult result() const;
  inline void set_result(::message::BattleResultResponse_PlayerMatchResult value);

  // optional .message.UpdateUserInfo selfInfo = 2;
  inline bool has_selfinfo() const;
  inline void clear_selfinfo();
  static const int kSelfInfoFieldNumber = 2;
  inline const ::message::UpdateUserInfo& selfinfo() const;
  inline ::message::UpdateUserInfo* mutable_selfinfo();
  inline ::message::UpdateUserInfo* release_selfinfo();
  inline void set_allocated_selfinfo(::message::UpdateUserInfo* selfinfo);

  // optional .message.UpdateUserInfo tageterInfo = 3;
  inline bool has_tageterinfo() const;
  inline void clear_tageterinfo();
  static const int kTageterInfoFieldNumber = 3;
  inline const ::message::UpdateUserInfo& tageterinfo() const;
  inline ::message::UpdateUserInfo* mutable_tageterinfo();
  inline ::message::UpdateUserInfo* release_tageterinfo();
  inline void set_allocated_tageterinfo(::message::UpdateUserInfo* tageterinfo);

  // @@protoc_insertion_point(class_scope:message.BattleResultResponse)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_selfinfo();
  inline void clear_has_selfinfo();
  inline void set_has_tageterinfo();
  inline void clear_has_tageterinfo();

  ::message::UpdateUserInfo* selfinfo_;
  ::message::UpdateUserInfo* tageterinfo_;
  int result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattleResult_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattleResult_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattleResult_2eproto();
  friend void protobuf_ShutdownFile_BattleResult_2eproto();

  void InitAsDefaultInstance();
  static BattleResultResponse* default_instance_;
};
// -------------------------------------------------------------------

class UpdateUserInfo : public ::google::protobuf::MessageLite {
 public:
  UpdateUserInfo();
  virtual ~UpdateUserInfo();

  UpdateUserInfo(const UpdateUserInfo& from);

  inline UpdateUserInfo& operator=(const UpdateUserInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const UpdateUserInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const UpdateUserInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(UpdateUserInfo* other);

  // implements Message ----------------------------------------------

  UpdateUserInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const UpdateUserInfo& from);
  void MergeFrom(const UpdateUserInfo& from);
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

  // accessors -------------------------------------------------------

  // optional uint32 level = 1;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 1;
  inline ::google::protobuf::uint32 level() const;
  inline void set_level(::google::protobuf::uint32 value);

  // optional uint32 experience = 2;
  inline bool has_experience() const;
  inline void clear_experience();
  static const int kExperienceFieldNumber = 2;
  inline ::google::protobuf::uint32 experience() const;
  inline void set_experience(::google::protobuf::uint32 value);

  // optional uint32 winCount = 3 [default = 1];
  inline bool has_wincount() const;
  inline void clear_wincount();
  static const int kWinCountFieldNumber = 3;
  inline ::google::protobuf::uint32 wincount() const;
  inline void set_wincount(::google::protobuf::uint32 value);

  // optional float winRate = 4 [default = 1];
  inline bool has_winrate() const;
  inline void clear_winrate();
  static const int kWinRateFieldNumber = 4;
  inline float winrate() const;
  inline void set_winrate(float value);

  // optional uint32 successionWinCount = 5;
  inline bool has_successionwincount() const;
  inline void clear_successionwincount();
  static const int kSuccessionWinCountFieldNumber = 5;
  inline ::google::protobuf::uint32 successionwincount() const;
  inline void set_successionwincount(::google::protobuf::uint32 value);

  // optional int32 incomGolds = 6;
  inline bool has_incomgolds() const;
  inline void clear_incomgolds();
  static const int kIncomGoldsFieldNumber = 6;
  inline ::google::protobuf::int32 incomgolds() const;
  inline void set_incomgolds(::google::protobuf::int32 value);

  // optional int32 bureauExperience = 7;
  inline bool has_bureauexperience() const;
  inline void clear_bureauexperience();
  static const int kBureauExperienceFieldNumber = 7;
  inline ::google::protobuf::int32 bureauexperience() const;
  inline void set_bureauexperience(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:message.UpdateUserInfo)
 private:
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_experience();
  inline void clear_has_experience();
  inline void set_has_wincount();
  inline void clear_has_wincount();
  inline void set_has_winrate();
  inline void clear_has_winrate();
  inline void set_has_successionwincount();
  inline void clear_has_successionwincount();
  inline void set_has_incomgolds();
  inline void clear_has_incomgolds();
  inline void set_has_bureauexperience();
  inline void clear_has_bureauexperience();

  ::google::protobuf::uint32 level_;
  ::google::protobuf::uint32 experience_;
  ::google::protobuf::uint32 wincount_;
  float winrate_;
  ::google::protobuf::uint32 successionwincount_;
  ::google::protobuf::int32 incomgolds_;
  ::google::protobuf::int32 bureauexperience_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattleResult_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattleResult_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattleResult_2eproto();
  friend void protobuf_ShutdownFile_BattleResult_2eproto();

  void InitAsDefaultInstance();
  static UpdateUserInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// BattleResultRequest

// required string did = 1;
inline bool BattleResultRequest::has_did() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattleResultRequest::set_has_did() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattleResultRequest::clear_has_did() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattleResultRequest::clear_did() {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    did_->clear();
  }
  clear_has_did();
}
inline const ::std::string& BattleResultRequest::did() const {
  return *did_;
}
inline void BattleResultRequest::set_did(const ::std::string& value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void BattleResultRequest::set_did(const char* value) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(value);
}
inline void BattleResultRequest::set_did(const char* value, size_t size) {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  did_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BattleResultRequest::mutable_did() {
  set_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    did_ = new ::std::string;
  }
  return did_;
}
inline ::std::string* BattleResultRequest::release_did() {
  clear_has_did();
  if (did_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = did_;
    did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void BattleResultRequest::set_allocated_did(::std::string* did) {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    delete did_;
  }
  if (did) {
    set_has_did();
    did_ = did;
  } else {
    clear_has_did();
    did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required .message.BattleResultRequest.GameStatus status = 2;
inline bool BattleResultRequest::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BattleResultRequest::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BattleResultRequest::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BattleResultRequest::clear_status() {
  status_ = 1;
  clear_has_status();
}
inline ::message::BattleResultRequest_GameStatus BattleResultRequest::status() const {
  return static_cast< ::message::BattleResultRequest_GameStatus >(status_);
}
inline void BattleResultRequest::set_status(::message::BattleResultRequest_GameStatus value) {
  assert(::message::BattleResultRequest_GameStatus_IsValid(value));
  set_has_status();
  status_ = value;
}

// -------------------------------------------------------------------

// BattleResultResponse

// required .message.BattleResultResponse.PlayerMatchResult result = 1;
inline bool BattleResultResponse::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattleResultResponse::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattleResultResponse::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattleResultResponse::clear_result() {
  result_ = 1;
  clear_has_result();
}
inline ::message::BattleResultResponse_PlayerMatchResult BattleResultResponse::result() const {
  return static_cast< ::message::BattleResultResponse_PlayerMatchResult >(result_);
}
inline void BattleResultResponse::set_result(::message::BattleResultResponse_PlayerMatchResult value) {
  assert(::message::BattleResultResponse_PlayerMatchResult_IsValid(value));
  set_has_result();
  result_ = value;
}

// optional .message.UpdateUserInfo selfInfo = 2;
inline bool BattleResultResponse::has_selfinfo() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BattleResultResponse::set_has_selfinfo() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BattleResultResponse::clear_has_selfinfo() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BattleResultResponse::clear_selfinfo() {
  if (selfinfo_ != NULL) selfinfo_->::message::UpdateUserInfo::Clear();
  clear_has_selfinfo();
}
inline const ::message::UpdateUserInfo& BattleResultResponse::selfinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return selfinfo_ != NULL ? *selfinfo_ : *default_instance().selfinfo_;
#else
  return selfinfo_ != NULL ? *selfinfo_ : *default_instance_->selfinfo_;
#endif
}
inline ::message::UpdateUserInfo* BattleResultResponse::mutable_selfinfo() {
  set_has_selfinfo();
  if (selfinfo_ == NULL) selfinfo_ = new ::message::UpdateUserInfo;
  return selfinfo_;
}
inline ::message::UpdateUserInfo* BattleResultResponse::release_selfinfo() {
  clear_has_selfinfo();
  ::message::UpdateUserInfo* temp = selfinfo_;
  selfinfo_ = NULL;
  return temp;
}
inline void BattleResultResponse::set_allocated_selfinfo(::message::UpdateUserInfo* selfinfo) {
  delete selfinfo_;
  selfinfo_ = selfinfo;
  if (selfinfo) {
    set_has_selfinfo();
  } else {
    clear_has_selfinfo();
  }
}

// optional .message.UpdateUserInfo tageterInfo = 3;
inline bool BattleResultResponse::has_tageterinfo() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BattleResultResponse::set_has_tageterinfo() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BattleResultResponse::clear_has_tageterinfo() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BattleResultResponse::clear_tageterinfo() {
  if (tageterinfo_ != NULL) tageterinfo_->::message::UpdateUserInfo::Clear();
  clear_has_tageterinfo();
}
inline const ::message::UpdateUserInfo& BattleResultResponse::tageterinfo() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return tageterinfo_ != NULL ? *tageterinfo_ : *default_instance().tageterinfo_;
#else
  return tageterinfo_ != NULL ? *tageterinfo_ : *default_instance_->tageterinfo_;
#endif
}
inline ::message::UpdateUserInfo* BattleResultResponse::mutable_tageterinfo() {
  set_has_tageterinfo();
  if (tageterinfo_ == NULL) tageterinfo_ = new ::message::UpdateUserInfo;
  return tageterinfo_;
}
inline ::message::UpdateUserInfo* BattleResultResponse::release_tageterinfo() {
  clear_has_tageterinfo();
  ::message::UpdateUserInfo* temp = tageterinfo_;
  tageterinfo_ = NULL;
  return temp;
}
inline void BattleResultResponse::set_allocated_tageterinfo(::message::UpdateUserInfo* tageterinfo) {
  delete tageterinfo_;
  tageterinfo_ = tageterinfo;
  if (tageterinfo) {
    set_has_tageterinfo();
  } else {
    clear_has_tageterinfo();
  }
}

// -------------------------------------------------------------------

// UpdateUserInfo

// optional uint32 level = 1;
inline bool UpdateUserInfo::has_level() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UpdateUserInfo::set_has_level() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UpdateUserInfo::clear_has_level() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UpdateUserInfo::clear_level() {
  level_ = 0u;
  clear_has_level();
}
inline ::google::protobuf::uint32 UpdateUserInfo::level() const {
  return level_;
}
inline void UpdateUserInfo::set_level(::google::protobuf::uint32 value) {
  set_has_level();
  level_ = value;
}

// optional uint32 experience = 2;
inline bool UpdateUserInfo::has_experience() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UpdateUserInfo::set_has_experience() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UpdateUserInfo::clear_has_experience() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UpdateUserInfo::clear_experience() {
  experience_ = 0u;
  clear_has_experience();
}
inline ::google::protobuf::uint32 UpdateUserInfo::experience() const {
  return experience_;
}
inline void UpdateUserInfo::set_experience(::google::protobuf::uint32 value) {
  set_has_experience();
  experience_ = value;
}

// optional uint32 winCount = 3 [default = 1];
inline bool UpdateUserInfo::has_wincount() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UpdateUserInfo::set_has_wincount() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UpdateUserInfo::clear_has_wincount() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UpdateUserInfo::clear_wincount() {
  wincount_ = 1u;
  clear_has_wincount();
}
inline ::google::protobuf::uint32 UpdateUserInfo::wincount() const {
  return wincount_;
}
inline void UpdateUserInfo::set_wincount(::google::protobuf::uint32 value) {
  set_has_wincount();
  wincount_ = value;
}

// optional float winRate = 4 [default = 1];
inline bool UpdateUserInfo::has_winrate() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UpdateUserInfo::set_has_winrate() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UpdateUserInfo::clear_has_winrate() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UpdateUserInfo::clear_winrate() {
  winrate_ = 1;
  clear_has_winrate();
}
inline float UpdateUserInfo::winrate() const {
  return winrate_;
}
inline void UpdateUserInfo::set_winrate(float value) {
  set_has_winrate();
  winrate_ = value;
}

// optional uint32 successionWinCount = 5;
inline bool UpdateUserInfo::has_successionwincount() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UpdateUserInfo::set_has_successionwincount() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UpdateUserInfo::clear_has_successionwincount() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UpdateUserInfo::clear_successionwincount() {
  successionwincount_ = 0u;
  clear_has_successionwincount();
}
inline ::google::protobuf::uint32 UpdateUserInfo::successionwincount() const {
  return successionwincount_;
}
inline void UpdateUserInfo::set_successionwincount(::google::protobuf::uint32 value) {
  set_has_successionwincount();
  successionwincount_ = value;
}

// optional int32 incomGolds = 6;
inline bool UpdateUserInfo::has_incomgolds() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void UpdateUserInfo::set_has_incomgolds() {
  _has_bits_[0] |= 0x00000020u;
}
inline void UpdateUserInfo::clear_has_incomgolds() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void UpdateUserInfo::clear_incomgolds() {
  incomgolds_ = 0;
  clear_has_incomgolds();
}
inline ::google::protobuf::int32 UpdateUserInfo::incomgolds() const {
  return incomgolds_;
}
inline void UpdateUserInfo::set_incomgolds(::google::protobuf::int32 value) {
  set_has_incomgolds();
  incomgolds_ = value;
}

// optional int32 bureauExperience = 7;
inline bool UpdateUserInfo::has_bureauexperience() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void UpdateUserInfo::set_has_bureauexperience() {
  _has_bits_[0] |= 0x00000040u;
}
inline void UpdateUserInfo::clear_has_bureauexperience() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void UpdateUserInfo::clear_bureauexperience() {
  bureauexperience_ = 0;
  clear_has_bureauexperience();
}
inline ::google::protobuf::int32 UpdateUserInfo::bureauexperience() const {
  return bureauexperience_;
}
inline void UpdateUserInfo::set_bureauexperience(::google::protobuf::int32 value) {
  set_has_bureauexperience();
  bureauexperience_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BattleResult_2eproto__INCLUDED