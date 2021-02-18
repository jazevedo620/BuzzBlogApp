/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TAccountService_H
#define TAccountService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "buzzblog_types.h"

namespace gen {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TAccountServiceIf {
 public:
  virtual ~TAccountServiceIf() {}
  virtual void authenticate_user(TAccount& _return, const std::string& username, const std::string& password) = 0;
  virtual void create_account(TAccount& _return, const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name) = 0;
  virtual void retrieve_standard_account(TAccount& _return, const int32_t requester_id, const int32_t account_id) = 0;
  virtual void retrieve_expanded_account(TAccount& _return, const int32_t requester_id, const int32_t account_id) = 0;
  virtual void update_account(TAccount& _return, const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name) = 0;
  virtual void delete_account(const int32_t requester_id, const int32_t account_id) = 0;
};

class TAccountServiceIfFactory {
 public:
  typedef TAccountServiceIf Handler;

  virtual ~TAccountServiceIfFactory() {}

  virtual TAccountServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TAccountServiceIf* /* handler */) = 0;
};

class TAccountServiceIfSingletonFactory : virtual public TAccountServiceIfFactory {
 public:
  TAccountServiceIfSingletonFactory(const ::std::shared_ptr<TAccountServiceIf>& iface) : iface_(iface) {}
  virtual ~TAccountServiceIfSingletonFactory() {}

  virtual TAccountServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TAccountServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<TAccountServiceIf> iface_;
};

class TAccountServiceNull : virtual public TAccountServiceIf {
 public:
  virtual ~TAccountServiceNull() {}
  void authenticate_user(TAccount& /* _return */, const std::string& /* username */, const std::string& /* password */) {
    return;
  }
  void create_account(TAccount& /* _return */, const std::string& /* username */, const std::string& /* password */, const std::string& /* first_name */, const std::string& /* last_name */) {
    return;
  }
  void retrieve_standard_account(TAccount& /* _return */, const int32_t /* requester_id */, const int32_t /* account_id */) {
    return;
  }
  void retrieve_expanded_account(TAccount& /* _return */, const int32_t /* requester_id */, const int32_t /* account_id */) {
    return;
  }
  void update_account(TAccount& /* _return */, const int32_t /* requester_id */, const int32_t /* account_id */, const std::string& /* password */, const std::string& /* first_name */, const std::string& /* last_name */) {
    return;
  }
  void delete_account(const int32_t /* requester_id */, const int32_t /* account_id */) {
    return;
  }
};

typedef struct _TAccountService_authenticate_user_args__isset {
  _TAccountService_authenticate_user_args__isset() : username(false), password(false) {}
  bool username :1;
  bool password :1;
} _TAccountService_authenticate_user_args__isset;

class TAccountService_authenticate_user_args {
 public:

  TAccountService_authenticate_user_args(const TAccountService_authenticate_user_args&);
  TAccountService_authenticate_user_args& operator=(const TAccountService_authenticate_user_args&);
  TAccountService_authenticate_user_args() : username(), password() {
  }

  virtual ~TAccountService_authenticate_user_args() noexcept;
  std::string username;
  std::string password;

  _TAccountService_authenticate_user_args__isset __isset;

  void __set_username(const std::string& val);

  void __set_password(const std::string& val);

  bool operator == (const TAccountService_authenticate_user_args & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    return true;
  }
  bool operator != (const TAccountService_authenticate_user_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_authenticate_user_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_authenticate_user_pargs {
 public:


  virtual ~TAccountService_authenticate_user_pargs() noexcept;
  const std::string* username;
  const std::string* password;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_authenticate_user_result__isset {
  _TAccountService_authenticate_user_result__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TAccountService_authenticate_user_result__isset;

class TAccountService_authenticate_user_result {
 public:

  TAccountService_authenticate_user_result(const TAccountService_authenticate_user_result&);
  TAccountService_authenticate_user_result& operator=(const TAccountService_authenticate_user_result&);
  TAccountService_authenticate_user_result() {
  }

  virtual ~TAccountService_authenticate_user_result() noexcept;
  TAccount success;
  TAccountInvalidCredentialsException e1;
  TAccountDeactivatedException e2;

  _TAccountService_authenticate_user_result__isset __isset;

  void __set_success(const TAccount& val);

  void __set_e1(const TAccountInvalidCredentialsException& val);

  void __set_e2(const TAccountDeactivatedException& val);

  bool operator == (const TAccountService_authenticate_user_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    return true;
  }
  bool operator != (const TAccountService_authenticate_user_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_authenticate_user_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_authenticate_user_presult__isset {
  _TAccountService_authenticate_user_presult__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TAccountService_authenticate_user_presult__isset;

class TAccountService_authenticate_user_presult {
 public:


  virtual ~TAccountService_authenticate_user_presult() noexcept;
  TAccount* success;
  TAccountInvalidCredentialsException e1;
  TAccountDeactivatedException e2;

  _TAccountService_authenticate_user_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TAccountService_create_account_args__isset {
  _TAccountService_create_account_args__isset() : username(false), password(false), first_name(false), last_name(false) {}
  bool username :1;
  bool password :1;
  bool first_name :1;
  bool last_name :1;
} _TAccountService_create_account_args__isset;

class TAccountService_create_account_args {
 public:

  TAccountService_create_account_args(const TAccountService_create_account_args&);
  TAccountService_create_account_args& operator=(const TAccountService_create_account_args&);
  TAccountService_create_account_args() : username(), password(), first_name(), last_name() {
  }

  virtual ~TAccountService_create_account_args() noexcept;
  std::string username;
  std::string password;
  std::string first_name;
  std::string last_name;

  _TAccountService_create_account_args__isset __isset;

  void __set_username(const std::string& val);

  void __set_password(const std::string& val);

  void __set_first_name(const std::string& val);

  void __set_last_name(const std::string& val);

  bool operator == (const TAccountService_create_account_args & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(first_name == rhs.first_name))
      return false;
    if (!(last_name == rhs.last_name))
      return false;
    return true;
  }
  bool operator != (const TAccountService_create_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_create_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_create_account_pargs {
 public:


  virtual ~TAccountService_create_account_pargs() noexcept;
  const std::string* username;
  const std::string* password;
  const std::string* first_name;
  const std::string* last_name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_create_account_result__isset {
  _TAccountService_create_account_result__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TAccountService_create_account_result__isset;

class TAccountService_create_account_result {
 public:

  TAccountService_create_account_result(const TAccountService_create_account_result&);
  TAccountService_create_account_result& operator=(const TAccountService_create_account_result&);
  TAccountService_create_account_result() {
  }

  virtual ~TAccountService_create_account_result() noexcept;
  TAccount success;
  TAccountInvalidAttributesException e1;
  TAccountUsernameAlreadyExistsException e2;

  _TAccountService_create_account_result__isset __isset;

  void __set_success(const TAccount& val);

  void __set_e1(const TAccountInvalidAttributesException& val);

  void __set_e2(const TAccountUsernameAlreadyExistsException& val);

  bool operator == (const TAccountService_create_account_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    return true;
  }
  bool operator != (const TAccountService_create_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_create_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_create_account_presult__isset {
  _TAccountService_create_account_presult__isset() : success(false), e1(false), e2(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
} _TAccountService_create_account_presult__isset;

class TAccountService_create_account_presult {
 public:


  virtual ~TAccountService_create_account_presult() noexcept;
  TAccount* success;
  TAccountInvalidAttributesException e1;
  TAccountUsernameAlreadyExistsException e2;

  _TAccountService_create_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TAccountService_retrieve_standard_account_args__isset {
  _TAccountService_retrieve_standard_account_args__isset() : requester_id(false), account_id(false) {}
  bool requester_id :1;
  bool account_id :1;
} _TAccountService_retrieve_standard_account_args__isset;

class TAccountService_retrieve_standard_account_args {
 public:

  TAccountService_retrieve_standard_account_args(const TAccountService_retrieve_standard_account_args&);
  TAccountService_retrieve_standard_account_args& operator=(const TAccountService_retrieve_standard_account_args&);
  TAccountService_retrieve_standard_account_args() : requester_id(0), account_id(0) {
  }

  virtual ~TAccountService_retrieve_standard_account_args() noexcept;
  int32_t requester_id;
  int32_t account_id;

  _TAccountService_retrieve_standard_account_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  bool operator == (const TAccountService_retrieve_standard_account_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    return true;
  }
  bool operator != (const TAccountService_retrieve_standard_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_retrieve_standard_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_retrieve_standard_account_pargs {
 public:


  virtual ~TAccountService_retrieve_standard_account_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_retrieve_standard_account_result__isset {
  _TAccountService_retrieve_standard_account_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TAccountService_retrieve_standard_account_result__isset;

class TAccountService_retrieve_standard_account_result {
 public:

  TAccountService_retrieve_standard_account_result(const TAccountService_retrieve_standard_account_result&);
  TAccountService_retrieve_standard_account_result& operator=(const TAccountService_retrieve_standard_account_result&);
  TAccountService_retrieve_standard_account_result() {
  }

  virtual ~TAccountService_retrieve_standard_account_result() noexcept;
  TAccount success;
  TAccountNotFoundException e;

  _TAccountService_retrieve_standard_account_result__isset __isset;

  void __set_success(const TAccount& val);

  void __set_e(const TAccountNotFoundException& val);

  bool operator == (const TAccountService_retrieve_standard_account_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TAccountService_retrieve_standard_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_retrieve_standard_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_retrieve_standard_account_presult__isset {
  _TAccountService_retrieve_standard_account_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TAccountService_retrieve_standard_account_presult__isset;

class TAccountService_retrieve_standard_account_presult {
 public:


  virtual ~TAccountService_retrieve_standard_account_presult() noexcept;
  TAccount* success;
  TAccountNotFoundException e;

  _TAccountService_retrieve_standard_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TAccountService_retrieve_expanded_account_args__isset {
  _TAccountService_retrieve_expanded_account_args__isset() : requester_id(false), account_id(false) {}
  bool requester_id :1;
  bool account_id :1;
} _TAccountService_retrieve_expanded_account_args__isset;

class TAccountService_retrieve_expanded_account_args {
 public:

  TAccountService_retrieve_expanded_account_args(const TAccountService_retrieve_expanded_account_args&);
  TAccountService_retrieve_expanded_account_args& operator=(const TAccountService_retrieve_expanded_account_args&);
  TAccountService_retrieve_expanded_account_args() : requester_id(0), account_id(0) {
  }

  virtual ~TAccountService_retrieve_expanded_account_args() noexcept;
  int32_t requester_id;
  int32_t account_id;

  _TAccountService_retrieve_expanded_account_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  bool operator == (const TAccountService_retrieve_expanded_account_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    return true;
  }
  bool operator != (const TAccountService_retrieve_expanded_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_retrieve_expanded_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_retrieve_expanded_account_pargs {
 public:


  virtual ~TAccountService_retrieve_expanded_account_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_retrieve_expanded_account_result__isset {
  _TAccountService_retrieve_expanded_account_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TAccountService_retrieve_expanded_account_result__isset;

class TAccountService_retrieve_expanded_account_result {
 public:

  TAccountService_retrieve_expanded_account_result(const TAccountService_retrieve_expanded_account_result&);
  TAccountService_retrieve_expanded_account_result& operator=(const TAccountService_retrieve_expanded_account_result&);
  TAccountService_retrieve_expanded_account_result() {
  }

  virtual ~TAccountService_retrieve_expanded_account_result() noexcept;
  TAccount success;
  TAccountNotFoundException e;

  _TAccountService_retrieve_expanded_account_result__isset __isset;

  void __set_success(const TAccount& val);

  void __set_e(const TAccountNotFoundException& val);

  bool operator == (const TAccountService_retrieve_expanded_account_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TAccountService_retrieve_expanded_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_retrieve_expanded_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_retrieve_expanded_account_presult__isset {
  _TAccountService_retrieve_expanded_account_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TAccountService_retrieve_expanded_account_presult__isset;

class TAccountService_retrieve_expanded_account_presult {
 public:


  virtual ~TAccountService_retrieve_expanded_account_presult() noexcept;
  TAccount* success;
  TAccountNotFoundException e;

  _TAccountService_retrieve_expanded_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TAccountService_update_account_args__isset {
  _TAccountService_update_account_args__isset() : requester_id(false), account_id(false), password(false), first_name(false), last_name(false) {}
  bool requester_id :1;
  bool account_id :1;
  bool password :1;
  bool first_name :1;
  bool last_name :1;
} _TAccountService_update_account_args__isset;

class TAccountService_update_account_args {
 public:

  TAccountService_update_account_args(const TAccountService_update_account_args&);
  TAccountService_update_account_args& operator=(const TAccountService_update_account_args&);
  TAccountService_update_account_args() : requester_id(0), account_id(0), password(), first_name(), last_name() {
  }

  virtual ~TAccountService_update_account_args() noexcept;
  int32_t requester_id;
  int32_t account_id;
  std::string password;
  std::string first_name;
  std::string last_name;

  _TAccountService_update_account_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  void __set_password(const std::string& val);

  void __set_first_name(const std::string& val);

  void __set_last_name(const std::string& val);

  bool operator == (const TAccountService_update_account_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(first_name == rhs.first_name))
      return false;
    if (!(last_name == rhs.last_name))
      return false;
    return true;
  }
  bool operator != (const TAccountService_update_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_update_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_update_account_pargs {
 public:


  virtual ~TAccountService_update_account_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;
  const std::string* password;
  const std::string* first_name;
  const std::string* last_name;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_update_account_result__isset {
  _TAccountService_update_account_result__isset() : success(false), e1(false), e2(false), e3(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
  bool e3 :1;
} _TAccountService_update_account_result__isset;

class TAccountService_update_account_result {
 public:

  TAccountService_update_account_result(const TAccountService_update_account_result&);
  TAccountService_update_account_result& operator=(const TAccountService_update_account_result&);
  TAccountService_update_account_result() {
  }

  virtual ~TAccountService_update_account_result() noexcept;
  TAccount success;
  TAccountNotAuthorizedException e1;
  TAccountInvalidAttributesException e2;
  TAccountNotFoundException e3;

  _TAccountService_update_account_result__isset __isset;

  void __set_success(const TAccount& val);

  void __set_e1(const TAccountNotAuthorizedException& val);

  void __set_e2(const TAccountInvalidAttributesException& val);

  void __set_e3(const TAccountNotFoundException& val);

  bool operator == (const TAccountService_update_account_result & rhs) const
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
  bool operator != (const TAccountService_update_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_update_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_update_account_presult__isset {
  _TAccountService_update_account_presult__isset() : success(false), e1(false), e2(false), e3(false) {}
  bool success :1;
  bool e1 :1;
  bool e2 :1;
  bool e3 :1;
} _TAccountService_update_account_presult__isset;

class TAccountService_update_account_presult {
 public:


  virtual ~TAccountService_update_account_presult() noexcept;
  TAccount* success;
  TAccountNotAuthorizedException e1;
  TAccountInvalidAttributesException e2;
  TAccountNotFoundException e3;

  _TAccountService_update_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TAccountService_delete_account_args__isset {
  _TAccountService_delete_account_args__isset() : requester_id(false), account_id(false) {}
  bool requester_id :1;
  bool account_id :1;
} _TAccountService_delete_account_args__isset;

class TAccountService_delete_account_args {
 public:

  TAccountService_delete_account_args(const TAccountService_delete_account_args&);
  TAccountService_delete_account_args& operator=(const TAccountService_delete_account_args&);
  TAccountService_delete_account_args() : requester_id(0), account_id(0) {
  }

  virtual ~TAccountService_delete_account_args() noexcept;
  int32_t requester_id;
  int32_t account_id;

  _TAccountService_delete_account_args__isset __isset;

  void __set_requester_id(const int32_t val);

  void __set_account_id(const int32_t val);

  bool operator == (const TAccountService_delete_account_args & rhs) const
  {
    if (!(requester_id == rhs.requester_id))
      return false;
    if (!(account_id == rhs.account_id))
      return false;
    return true;
  }
  bool operator != (const TAccountService_delete_account_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_delete_account_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TAccountService_delete_account_pargs {
 public:


  virtual ~TAccountService_delete_account_pargs() noexcept;
  const int32_t* requester_id;
  const int32_t* account_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_delete_account_result__isset {
  _TAccountService_delete_account_result__isset() : e1(false), e2(false) {}
  bool e1 :1;
  bool e2 :1;
} _TAccountService_delete_account_result__isset;

class TAccountService_delete_account_result {
 public:

  TAccountService_delete_account_result(const TAccountService_delete_account_result&);
  TAccountService_delete_account_result& operator=(const TAccountService_delete_account_result&);
  TAccountService_delete_account_result() {
  }

  virtual ~TAccountService_delete_account_result() noexcept;
  TAccountNotAuthorizedException e1;
  TAccountNotFoundException e2;

  _TAccountService_delete_account_result__isset __isset;

  void __set_e1(const TAccountNotAuthorizedException& val);

  void __set_e2(const TAccountNotFoundException& val);

  bool operator == (const TAccountService_delete_account_result & rhs) const
  {
    if (!(e1 == rhs.e1))
      return false;
    if (!(e2 == rhs.e2))
      return false;
    return true;
  }
  bool operator != (const TAccountService_delete_account_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TAccountService_delete_account_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TAccountService_delete_account_presult__isset {
  _TAccountService_delete_account_presult__isset() : e1(false), e2(false) {}
  bool e1 :1;
  bool e2 :1;
} _TAccountService_delete_account_presult__isset;

class TAccountService_delete_account_presult {
 public:


  virtual ~TAccountService_delete_account_presult() noexcept;
  TAccountNotAuthorizedException e1;
  TAccountNotFoundException e2;

  _TAccountService_delete_account_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TAccountServiceClient : virtual public TAccountServiceIf {
 public:
  TAccountServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TAccountServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void authenticate_user(TAccount& _return, const std::string& username, const std::string& password);
  void send_authenticate_user(const std::string& username, const std::string& password);
  void recv_authenticate_user(TAccount& _return);
  void create_account(TAccount& _return, const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name);
  void send_create_account(const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name);
  void recv_create_account(TAccount& _return);
  void retrieve_standard_account(TAccount& _return, const int32_t requester_id, const int32_t account_id);
  void send_retrieve_standard_account(const int32_t requester_id, const int32_t account_id);
  void recv_retrieve_standard_account(TAccount& _return);
  void retrieve_expanded_account(TAccount& _return, const int32_t requester_id, const int32_t account_id);
  void send_retrieve_expanded_account(const int32_t requester_id, const int32_t account_id);
  void recv_retrieve_expanded_account(TAccount& _return);
  void update_account(TAccount& _return, const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name);
  void send_update_account(const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name);
  void recv_update_account(TAccount& _return);
  void delete_account(const int32_t requester_id, const int32_t account_id);
  void send_delete_account(const int32_t requester_id, const int32_t account_id);
  void recv_delete_account();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TAccountServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<TAccountServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TAccountServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_authenticate_user(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_create_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_retrieve_standard_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_retrieve_expanded_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_update_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_delete_account(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TAccountServiceProcessor(::std::shared_ptr<TAccountServiceIf> iface) :
    iface_(iface) {
    processMap_["authenticate_user"] = &TAccountServiceProcessor::process_authenticate_user;
    processMap_["create_account"] = &TAccountServiceProcessor::process_create_account;
    processMap_["retrieve_standard_account"] = &TAccountServiceProcessor::process_retrieve_standard_account;
    processMap_["retrieve_expanded_account"] = &TAccountServiceProcessor::process_retrieve_expanded_account;
    processMap_["update_account"] = &TAccountServiceProcessor::process_update_account;
    processMap_["delete_account"] = &TAccountServiceProcessor::process_delete_account;
  }

  virtual ~TAccountServiceProcessor() {}
};

class TAccountServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TAccountServiceProcessorFactory(const ::std::shared_ptr< TAccountServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< TAccountServiceIfFactory > handlerFactory_;
};

class TAccountServiceMultiface : virtual public TAccountServiceIf {
 public:
  TAccountServiceMultiface(std::vector<std::shared_ptr<TAccountServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TAccountServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<TAccountServiceIf> > ifaces_;
  TAccountServiceMultiface() {}
  void add(::std::shared_ptr<TAccountServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void authenticate_user(TAccount& _return, const std::string& username, const std::string& password) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->authenticate_user(_return, username, password);
    }
    ifaces_[i]->authenticate_user(_return, username, password);
    return;
  }

  void create_account(TAccount& _return, const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->create_account(_return, username, password, first_name, last_name);
    }
    ifaces_[i]->create_account(_return, username, password, first_name, last_name);
    return;
  }

  void retrieve_standard_account(TAccount& _return, const int32_t requester_id, const int32_t account_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->retrieve_standard_account(_return, requester_id, account_id);
    }
    ifaces_[i]->retrieve_standard_account(_return, requester_id, account_id);
    return;
  }

  void retrieve_expanded_account(TAccount& _return, const int32_t requester_id, const int32_t account_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->retrieve_expanded_account(_return, requester_id, account_id);
    }
    ifaces_[i]->retrieve_expanded_account(_return, requester_id, account_id);
    return;
  }

  void update_account(TAccount& _return, const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->update_account(_return, requester_id, account_id, password, first_name, last_name);
    }
    ifaces_[i]->update_account(_return, requester_id, account_id, password, first_name, last_name);
    return;
  }

  void delete_account(const int32_t requester_id, const int32_t account_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->delete_account(requester_id, account_id);
    }
    ifaces_[i]->delete_account(requester_id, account_id);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TAccountServiceConcurrentClient : virtual public TAccountServiceIf {
 public:
  TAccountServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  TAccountServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
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
  void authenticate_user(TAccount& _return, const std::string& username, const std::string& password);
  int32_t send_authenticate_user(const std::string& username, const std::string& password);
  void recv_authenticate_user(TAccount& _return, const int32_t seqid);
  void create_account(TAccount& _return, const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name);
  int32_t send_create_account(const std::string& username, const std::string& password, const std::string& first_name, const std::string& last_name);
  void recv_create_account(TAccount& _return, const int32_t seqid);
  void retrieve_standard_account(TAccount& _return, const int32_t requester_id, const int32_t account_id);
  int32_t send_retrieve_standard_account(const int32_t requester_id, const int32_t account_id);
  void recv_retrieve_standard_account(TAccount& _return, const int32_t seqid);
  void retrieve_expanded_account(TAccount& _return, const int32_t requester_id, const int32_t account_id);
  int32_t send_retrieve_expanded_account(const int32_t requester_id, const int32_t account_id);
  void recv_retrieve_expanded_account(TAccount& _return, const int32_t seqid);
  void update_account(TAccount& _return, const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name);
  int32_t send_update_account(const int32_t requester_id, const int32_t account_id, const std::string& password, const std::string& first_name, const std::string& last_name);
  void recv_update_account(TAccount& _return, const int32_t seqid);
  void delete_account(const int32_t requester_id, const int32_t account_id);
  int32_t send_delete_account(const int32_t requester_id, const int32_t account_id);
  void recv_delete_account(const int32_t seqid);
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
