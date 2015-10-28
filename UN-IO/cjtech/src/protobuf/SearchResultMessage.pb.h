// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SearchResultMessage.proto

#ifndef PROTOBUF_SearchResultMessage_2eproto__INCLUDED
#define PROTOBUF_SearchResultMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SearchResultMessage_2eproto();
void protobuf_AssignDesc_SearchResultMessage_2eproto();
void protobuf_ShutdownFile_SearchResultMessage_2eproto();

class SearchResultMessage;

// ===================================================================

class SearchResultMessage : public ::google::protobuf::Message {
 public:
  SearchResultMessage();
  virtual ~SearchResultMessage();
  
  SearchResultMessage(const SearchResultMessage& from);
  
  inline SearchResultMessage& operator=(const SearchResultMessage& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SearchResultMessage& default_instance();
  
  void Swap(SearchResultMessage* other);
  
  // implements Message ----------------------------------------------
  
  SearchResultMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SearchResultMessage& from);
  void MergeFrom(const SearchResultMessage& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string picture_name = 1;
  inline bool has_picture_name() const;
  inline void clear_picture_name();
  static const int kPictureNameFieldNumber = 1;
  inline const ::std::string& picture_name() const;
  inline void set_picture_name(const ::std::string& value);
  inline void set_picture_name(const char* value);
  inline void set_picture_name(const char* value, size_t size);
  inline ::std::string* mutable_picture_name();
  inline ::std::string* release_picture_name();
  
  // required uint32 result_length = 2;
  inline bool has_result_length() const;
  inline void clear_result_length();
  static const int kResultLengthFieldNumber = 2;
  inline ::google::protobuf::uint32 result_length() const;
  inline void set_result_length(::google::protobuf::uint32 value);
  
  // required uint32 task_id = 3;
  inline bool has_task_id() const;
  inline void clear_task_id();
  static const int kTaskIdFieldNumber = 3;
  inline ::google::protobuf::uint32 task_id() const;
  inline void set_task_id(::google::protobuf::uint32 value);
  
  // required string mj_id = 4;
  inline bool has_mj_id() const;
  inline void clear_mj_id();
  static const int kMjIdFieldNumber = 4;
  inline const ::std::string& mj_id() const;
  inline void set_mj_id(const ::std::string& value);
  inline void set_mj_id(const char* value);
  inline void set_mj_id(const char* value, size_t size);
  inline ::std::string* mutable_mj_id();
  inline ::std::string* release_mj_id();
  
  // required string trackerUrl = 5;
  inline bool has_trackerurl() const;
  inline void clear_trackerurl();
  static const int kTrackerUrlFieldNumber = 5;
  inline const ::std::string& trackerurl() const;
  inline void set_trackerurl(const ::std::string& value);
  inline void set_trackerurl(const char* value);
  inline void set_trackerurl(const char* value, size_t size);
  inline ::std::string* mutable_trackerurl();
  inline ::std::string* release_trackerurl();
  
  // required uint32 status = 6;
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 6;
  inline ::google::protobuf::uint32 status() const;
  inline void set_status(::google::protobuf::uint32 value);
  
  // required int32 retrain = 7;
  inline bool has_retrain() const;
  inline void clear_retrain();
  static const int kRetrainFieldNumber = 7;
  inline ::google::protobuf::int32 retrain() const;
  inline void set_retrain(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:SearchResultMessage)
 private:
  inline void set_has_picture_name();
  inline void clear_has_picture_name();
  inline void set_has_result_length();
  inline void clear_has_result_length();
  inline void set_has_task_id();
  inline void clear_has_task_id();
  inline void set_has_mj_id();
  inline void clear_has_mj_id();
  inline void set_has_trackerurl();
  inline void clear_has_trackerurl();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_retrain();
  inline void clear_has_retrain();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* picture_name_;
  ::google::protobuf::uint32 result_length_;
  ::google::protobuf::uint32 task_id_;
  ::std::string* mj_id_;
  ::std::string* trackerurl_;
  ::google::protobuf::uint32 status_;
  ::google::protobuf::int32 retrain_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_SearchResultMessage_2eproto();
  friend void protobuf_AssignDesc_SearchResultMessage_2eproto();
  friend void protobuf_ShutdownFile_SearchResultMessage_2eproto();
  
  void InitAsDefaultInstance();
  static SearchResultMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// SearchResultMessage

// required string picture_name = 1;
inline bool SearchResultMessage::has_picture_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SearchResultMessage::set_has_picture_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SearchResultMessage::clear_has_picture_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SearchResultMessage::clear_picture_name() {
  if (picture_name_ != &::google::protobuf::internal::kEmptyString) {
    picture_name_->clear();
  }
  clear_has_picture_name();
}
inline const ::std::string& SearchResultMessage::picture_name() const {
  return *picture_name_;
}
inline void SearchResultMessage::set_picture_name(const ::std::string& value) {
  set_has_picture_name();
  if (picture_name_ == &::google::protobuf::internal::kEmptyString) {
    picture_name_ = new ::std::string;
  }
  picture_name_->assign(value);
}
inline void SearchResultMessage::set_picture_name(const char* value) {
  set_has_picture_name();
  if (picture_name_ == &::google::protobuf::internal::kEmptyString) {
    picture_name_ = new ::std::string;
  }
  picture_name_->assign(value);
}
inline void SearchResultMessage::set_picture_name(const char* value, size_t size) {
  set_has_picture_name();
  if (picture_name_ == &::google::protobuf::internal::kEmptyString) {
    picture_name_ = new ::std::string;
  }
  picture_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchResultMessage::mutable_picture_name() {
  set_has_picture_name();
  if (picture_name_ == &::google::protobuf::internal::kEmptyString) {
    picture_name_ = new ::std::string;
  }
  return picture_name_;
}
inline ::std::string* SearchResultMessage::release_picture_name() {
  clear_has_picture_name();
  if (picture_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = picture_name_;
    picture_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 result_length = 2;
inline bool SearchResultMessage::has_result_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SearchResultMessage::set_has_result_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SearchResultMessage::clear_has_result_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SearchResultMessage::clear_result_length() {
  result_length_ = 0u;
  clear_has_result_length();
}
inline ::google::protobuf::uint32 SearchResultMessage::result_length() const {
  return result_length_;
}
inline void SearchResultMessage::set_result_length(::google::protobuf::uint32 value) {
  set_has_result_length();
  result_length_ = value;
}

// required uint32 task_id = 3;
inline bool SearchResultMessage::has_task_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SearchResultMessage::set_has_task_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SearchResultMessage::clear_has_task_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SearchResultMessage::clear_task_id() {
  task_id_ = 0u;
  clear_has_task_id();
}
inline ::google::protobuf::uint32 SearchResultMessage::task_id() const {
  return task_id_;
}
inline void SearchResultMessage::set_task_id(::google::protobuf::uint32 value) {
  set_has_task_id();
  task_id_ = value;
}

// required string mj_id = 4;
inline bool SearchResultMessage::has_mj_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void SearchResultMessage::set_has_mj_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void SearchResultMessage::clear_has_mj_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void SearchResultMessage::clear_mj_id() {
  if (mj_id_ != &::google::protobuf::internal::kEmptyString) {
    mj_id_->clear();
  }
  clear_has_mj_id();
}
inline const ::std::string& SearchResultMessage::mj_id() const {
  return *mj_id_;
}
inline void SearchResultMessage::set_mj_id(const ::std::string& value) {
  set_has_mj_id();
  if (mj_id_ == &::google::protobuf::internal::kEmptyString) {
    mj_id_ = new ::std::string;
  }
  mj_id_->assign(value);
}
inline void SearchResultMessage::set_mj_id(const char* value) {
  set_has_mj_id();
  if (mj_id_ == &::google::protobuf::internal::kEmptyString) {
    mj_id_ = new ::std::string;
  }
  mj_id_->assign(value);
}
inline void SearchResultMessage::set_mj_id(const char* value, size_t size) {
  set_has_mj_id();
  if (mj_id_ == &::google::protobuf::internal::kEmptyString) {
    mj_id_ = new ::std::string;
  }
  mj_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchResultMessage::mutable_mj_id() {
  set_has_mj_id();
  if (mj_id_ == &::google::protobuf::internal::kEmptyString) {
    mj_id_ = new ::std::string;
  }
  return mj_id_;
}
inline ::std::string* SearchResultMessage::release_mj_id() {
  clear_has_mj_id();
  if (mj_id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mj_id_;
    mj_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string trackerUrl = 5;
inline bool SearchResultMessage::has_trackerurl() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void SearchResultMessage::set_has_trackerurl() {
  _has_bits_[0] |= 0x00000010u;
}
inline void SearchResultMessage::clear_has_trackerurl() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void SearchResultMessage::clear_trackerurl() {
  if (trackerurl_ != &::google::protobuf::internal::kEmptyString) {
    trackerurl_->clear();
  }
  clear_has_trackerurl();
}
inline const ::std::string& SearchResultMessage::trackerurl() const {
  return *trackerurl_;
}
inline void SearchResultMessage::set_trackerurl(const ::std::string& value) {
  set_has_trackerurl();
  if (trackerurl_ == &::google::protobuf::internal::kEmptyString) {
    trackerurl_ = new ::std::string;
  }
  trackerurl_->assign(value);
}
inline void SearchResultMessage::set_trackerurl(const char* value) {
  set_has_trackerurl();
  if (trackerurl_ == &::google::protobuf::internal::kEmptyString) {
    trackerurl_ = new ::std::string;
  }
  trackerurl_->assign(value);
}
inline void SearchResultMessage::set_trackerurl(const char* value, size_t size) {
  set_has_trackerurl();
  if (trackerurl_ == &::google::protobuf::internal::kEmptyString) {
    trackerurl_ = new ::std::string;
  }
  trackerurl_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SearchResultMessage::mutable_trackerurl() {
  set_has_trackerurl();
  if (trackerurl_ == &::google::protobuf::internal::kEmptyString) {
    trackerurl_ = new ::std::string;
  }
  return trackerurl_;
}
inline ::std::string* SearchResultMessage::release_trackerurl() {
  clear_has_trackerurl();
  if (trackerurl_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = trackerurl_;
    trackerurl_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required uint32 status = 6;
inline bool SearchResultMessage::has_status() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void SearchResultMessage::set_has_status() {
  _has_bits_[0] |= 0x00000020u;
}
inline void SearchResultMessage::clear_has_status() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void SearchResultMessage::clear_status() {
  status_ = 0u;
  clear_has_status();
}
inline ::google::protobuf::uint32 SearchResultMessage::status() const {
  return status_;
}
inline void SearchResultMessage::set_status(::google::protobuf::uint32 value) {
  set_has_status();
  status_ = value;
}

// required int32 retrain = 7;
inline bool SearchResultMessage::has_retrain() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void SearchResultMessage::set_has_retrain() {
  _has_bits_[0] |= 0x00000040u;
}
inline void SearchResultMessage::clear_has_retrain() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void SearchResultMessage::clear_retrain() {
  retrain_ = 0;
  clear_has_retrain();
}
inline ::google::protobuf::int32 SearchResultMessage::retrain() const {
  return retrain_;
}
inline void SearchResultMessage::set_retrain(::google::protobuf::int32 value) {
  set_has_retrain();
  retrain_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SearchResultMessage_2eproto__INCLUDED
