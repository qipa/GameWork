// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameBuyFigure.proto

#ifndef PROTOBUF_GameBuyFigure_2eproto__INCLUDED
#define PROTOBUF_GameBuyFigure_2eproto__INCLUDED

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
void  protobuf_AddDesc_GameBuyFigure_2eproto();
void protobuf_AssignDesc_GameBuyFigure_2eproto();
void protobuf_ShutdownFile_GameBuyFigure_2eproto();

class GameBuyFigureRequest;
class GameBuyFigureResponse;

enum GameBuyFigureResponse_ResultState {
  GameBuyFigureResponse_ResultState_SUCCESS = 1,
  GameBuyFigureResponse_ResultState_FAIL = 2
};
bool GameBuyFigureResponse_ResultState_IsValid(int value);
const GameBuyFigureResponse_ResultState GameBuyFigureResponse_ResultState_ResultState_MIN = GameBuyFigureResponse_ResultState_SUCCESS;
const GameBuyFigureResponse_ResultState GameBuyFigureResponse_ResultState_ResultState_MAX = GameBuyFigureResponse_ResultState_FAIL;
const int GameBuyFigureResponse_ResultState_ResultState_ARRAYSIZE = GameBuyFigureResponse_ResultState_ResultState_MAX + 1;

// ===================================================================

class GameBuyFigureRequest : public ::google::protobuf::MessageLite {
 public:
  GameBuyFigureRequest();
  virtual ~GameBuyFigureRequest();

  GameBuyFigureRequest(const GameBuyFigureRequest& from);

  inline GameBuyFigureRequest& operator=(const GameBuyFigureRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const GameBuyFigureRequest& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GameBuyFigureRequest* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GameBuyFigureRequest* other);

  // implements Message ----------------------------------------------

  GameBuyFigureRequest* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GameBuyFigureRequest& from);
  void MergeFrom(const GameBuyFigureRequest& from);
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

  // required uint32 figureId = 1;
  inline bool has_figureid() const;
  inline void clear_figureid();
  static const int kFigureIdFieldNumber = 1;
  inline ::google::protobuf::uint32 figureid() const;
  inline void set_figureid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:message.GameBuyFigureRequest)
 private:
  inline void set_has_figureid();
  inline void clear_has_figureid();

  ::google::protobuf::uint32 figureid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GameBuyFigure_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GameBuyFigure_2eproto();
  #endif
  friend void protobuf_AssignDesc_GameBuyFigure_2eproto();
  friend void protobuf_ShutdownFile_GameBuyFigure_2eproto();

  void InitAsDefaultInstance();
  static GameBuyFigureRequest* default_instance_;
};
// -------------------------------------------------------------------

class GameBuyFigureResponse : public ::google::protobuf::MessageLite {
 public:
  GameBuyFigureResponse();
  virtual ~GameBuyFigureResponse();

  GameBuyFigureResponse(const GameBuyFigureResponse& from);

  inline GameBuyFigureResponse& operator=(const GameBuyFigureResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const GameBuyFigureResponse& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const GameBuyFigureResponse* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(GameBuyFigureResponse* other);

  // implements Message ----------------------------------------------

  GameBuyFigureResponse* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const GameBuyFigureResponse& from);
  void MergeFrom(const GameBuyFigureResponse& from);
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

  typedef GameBuyFigureResponse_ResultState ResultState;
  static const ResultState SUCCESS = GameBuyFigureResponse_ResultState_SUCCESS;
  static const ResultState FAIL = GameBuyFigureResponse_ResultState_FAIL;
  static inline bool ResultState_IsValid(int value) {
    return GameBuyFigureResponse_ResultState_IsValid(value);
  }
  static const ResultState ResultState_MIN =
    GameBuyFigureResponse_ResultState_ResultState_MIN;
  static const ResultState ResultState_MAX =
    GameBuyFigureResponse_ResultState_ResultState_MAX;
  static const int ResultState_ARRAYSIZE =
    GameBuyFigureResponse_ResultState_ResultState_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .message.GameBuyFigureResponse.ResultState state = 1;
  inline bool has_state() const;
  inline void clear_state();
  static const int kStateFieldNumber = 1;
  inline ::message::GameBuyFigureResponse_ResultState state() const;
  inline void set_state(::message::GameBuyFigureResponse_ResultState value);

  // @@protoc_insertion_point(class_scope:message.GameBuyFigureResponse)
 private:
  inline void set_has_state();
  inline void clear_has_state();

  int state_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_GameBuyFigure_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_GameBuyFigure_2eproto();
  #endif
  friend void protobuf_AssignDesc_GameBuyFigure_2eproto();
  friend void protobuf_ShutdownFile_GameBuyFigure_2eproto();

  void InitAsDefaultInstance();
  static GameBuyFigureResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// GameBuyFigureRequest

// required uint32 figureId = 1;
inline bool GameBuyFigureRequest::has_figureid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GameBuyFigureRequest::set_has_figureid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GameBuyFigureRequest::clear_has_figureid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GameBuyFigureRequest::clear_figureid() {
  figureid_ = 0u;
  clear_has_figureid();
}
inline ::google::protobuf::uint32 GameBuyFigureRequest::figureid() const {
  return figureid_;
}
inline void GameBuyFigureRequest::set_figureid(::google::protobuf::uint32 value) {
  set_has_figureid();
  figureid_ = value;
}

// -------------------------------------------------------------------

// GameBuyFigureResponse

// required .message.GameBuyFigureResponse.ResultState state = 1;
inline bool GameBuyFigureResponse::has_state() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GameBuyFigureResponse::set_has_state() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GameBuyFigureResponse::clear_has_state() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GameBuyFigureResponse::clear_state() {
  state_ = 1;
  clear_has_state();
}
inline ::message::GameBuyFigureResponse_ResultState GameBuyFigureResponse::state() const {
  return static_cast< ::message::GameBuyFigureResponse_ResultState >(state_);
}
inline void GameBuyFigureResponse::set_state(::message::GameBuyFigureResponse_ResultState value) {
  assert(::message::GameBuyFigureResponse_ResultState_IsValid(value));
  set_has_state();
  state_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameBuyFigure_2eproto__INCLUDED