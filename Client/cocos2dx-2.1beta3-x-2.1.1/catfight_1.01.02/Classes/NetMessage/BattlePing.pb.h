// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BattlePing.proto

#ifndef PROTOBUF_BattlePing_2eproto__INCLUDED
#define PROTOBUF_BattlePing_2eproto__INCLUDED

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
#include "Heartbeat.pb.h"
// @@protoc_insertion_point(includes)

namespace message {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_BattlePing_2eproto();
void protobuf_AssignDesc_BattlePing_2eproto();
void protobuf_ShutdownFile_BattlePing_2eproto();

class BattlePingRequest;
class BattlePingResponse;

// ===================================================================

class BattlePingRequest : public ::google::protobuf::MessageLite {
 public:
  BattlePingRequest();
  virtual ~BattlePingRequest();

  BattlePingRequest(const BattlePingRequest& from);

  inline BattlePingRequest& operator=(const BattlePingRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattlePingRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattlePingRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattlePingRequest* other);

  // implements Message ----------------------------------------------

  BattlePingRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattlePingRequest& from);
  void MergeFrom(const BattlePingRequest& from);
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

  // required .message.HeartbeatRequest battlePingRequest = 1;
  inline bool has_battlepingrequest() const;
  inline void clear_battlepingrequest();
  static const int kBattlePingRequestFieldNumber = 1;
  inline const ::message::HeartbeatRequest& battlepingrequest() const;
  inline ::message::HeartbeatRequest* mutable_battlepingrequest();
  inline ::message::HeartbeatRequest* release_battlepingrequest();
  inline void set_allocated_battlepingrequest(::message::HeartbeatRequest* battlepingrequest);

  // @@protoc_insertion_point(class_scope:message.BattlePingRequest)
 private:
  inline void set_has_battlepingrequest();
  inline void clear_has_battlepingrequest();

  ::message::HeartbeatRequest* battlepingrequest_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattlePing_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattlePing_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattlePing_2eproto();
  friend void protobuf_ShutdownFile_BattlePing_2eproto();

  void InitAsDefaultInstance();
  static BattlePingRequest* default_instance_;
};
// -------------------------------------------------------------------

class BattlePingResponse : public ::google::protobuf::MessageLite {
 public:
  BattlePingResponse();
  virtual ~BattlePingResponse();

  BattlePingResponse(const BattlePingResponse& from);

  inline BattlePingResponse& operator=(const BattlePingResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const BattlePingResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const BattlePingResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(BattlePingResponse* other);

  // implements Message ----------------------------------------------

  BattlePingResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const BattlePingResponse& from);
  void MergeFrom(const BattlePingResponse& from);
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

  // required .message.HeartbeatResponse battlePingResponse = 1;
  inline bool has_battlepingresponse() const;
  inline void clear_battlepingresponse();
  static const int kBattlePingResponseFieldNumber = 1;
  inline const ::message::HeartbeatResponse& battlepingresponse() const;
  inline ::message::HeartbeatResponse* mutable_battlepingresponse();
  inline ::message::HeartbeatResponse* release_battlepingresponse();
  inline void set_allocated_battlepingresponse(::message::HeartbeatResponse* battlepingresponse);

  // @@protoc_insertion_point(class_scope:message.BattlePingResponse)
 private:
  inline void set_has_battlepingresponse();
  inline void clear_has_battlepingresponse();

  ::message::HeartbeatResponse* battlepingresponse_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_BattlePing_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_BattlePing_2eproto();
  #endif
  friend void protobuf_AssignDesc_BattlePing_2eproto();
  friend void protobuf_ShutdownFile_BattlePing_2eproto();

  void InitAsDefaultInstance();
  static BattlePingResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// BattlePingRequest

// required .message.HeartbeatRequest battlePingRequest = 1;
inline bool BattlePingRequest::has_battlepingrequest() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattlePingRequest::set_has_battlepingrequest() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattlePingRequest::clear_has_battlepingrequest() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattlePingRequest::clear_battlepingrequest() {
  if (battlepingrequest_ != NULL) battlepingrequest_->::message::HeartbeatRequest::Clear();
  clear_has_battlepingrequest();
}
inline const ::message::HeartbeatRequest& BattlePingRequest::battlepingrequest() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return battlepingrequest_ != NULL ? *battlepingrequest_ : *default_instance().battlepingrequest_;
#else
  return battlepingrequest_ != NULL ? *battlepingrequest_ : *default_instance_->battlepingrequest_;
#endif
}
inline ::message::HeartbeatRequest* BattlePingRequest::mutable_battlepingrequest() {
  set_has_battlepingrequest();
  if (battlepingrequest_ == NULL) battlepingrequest_ = new ::message::HeartbeatRequest;
  return battlepingrequest_;
}
inline ::message::HeartbeatRequest* BattlePingRequest::release_battlepingrequest() {
  clear_has_battlepingrequest();
  ::message::HeartbeatRequest* temp = battlepingrequest_;
  battlepingrequest_ = NULL;
  return temp;
}
inline void BattlePingRequest::set_allocated_battlepingrequest(::message::HeartbeatRequest* battlepingrequest) {
  delete battlepingrequest_;
  battlepingrequest_ = battlepingrequest;
  if (battlepingrequest) {
    set_has_battlepingrequest();
  } else {
    clear_has_battlepingrequest();
  }
}

// -------------------------------------------------------------------

// BattlePingResponse

// required .message.HeartbeatResponse battlePingResponse = 1;
inline bool BattlePingResponse::has_battlepingresponse() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BattlePingResponse::set_has_battlepingresponse() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BattlePingResponse::clear_has_battlepingresponse() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BattlePingResponse::clear_battlepingresponse() {
  if (battlepingresponse_ != NULL) battlepingresponse_->::message::HeartbeatResponse::Clear();
  clear_has_battlepingresponse();
}
inline const ::message::HeartbeatResponse& BattlePingResponse::battlepingresponse() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return battlepingresponse_ != NULL ? *battlepingresponse_ : *default_instance().battlepingresponse_;
#else
  return battlepingresponse_ != NULL ? *battlepingresponse_ : *default_instance_->battlepingresponse_;
#endif
}
inline ::message::HeartbeatResponse* BattlePingResponse::mutable_battlepingresponse() {
  set_has_battlepingresponse();
  if (battlepingresponse_ == NULL) battlepingresponse_ = new ::message::HeartbeatResponse;
  return battlepingresponse_;
}
inline ::message::HeartbeatResponse* BattlePingResponse::release_battlepingresponse() {
  clear_has_battlepingresponse();
  ::message::HeartbeatResponse* temp = battlepingresponse_;
  battlepingresponse_ = NULL;
  return temp;
}
inline void BattlePingResponse::set_allocated_battlepingresponse(::message::HeartbeatResponse* battlepingresponse) {
  delete battlepingresponse_;
  battlepingresponse_ = battlepingresponse;
  if (battlepingresponse) {
    set_has_battlepingresponse();
  } else {
    clear_has_battlepingresponse();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BattlePing_2eproto__INCLUDED