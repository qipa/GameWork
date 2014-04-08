// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SearchUserInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SearchUserInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace message {

void protobuf_ShutdownFile_SearchUserInfo_2eproto() {
  delete SearchUserInfoRequest::default_instance_;
  delete SearchUserInfoResponse::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_SearchUserInfo_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_SearchUserInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::message::protobuf_AddDesc_UserInfo_2eproto();
  SearchUserInfoRequest::default_instance_ = new SearchUserInfoRequest();
  SearchUserInfoResponse::default_instance_ = new SearchUserInfoResponse();
  SearchUserInfoRequest::default_instance_->InitAsDefaultInstance();
  SearchUserInfoResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SearchUserInfo_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_SearchUserInfo_2eproto_once_);
void protobuf_AddDesc_SearchUserInfo_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_SearchUserInfo_2eproto_once_,
                 &protobuf_AddDesc_SearchUserInfo_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SearchUserInfo_2eproto {
  StaticDescriptorInitializer_SearchUserInfo_2eproto() {
    protobuf_AddDesc_SearchUserInfo_2eproto();
  }
} static_descriptor_initializer_SearchUserInfo_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int SearchUserInfoRequest::kDidFieldNumber;
#endif  // !_MSC_VER

SearchUserInfoRequest::SearchUserInfoRequest()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SearchUserInfoRequest::InitAsDefaultInstance() {
}

SearchUserInfoRequest::SearchUserInfoRequest(const SearchUserInfoRequest& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SearchUserInfoRequest::SharedCtor() {
  _cached_size_ = 0;
  did_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchUserInfoRequest::~SearchUserInfoRequest() {
  SharedDtor();
}

void SearchUserInfoRequest::SharedDtor() {
  if (did_ != &::google::protobuf::internal::kEmptyString) {
    delete did_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SearchUserInfoRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SearchUserInfoRequest& SearchUserInfoRequest::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SearchUserInfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SearchUserInfo_2eproto();
#endif
  return *default_instance_;
}

SearchUserInfoRequest* SearchUserInfoRequest::default_instance_ = NULL;

SearchUserInfoRequest* SearchUserInfoRequest::New() const {
  return new SearchUserInfoRequest;
}

void SearchUserInfoRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_did()) {
      if (did_ != &::google::protobuf::internal::kEmptyString) {
        did_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SearchUserInfoRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string did = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_did()));
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

void SearchUserInfoRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string did = 1;
  if (has_did()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->did(), output);
  }

}

int SearchUserInfoRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string did = 1;
    if (has_did()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->did());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchUserInfoRequest::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SearchUserInfoRequest*>(&from));
}

void SearchUserInfoRequest::MergeFrom(const SearchUserInfoRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_did()) {
      set_did(from.did());
    }
  }
}

void SearchUserInfoRequest::CopyFrom(const SearchUserInfoRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchUserInfoRequest::IsInitialized() const {

  return true;
}

void SearchUserInfoRequest::Swap(SearchUserInfoRequest* other) {
  if (other != this) {
    std::swap(did_, other->did_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SearchUserInfoRequest::GetTypeName() const {
  return "message.SearchUserInfoRequest";
}


// ===================================================================

bool SearchUserInfoResponse_SearchStatus_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const SearchUserInfoResponse_SearchStatus SearchUserInfoResponse::SearchStatus_SUCCESS;
const SearchUserInfoResponse_SearchStatus SearchUserInfoResponse::SearchStatus_FAIL;
const SearchUserInfoResponse_SearchStatus SearchUserInfoResponse::SearchStatus_MIN;
const SearchUserInfoResponse_SearchStatus SearchUserInfoResponse::SearchStatus_MAX;
const int SearchUserInfoResponse::SearchStatus_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int SearchUserInfoResponse::kStatusFieldNumber;
const int SearchUserInfoResponse::kUserInfoFieldNumber;
#endif  // !_MSC_VER

SearchUserInfoResponse::SearchUserInfoResponse()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SearchUserInfoResponse::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  userinfo_ = const_cast< ::message::UserBasicInfo*>(
      ::message::UserBasicInfo::internal_default_instance());
#else
  userinfo_ = const_cast< ::message::UserBasicInfo*>(&::message::UserBasicInfo::default_instance());
#endif
}

SearchUserInfoResponse::SearchUserInfoResponse(const SearchUserInfoResponse& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SearchUserInfoResponse::SharedCtor() {
  _cached_size_ = 0;
  status_ = 1;
  userinfo_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SearchUserInfoResponse::~SearchUserInfoResponse() {
  SharedDtor();
}

void SearchUserInfoResponse::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete userinfo_;
  }
}

void SearchUserInfoResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SearchUserInfoResponse& SearchUserInfoResponse::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_SearchUserInfo_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_SearchUserInfo_2eproto();
#endif
  return *default_instance_;
}

SearchUserInfoResponse* SearchUserInfoResponse::default_instance_ = NULL;

SearchUserInfoResponse* SearchUserInfoResponse::New() const {
  return new SearchUserInfoResponse;
}

void SearchUserInfoResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    status_ = 1;
    if (has_userinfo()) {
      if (userinfo_ != NULL) userinfo_->::message::UserBasicInfo::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SearchUserInfoResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .message.SearchUserInfoResponse.SearchStatus status = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::message::SearchUserInfoResponse_SearchStatus_IsValid(value)) {
            set_status(static_cast< ::message::SearchUserInfoResponse_SearchStatus >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_userInfo;
        break;
      }

      // optional .message.UserBasicInfo userInfo = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_userInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_userinfo()));
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

void SearchUserInfoResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .message.SearchUserInfoResponse.SearchStatus status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->status(), output);
  }

  // optional .message.UserBasicInfo userInfo = 2;
  if (has_userinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->userinfo(), output);
  }

}

int SearchUserInfoResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .message.SearchUserInfoResponse.SearchStatus status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
    }

    // optional .message.UserBasicInfo userInfo = 2;
    if (has_userinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->userinfo());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SearchUserInfoResponse::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SearchUserInfoResponse*>(&from));
}

void SearchUserInfoResponse::MergeFrom(const SearchUserInfoResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_userinfo()) {
      mutable_userinfo()->::message::UserBasicInfo::MergeFrom(from.userinfo());
    }
  }
}

void SearchUserInfoResponse::CopyFrom(const SearchUserInfoResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SearchUserInfoResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_userinfo()) {
    if (!this->userinfo().IsInitialized()) return false;
  }
  return true;
}

void SearchUserInfoResponse::Swap(SearchUserInfoResponse* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(userinfo_, other->userinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SearchUserInfoResponse::GetTypeName() const {
  return "message.SearchUserInfoResponse";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace message

// @@protoc_insertion_point(global_scope)