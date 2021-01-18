/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TLikeService_H
#define TLikeService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "buzzblog_types.h"

namespace buzzblog {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TLikeServiceIf {
 public:
  virtual ~TLikeServiceIf() {}
  virtual void like_post(TLike& _return, const int32_t requester_id, const int32_t post_id) = 0;
  virtual void retrieve_standard_like(TLike& _return, const int32_t requester_id, const int32_t like_id) = 0;
  virtual void retrieve_expanded_like(TLike& _return, const int32_t requester_id, const int32_t like_id) = 0;
  virtual void delete_like(const int32_t requester_id, const int32_t like_id) = 0;
  virtual void list_likes(std::vector<TLike> & _return, const int32_t requester_id, const int32_t account_id, const int32_t post_id) = 0;
  virtual int32_t count_likes_by_account(const int32_t requester_id, const int32_t account_id) = 0;
  virtual int32_t count_likes_of_post(const int32_t requester_id, const int32_t post_id) = 0;
};

class TLikeServiceIfFactory {
 public:
  typedef TLikeServiceIf Handler;

  virtual ~TLikeServiceIfFactory() {}

  virtual TLikeServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TLikeServiceIf* /* handler */) = 0;
};

class TLikeServiceIfSingletonFactory : virtual public TLikeServiceIfFactory {
 public:
  TLikeServiceIfSingletonFactory(const ::std::shared_ptr<TLikeServiceIf>& iface) : iface_(iface) {}
  virtual ~TLikeServiceIfSingletonFactory() {}

  virtual TLikeServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TLikeServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<TLikeServiceIf> iface_;
};

class TLikeServiceNull : virtual public TLikeServiceIf {
 public:
  virtual ~TLikeServiceNull() {}
  void like_post(TLike& /* _return */, const int32_t /* requester_id */, const int32_t /* post_id */) {
    return;
  }
  void retrieve_standard_like(TLike& /* _return */, const int32_t /* requester_id */, const int32_t /* like_id */) {
    return;
  }
  void retrieve_expanded_like(TLike& /* _return */, const int32_t /* requester_id */, const int32_t /* like_id */) {
    return;
  }
  void delete_like(const int32_t /* requester_id */, const int32_t /* like_id */) {
    return;
  }
  void list_likes(std::vector<TLike> & /* _return */, const int32_t /* requester_id */, const int32_t /* account_id */, const int32_t /* post_id */) {
    return;
  }
  int32_t count_likes_by_account(const int32_t /* requester_id */, const int32_t /* account_id */) {
    int32_t _return = 0;
    return _return;
  }
  int32_t count_likes_of_post(const int32_t /* requester_id */, const int32_t /* post_id */) {
    int32_t _return = 0;
    return _return;
  }
};

typedef struct _TLikeService_like_post_args__isset {
  _TLikeService_like_post_args__isset() : requester_id(false), post_id(false) {}
  bool requester_id :1;
  bool post_id :1;
} _TLikeService_like_post_args__isset;

class TLikeService_like_post_args {
 public:

  TLikeService_like_post_args(const TLikeService_like_post_args&);
  TLikeService_like_post_args& operator=(const TLikeService_like_post_args&);
  TLikeService_like_post_args() : requester_id(0), post_id(0) {
  }

  virtual ~TLikeService_like_post_args() noexcept;
  int32_t requester_id;
  int32_t post_id;

  _TLikeService_like_post_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_post_id(const int32_t val);

  bool operator == (const TLikeService_like_post_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(post_id == rhs.post_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_like_post_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_like_post_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_like_post_pargs {
 public:


  virtual ~TLikeService_like_post_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* post_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_like_post_result__isset {
  _TLikeService_like_post_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TLikeService_like_post_result__isset;

class TLikeService_like_post_result {
 public:

  TLikeService_like_post_result(const TLikeService_like_post_result&);
  TLikeService_like_post_result& operator=(const TLikeService_like_post_result&);
  TLikeService_like_post_result() {
  }

  virtual ~TLikeService_like_post_result() noexcept;
  TLike success;
  TLikeAlreadyExistsException e;

  _TLikeService_like_post_result__isset __isset;

  void __set_success(const TLike& val);

  void __set_e(const TLikeAlreadyExistsException& val);

  bool operator == (const TLikeService_like_post_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TLikeService_like_post_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_like_post_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_like_post_presult__isset {
  _TLikeService_like_post_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TLikeService_like_post_presult__isset;

class TLikeService_like_post_presult {
 public:


  virtual ~TLikeService_like_post_presult() noexcept;
  TLike* success;
  TLikeAlreadyExistsException e;

  _TLikeService_like_post_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_retrieve_standard_like_args__isset {
  _TLikeService_retrieve_standard_like_args__isset() : requester_id(false), like_id(false) {}
  bool requester_id :1;
  bool like_id :1;
} _TLikeService_retrieve_standard_like_args__isset;

class TLikeService_retrieve_standard_like_args {
 public:

  TLikeService_retrieve_standard_like_args(const TLikeService_retrieve_standard_like_args&);
  TLikeService_retrieve_standard_like_args& operator=(const TLikeService_retrieve_standard_like_args&);
  TLikeService_retrieve_standard_like_args() : requester_id(0), like_id(0) {
  }

  virtual ~TLikeService_retrieve_standard_like_args() noexcept;
  int32_t requester_id;
  int32_t like_id;

  _TLikeService_retrieve_standard_like_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_like_id(const int32_t val);

  bool operator == (const TLikeService_retrieve_standard_like_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(like_id == rhs.like_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_retrieve_standard_like_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_retrieve_standard_like_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_retrieve_standard_like_pargs {
 public:


  virtual ~TLikeService_retrieve_standard_like_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* like_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_retrieve_standard_like_result__isset {
  _TLikeService_retrieve_standard_like_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TLikeService_retrieve_standard_like_result__isset;

class TLikeService_retrieve_standard_like_result {
 public:

  TLikeService_retrieve_standard_like_result(const TLikeService_retrieve_standard_like_result&);
  TLikeService_retrieve_standard_like_result& operator=(const TLikeService_retrieve_standard_like_result&);
  TLikeService_retrieve_standard_like_result() {
  }

  virtual ~TLikeService_retrieve_standard_like_result() noexcept;
  TLike success;
  TLikeNotFoundException e;

  _TLikeService_retrieve_standard_like_result__isset __isset;

  void __set_success(const TLike& val);

  void __set_e(const TLikeNotFoundException& val);

  bool operator == (const TLikeService_retrieve_standard_like_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TLikeService_retrieve_standard_like_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_retrieve_standard_like_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_retrieve_standard_like_presult__isset {
  _TLikeService_retrieve_standard_like_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TLikeService_retrieve_standard_like_presult__isset;

class TLikeService_retrieve_standard_like_presult {
 public:


  virtual ~TLikeService_retrieve_standard_like_presult() noexcept;
  TLike* success;
  TLikeNotFoundException e;

  _TLikeService_retrieve_standard_like_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_retrieve_expanded_like_args__isset {
  _TLikeService_retrieve_expanded_like_args__isset() : requester_id(false), like_id(false) {}
  bool requester_id :1;
  bool like_id :1;
} _TLikeService_retrieve_expanded_like_args__isset;

class TLikeService_retrieve_expanded_like_args {
 public:

  TLikeService_retrieve_expanded_like_args(const TLikeService_retrieve_expanded_like_args&);
  TLikeService_retrieve_expanded_like_args& operator=(const TLikeService_retrieve_expanded_like_args&);
  TLikeService_retrieve_expanded_like_args() : requester_id(0), like_id(0) {
  }

  virtual ~TLikeService_retrieve_expanded_like_args() noexcept;
  int32_t requester_id;
  int32_t like_id;

  _TLikeService_retrieve_expanded_like_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_like_id(const int32_t val);

  bool operator == (const TLikeService_retrieve_expanded_like_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(like_id == rhs.like_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_retrieve_expanded_like_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_retrieve_expanded_like_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_retrieve_expanded_like_pargs {
 public:


  virtual ~TLikeService_retrieve_expanded_like_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* like_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_retrieve_expanded_like_result__isset {
  _TLikeService_retrieve_expanded_like_result__isset() : success(false), e1(false), e2(false), e3(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
  bool e3 :1;
} _TLikeService_retrieve_expanded_like_result__isset;

class TLikeService_retrieve_expanded_like_result {
 public:

  TLikeService_retrieve_expanded_like_result(const TLikeService_retrieve_expanded_like_result&);
  TLikeService_retrieve_expanded_like_result& operator=(const TLikeService_retrieve_expanded_like_result&);
  TLikeService_retrieve_expanded_like_result() {
  }

  virtual ~TLikeService_retrieve_expanded_like_result() noexcept;
  TLike success;
  TLikeNotFoundException e1;
  TAccountNotFoundException e2;
  TPostNotFoundException e3;

  _TLikeService_retrieve_expanded_like_result__isset __isset;

  void __set_success(const TLike& val);

  void __set_e1(const TLikeNotFoundException& val);

  void __set_e2(const TAccountNotFoundException& val);

  void __set_e3(const TPostNotFoundException& val);

  bool operator == (const TLikeService_retrieve_expanded_like_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    if (!(e3 == rhs.e3))
      return false;
    return true;
  }
  bool operator != (const TLikeService_retrieve_expanded_like_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_retrieve_expanded_like_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_retrieve_expanded_like_presult__isset {
  _TLikeService_retrieve_expanded_like_presult__isset() : success(false), e1(false), e2(false), e3(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
  bool e3 :1;
} _TLikeService_retrieve_expanded_like_presult__isset;

class TLikeService_retrieve_expanded_like_presult {
 public:


  virtual ~TLikeService_retrieve_expanded_like_presult() noexcept;
  TLike* success;
  TLikeNotFoundException e1;
  TAccountNotFoundException e2;
  TPostNotFoundException e3;

  _TLikeService_retrieve_expanded_like_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_delete_like_args__isset {
  _TLikeService_delete_like_args__isset() : requester_id(false), like_id(false) {}
  bool requester_id :1;
  bool like_id :1;
} _TLikeService_delete_like_args__isset;

class TLikeService_delete_like_args {
 public:

  TLikeService_delete_like_args(const TLikeService_delete_like_args&);
  TLikeService_delete_like_args& operator=(const TLikeService_delete_like_args&);
  TLikeService_delete_like_args() : requester_id(0), like_id(0) {
  }

  virtual ~TLikeService_delete_like_args() noexcept;
  int32_t requester_id;
  int32_t like_id;

  _TLikeService_delete_like_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_like_id(const int32_t val);

  bool operator == (const TLikeService_delete_like_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(like_id == rhs.like_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_delete_like_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_delete_like_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_delete_like_pargs {
 public:


  virtual ~TLikeService_delete_like_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* like_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_delete_like_result__isset {
  _TLikeService_delete_like_result__isset() : e1(false), e2(false) {}
  bool e1 :1;
  bool e2 :1;
} _TLikeService_delete_like_result__isset;

class TLikeService_delete_like_result {
 public:

  TLikeService_delete_like_result(const TLikeService_delete_like_result&);
  TLikeService_delete_like_result& operator=(const TLikeService_delete_like_result&);
  TLikeService_delete_like_result() {
  }

  virtual ~TLikeService_delete_like_result() noexcept;
  TLikeNotFoundException e1;
  TLikeNotAuthorizedException e2;

  _TLikeService_delete_like_result__isset __isset;

  void __set_e1(const TLikeNotFoundException& val);

  void __set_e2(const TLikeNotAuthorizedException& val);

  bool operator == (const TLikeService_delete_like_result & rhs) const
  {
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    return true;
  }
  bool operator != (const TLikeService_delete_like_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_delete_like_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_delete_like_presult__isset {
  _TLikeService_delete_like_presult__isset() : e1(false), e2(false) {}
  bool e1 :1;
  bool e2 :1;
} _TLikeService_delete_like_presult__isset;

class TLikeService_delete_like_presult {
 public:


  virtual ~TLikeService_delete_like_presult() noexcept;
  TLikeNotFoundException e1;
  TLikeNotAuthorizedException e2;

  _TLikeService_delete_like_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_list_likes_args__isset {
  _TLikeService_list_likes_args__isset() : requester_id(false), account_id(false), post_id(false) {}
  bool requester_id :1;
  bool account_id :1;
  bool post_id :1;
} _TLikeService_list_likes_args__isset;

class TLikeService_list_likes_args {
 public:

  TLikeService_list_likes_args(const TLikeService_list_likes_args&);
  TLikeService_list_likes_args& operator=(const TLikeService_list_likes_args&);
  TLikeService_list_likes_args() : requester_id(0), account_id(0), post_id(0) {
  }

  virtual ~TLikeService_list_likes_args() noexcept;
  int32_t requester_id;
  int32_t account_id;
  int32_t post_id;

  _TLikeService_list_likes_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  void __set_post_id(const int32_t val);

  bool operator == (const TLikeService_list_likes_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    if (!(post_id == rhs.post_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_list_likes_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_list_likes_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_list_likes_pargs {
 public:


  virtual ~TLikeService_list_likes_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;
  const int32_t* post_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_list_likes_result__isset {
  _TLikeService_list_likes_result__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TLikeService_list_likes_result__isset;

class TLikeService_list_likes_result {
 public:

  TLikeService_list_likes_result(const TLikeService_list_likes_result&);
  TLikeService_list_likes_result& operator=(const TLikeService_list_likes_result&);
  TLikeService_list_likes_result() {
  }

  virtual ~TLikeService_list_likes_result() noexcept;
  std::vector<TLike>  success;
  TAccountNotFoundException e1;
  TPostNotFoundException e2;

  _TLikeService_list_likes_result__isset __isset;

  void __set_success(const std::vector<TLike> & val);

  void __set_e1(const TAccountNotFoundException& val);

  void __set_e2(const TPostNotFoundException& val);

  bool operator == (const TLikeService_list_likes_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    return true;
  }
  bool operator != (const TLikeService_list_likes_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_list_likes_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_list_likes_presult__isset {
  _TLikeService_list_likes_presult__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TLikeService_list_likes_presult__isset;

class TLikeService_list_likes_presult {
 public:


  virtual ~TLikeService_list_likes_presult() noexcept;
  std::vector<TLike> * success;
  TAccountNotFoundException e1;
  TPostNotFoundException e2;

  _TLikeService_list_likes_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_count_likes_by_account_args__isset {
  _TLikeService_count_likes_by_account_args__isset() : requester_id(false), account_id(false) {}
  bool requester_id :1;
  bool account_id :1;
} _TLikeService_count_likes_by_account_args__isset;

class TLikeService_count_likes_by_account_args {
 public:

  TLikeService_count_likes_by_account_args(const TLikeService_count_likes_by_account_args&);
  TLikeService_count_likes_by_account_args& operator=(const TLikeService_count_likes_by_account_args&);
  TLikeService_count_likes_by_account_args() : requester_id(0), account_id(0) {
  }

  virtual ~TLikeService_count_likes_by_account_args() noexcept;
  int32_t requester_id;
  int32_t account_id;

  _TLikeService_count_likes_by_account_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  bool operator == (const TLikeService_count_likes_by_account_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_count_likes_by_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_count_likes_by_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_count_likes_by_account_pargs {
 public:


  virtual ~TLikeService_count_likes_by_account_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_count_likes_by_account_result__isset {
  _TLikeService_count_likes_by_account_result__isset() : success(false) {}
  bool success :1;
} _TLikeService_count_likes_by_account_result__isset;

class TLikeService_count_likes_by_account_result {
 public:

  TLikeService_count_likes_by_account_result(const TLikeService_count_likes_by_account_result&);
  TLikeService_count_likes_by_account_result& operator=(const TLikeService_count_likes_by_account_result&);
  TLikeService_count_likes_by_account_result() : success(0) {
  }

  virtual ~TLikeService_count_likes_by_account_result() noexcept;
  int32_t success;

  _TLikeService_count_likes_by_account_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const TLikeService_count_likes_by_account_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TLikeService_count_likes_by_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_count_likes_by_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_count_likes_by_account_presult__isset {
  _TLikeService_count_likes_by_account_presult__isset() : success(false) {}
  bool success :1;
} _TLikeService_count_likes_by_account_presult__isset;

class TLikeService_count_likes_by_account_presult {
 public:


  virtual ~TLikeService_count_likes_by_account_presult() noexcept;
  int32_t* success;

  _TLikeService_count_likes_by_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TLikeService_count_likes_of_post_args__isset {
  _TLikeService_count_likes_of_post_args__isset() : requester_id(false), post_id(false) {}
  bool requester_id :1;
  bool post_id :1;
} _TLikeService_count_likes_of_post_args__isset;

class TLikeService_count_likes_of_post_args {
 public:

  TLikeService_count_likes_of_post_args(const TLikeService_count_likes_of_post_args&);
  TLikeService_count_likes_of_post_args& operator=(const TLikeService_count_likes_of_post_args&);
  TLikeService_count_likes_of_post_args() : requester_id(0), post_id(0) {
  }

  virtual ~TLikeService_count_likes_of_post_args() noexcept;
  int32_t requester_id;
  int32_t post_id;

  _TLikeService_count_likes_of_post_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_post_id(const int32_t val);

  bool operator == (const TLikeService_count_likes_of_post_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(post_id == rhs.post_id))
      return false;
    return true;
  }
  bool operator != (const TLikeService_count_likes_of_post_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_count_likes_of_post_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TLikeService_count_likes_of_post_pargs {
 public:


  virtual ~TLikeService_count_likes_of_post_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* post_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_count_likes_of_post_result__isset {
  _TLikeService_count_likes_of_post_result__isset() : success(false) {}
  bool success :1;
} _TLikeService_count_likes_of_post_result__isset;

class TLikeService_count_likes_of_post_result {
 public:

  TLikeService_count_likes_of_post_result(const TLikeService_count_likes_of_post_result&);
  TLikeService_count_likes_of_post_result& operator=(const TLikeService_count_likes_of_post_result&);
  TLikeService_count_likes_of_post_result() : success(0) {
  }

  virtual ~TLikeService_count_likes_of_post_result() noexcept;
  int32_t success;

  _TLikeService_count_likes_of_post_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const TLikeService_count_likes_of_post_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TLikeService_count_likes_of_post_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TLikeService_count_likes_of_post_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TLikeService_count_likes_of_post_presult__isset {
  _TLikeService_count_likes_of_post_presult__isset() : success(false) {}
  bool success :1;
} _TLikeService_count_likes_of_post_presult__isset;

class TLikeService_count_likes_of_post_presult {
 public:


  virtual ~TLikeService_count_likes_of_post_presult() noexcept;
  int32_t* success;

  _TLikeService_count_likes_of_post_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TLikeServiceClient : virtual public TLikeServiceIf {
 public:
  TLikeServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TLikeServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void like_post(TLike& _return, const int32_t requester_id, const int32_t post_id);
  void send_like_post(const int32_t requester_id, const int32_t post_id);
  void recv_like_post(TLike& _return);
  void retrieve_standard_like(TLike& _return, const int32_t requester_id, const int32_t like_id);
  void send_retrieve_standard_like(const int32_t requester_id, const int32_t like_id);
  void recv_retrieve_standard_like(TLike& _return);
  void retrieve_expanded_like(TLike& _return, const int32_t requester_id, const int32_t like_id);
  void send_retrieve_expanded_like(const int32_t requester_id, const int32_t like_id);
  void recv_retrieve_expanded_like(TLike& _return);
  void delete_like(const int32_t requester_id, const int32_t like_id);
  void send_delete_like(const int32_t requester_id, const int32_t like_id);
  void recv_delete_like();
  void list_likes(std::vector<TLike> & _return, const int32_t requester_id, const int32_t account_id, const int32_t post_id);
  void send_list_likes(const int32_t requester_id, const int32_t account_id, const int32_t post_id);
  void recv_list_likes(std::vector<TLike> & _return);
  int32_t count_likes_by_account(const int32_t requester_id, const int32_t account_id);
  void send_count_likes_by_account(const int32_t requester_id, const int32_t account_id);
  int32_t recv_count_likes_by_account();
  int32_t count_likes_of_post(const int32_t requester_id, const int32_t post_id);
  void send_count_likes_of_post(const int32_t requester_id, const int32_t post_id);
  int32_t recv_count_likes_of_post();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TLikeServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<TLikeServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TLikeServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_like_post(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_retrieve_standard_like(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_retrieve_expanded_like(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_delete_like(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_list_likes(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_count_likes_by_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_count_likes_of_post(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TLikeServiceProcessor(::std::shared_ptr<TLikeServiceIf> iface) :
    iface_(iface) {
    processMap_["like_post"] = &TLikeServiceProcessor::process_like_post;
    processMap_["retrieve_standard_like"] = &TLikeServiceProcessor::process_retrieve_standard_like;
    processMap_["retrieve_expanded_like"] = &TLikeServiceProcessor::process_retrieve_expanded_like;
    processMap_["delete_like"] = &TLikeServiceProcessor::process_delete_like;
    processMap_["list_likes"] = &TLikeServiceProcessor::process_list_likes;
    processMap_["count_likes_by_account"] = &TLikeServiceProcessor::process_count_likes_by_account;
    processMap_["count_likes_of_post"] = &TLikeServiceProcessor::process_count_likes_of_post;
  }

  virtual ~TLikeServiceProcessor() {}
};

class TLikeServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TLikeServiceProcessorFactory(const ::std::shared_ptr< TLikeServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< TLikeServiceIfFactory > handlerFactory_;
};

class TLikeServiceMultiface : virtual public TLikeServiceIf {
 public:
  TLikeServiceMultiface(std::vector<std::shared_ptr<TLikeServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TLikeServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<TLikeServiceIf> > ifaces_;
  TLikeServiceMultiface() {}
  void add(::std::shared_ptr<TLikeServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void like_post(TLike& _return, const int32_t requester_id, const int32_t post_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->like_post(_return, requester_id, post_id);
    }
    ifaces_[i]->like_post(_return, requester_id, post_id);
    return;
  }

  void retrieve_standard_like(TLike& _return, const int32_t requester_id, const int32_t like_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->retrieve_standard_like(_return, requester_id, like_id);
    }
    ifaces_[i]->retrieve_standard_like(_return, requester_id, like_id);
    return;
  }

  void retrieve_expanded_like(TLike& _return, const int32_t requester_id, const int32_t like_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->retrieve_expanded_like(_return, requester_id, like_id);
    }
    ifaces_[i]->retrieve_expanded_like(_return, requester_id, like_id);
    return;
  }

  void delete_like(const int32_t requester_id, const int32_t like_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->delete_like(requester_id, like_id);
    }
    ifaces_[i]->delete_like(requester_id, like_id);
  }

  void list_likes(std::vector<TLike> & _return, const int32_t requester_id, const int32_t account_id, const int32_t post_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->list_likes(_return, requester_id, account_id, post_id);
    }
    ifaces_[i]->list_likes(_return, requester_id, account_id, post_id);
    return;
  }

  int32_t count_likes_by_account(const int32_t requester_id, const int32_t account_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->count_likes_by_account(requester_id, account_id);
    }
    return ifaces_[i]->count_likes_by_account(requester_id, account_id);
  }

  int32_t count_likes_of_post(const int32_t requester_id, const int32_t post_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->count_likes_of_post(requester_id, post_id);
    }
    return ifaces_[i]->count_likes_of_post(requester_id, post_id);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TLikeServiceConcurrentClient : virtual public TLikeServiceIf {
 public:
  TLikeServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  TLikeServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void like_post(TLike& _return, const int32_t requester_id, const int32_t post_id);
  int32_t send_like_post(const int32_t requester_id, const int32_t post_id);
  void recv_like_post(TLike& _return, const int32_t seqid);
  void retrieve_standard_like(TLike& _return, const int32_t requester_id, const int32_t like_id);
  int32_t send_retrieve_standard_like(const int32_t requester_id, const int32_t like_id);
  void recv_retrieve_standard_like(TLike& _return, const int32_t seqid);
  void retrieve_expanded_like(TLike& _return, const int32_t requester_id, const int32_t like_id);
  int32_t send_retrieve_expanded_like(const int32_t requester_id, const int32_t like_id);
  void recv_retrieve_expanded_like(TLike& _return, const int32_t seqid);
  void delete_like(const int32_t requester_id, const int32_t like_id);
  int32_t send_delete_like(const int32_t requester_id, const int32_t like_id);
  void recv_delete_like(const int32_t seqid);
  void list_likes(std::vector<TLike> & _return, const int32_t requester_id, const int32_t account_id, const int32_t post_id);
  int32_t send_list_likes(const int32_t requester_id, const int32_t account_id, const int32_t post_id);
  void recv_list_likes(std::vector<TLike> & _return, const int32_t seqid);
  int32_t count_likes_by_account(const int32_t requester_id, const int32_t account_id);
  int32_t send_count_likes_by_account(const int32_t requester_id, const int32_t account_id);
  int32_t recv_count_likes_by_account(const int32_t seqid);
  int32_t count_likes_of_post(const int32_t requester_id, const int32_t post_id);
  int32_t send_count_likes_of_post(const int32_t requester_id, const int32_t post_id);
  int32_t recv_count_likes_of_post(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
