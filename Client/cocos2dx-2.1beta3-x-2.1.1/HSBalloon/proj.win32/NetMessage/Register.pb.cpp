// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Register.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_Register_2eproto() {
  delete RegisterRequest::default_instance_;
  delete RegisterResponse::default_instance_;
}

void protobuf_AddDesc_Register_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  RegisterRequest::default_instance_ = new RegisterRequest();
  RegisterResponse::default_instance_ = new RegisterResponse();
  RegisterRequest::default_instance_->InitAsDefaultInstance();
  RegisterResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Register_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Register_2eproto {
  StaticDescriptorInitializer_Register_2eproto() {
    protobuf_AddDesc_Register_2eproto();
  }
} static_descriptor_initializer_Register_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int RegisterRequest::kUserNameFieldNumber;
const int RegisterRequest::kChIDFieldNumber;
#endif  // !_MSC_VER

RegisterRequest::RegisterRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void RegisterRequest::InitAsDefaultInstance() {
}

RegisterRequest::RegisterRequest(const RegisterRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void RegisterRequest::SharedCtor() {
  _cached_size_ = 0;
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  chid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RegisterRequest::~RegisterRequest() {
  SharedDtor();
}

void RegisterRequest::SharedDtor() {
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (this != default_instance_) {
  }
}

void RegisterRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RegisterRequest& RegisterRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Register_2eproto();  return *default_instance_;
}

RegisterRequest* RegisterRequest::default_instance_ = NULL;

RegisterRequest* RegisterRequest::New() const {
  return new RegisterRequest;
}

void RegisterRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
    chid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool RegisterRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string userName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_chID;
        break;
      }
      
      // optional int32 chID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_chID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &chid_)));
          set_has_chid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RegisterRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string userName = 1;
  if (has_username()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->username(), output);
  }
  
  // optional int32 chID = 2;
  if (has_chid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->chid(), output);
  }
  
}

int RegisterRequest::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string userName = 1;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }
    
    // optional int32 chID = 2;
    if (has_chid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->chid());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RegisterRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RegisterRequest*>(&from));
}

void RegisterRequest::MergeFrom(const RegisterRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_username()) {
      set_username(from.username());
    }
    if (from.has_chid()) {
      set_chid(from.chid());
    }
  }
}

void RegisterRequest::CopyFrom(const RegisterRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RegisterRequest::Swap(RegisterRequest* other) {
  if (other != this) {
    std::swap(username_, other->username_);
    std::swap(chid_, other->chid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string RegisterRequest::GetTypeName() const {
  return "message.RegisterRequest";
}


// ===================================================================

bool RegisterResponse_RegisterStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const RegisterResponse_RegisterStatus RegisterResponse::RegisterStatus_OK;
const RegisterResponse_RegisterStatus RegisterResponse::RegisterStatus_FAIL;
const RegisterResponse_RegisterStatus RegisterResponse::RegisterStatus_MIN;
const RegisterResponse_RegisterStatus RegisterResponse::RegisterStatus_MAX;
const int RegisterResponse::RegisterStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int RegisterResponse::kStatusFieldNumber;
const int RegisterResponse::kUidFieldNumber;
const int RegisterResponse::kUserNameFieldNumber;
#endif  // !_MSC_VER

RegisterResponse::RegisterResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void RegisterResponse::InitAsDefaultInstance() {
}

RegisterResponse::RegisterResponse(const RegisterResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void RegisterResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 1;
  uid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  username_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RegisterResponse::~RegisterResponse() {
  SharedDtor();
}

void RegisterResponse::SharedDtor() {
  if (uid_ != &::google::protobuf::internal::kEmptyString) {
    delete uid_;
  }
  if (username_ != &::google::protobuf::internal::kEmptyString) {
    delete username_;
  }
  if (this != default_instance_) {
  }
}

void RegisterResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RegisterResponse& RegisterResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Register_2eproto();  return *default_instance_;
}

RegisterResponse* RegisterResponse::default_instance_ = NULL;

RegisterResponse* RegisterResponse::New() const {
  return new RegisterResponse;
}

void RegisterResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 1;
    if (has_uid()) {
      if (uid_ != &::google::protobuf::internal::kEmptyString) {
        uid_->clear();
      }
    }
    if (has_username()) {
      if (username_ != &::google::protobuf::internal::kEmptyString) {
        username_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool RegisterResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.RegisterResponse.RegisterStatus status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::RegisterResponse_RegisterStatus_IsValid(value)) {
            set_status(static_cast< ::message::RegisterResponse_RegisterStatus >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_uid;
        break;
      }
      
      // optional string uid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_uid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_uid()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_userName;
        break;
      }
      
      // optional string userName = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RegisterResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.RegisterResponse.RegisterStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }
  
  // optional string uid = 2;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->uid(), output);
  }
  
  // optional string userName = 3;
  if (has_username()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->username(), output);
  }
  
}

int RegisterResponse::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.RegisterResponse.RegisterStatus status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }
    
    // optional string uid = 2;
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->uid());
    }
    
    // optional string userName = 3;
    if (has_username()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->username());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RegisterResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RegisterResponse*>(&from));
}

void RegisterResponse::MergeFrom(const RegisterResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_uid()) {
      set_uid(from.uid());
    }
    if (from.has_username()) {
      set_username(from.username());
    }
  }
}

void RegisterResponse::CopyFrom(const RegisterResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void RegisterResponse::Swap(RegisterResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(uid_, other->uid_);
    std::swap(username_, other->username_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string RegisterResponse::GetTypeName() const {
  return "message.RegisterResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)