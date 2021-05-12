/**
 * Autogenerated by Thrift Compiler (0.13.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TUniquepairService_H
#define TUniquepairService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "buzzblog_types.h"

namespace gen {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TUniquepairServiceIf {
 public:
  virtual ~TUniquepairServiceIf() {}
  virtual void get(TUniquepair& _return, const TRequestMetadata& request_metadata, const int32_t uniquepair_id) = 0;
  virtual void add(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem) = 0;
  virtual void remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id) = 0;
  virtual void find(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem) = 0;
  virtual void fetch(std::vector<TUniquepair> & _return, const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset) = 0;
  virtual int32_t count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query) = 0;
};

class TUniquepairServiceIfFactory {
 public:
  typedef TUniquepairServiceIf Handler;

  virtual ~TUniquepairServiceIfFactory() {}

  virtual TUniquepairServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TUniquepairServiceIf* /* handler */) = 0;
};

class TUniquepairServiceIfSingletonFactory : virtual public TUniquepairServiceIfFactory {
 public:
  TUniquepairServiceIfSingletonFactory(const ::std::shared_ptr<TUniquepairServiceIf>& iface) : iface_(iface) {}
  virtual ~TUniquepairServiceIfSingletonFactory() {}

  virtual TUniquepairServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TUniquepairServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<TUniquepairServiceIf> iface_;
};

class TUniquepairServiceNull : virtual public TUniquepairServiceIf {
 public:
  virtual ~TUniquepairServiceNull() {}
  void get(TUniquepair& /* _return */, const TRequestMetadata& /* request_metadata */, const int32_t /* uniquepair_id */) {
    return;
  }
  void add(TUniquepair& /* _return */, const TRequestMetadata& /* request_metadata */, const std::string& /* domain */, const int32_t /* first_elem */, const int32_t /* second_elem */) {
    return;
  }
  void remove(const TRequestMetadata& /* request_metadata */, const int32_t /* uniquepair_id */) {
    return;
  }
  void find(TUniquepair& /* _return */, const TRequestMetadata& /* request_metadata */, const std::string& /* domain */, const int32_t /* first_elem */, const int32_t /* second_elem */) {
    return;
  }
  void fetch(std::vector<TUniquepair> & /* _return */, const TRequestMetadata& /* request_metadata */, const TUniquepairQuery& /* query */, const int32_t /* limit */, const int32_t /* offset */) {
    return;
  }
  int32_t count(const TRequestMetadata& /* request_metadata */, const TUniquepairQuery& /* query */) {
    int32_t _return = 0;
    return _return;
  }
};

typedef struct _TUniquepairService_get_args__isset {
  _TUniquepairService_get_args__isset() : request_metadata(false), uniquepair_id(false) {}
  bool request_metadata :1;
  bool uniquepair_id :1;
} _TUniquepairService_get_args__isset;

class TUniquepairService_get_args {
 public:

  TUniquepairService_get_args(const TUniquepairService_get_args&);
  TUniquepairService_get_args& operator=(const TUniquepairService_get_args&);
  TUniquepairService_get_args() : uniquepair_id(0) {
  }

  virtual ~TUniquepairService_get_args() noexcept;
  TRequestMetadata request_metadata;
  int32_t uniquepair_id;

  _TUniquepairService_get_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_uniquepair_id(const int32_t val);

  bool operator == (const TUniquepairService_get_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(uniquepair_id == rhs.uniquepair_id))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_get_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_get_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_get_pargs {
 public:


  virtual ~TUniquepairService_get_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const int32_t* uniquepair_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_get_result__isset {
  _TUniquepairService_get_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_get_result__isset;

class TUniquepairService_get_result {
 public:

  TUniquepairService_get_result(const TUniquepairService_get_result&);
  TUniquepairService_get_result& operator=(const TUniquepairService_get_result&);
  TUniquepairService_get_result() {
  }

  virtual ~TUniquepairService_get_result() noexcept;
  TUniquepair success;
  TUniquepairNotFoundException e;

  _TUniquepairService_get_result__isset __isset;

  void __set_success(const TUniquepair& val);

  void __set_e(const TUniquepairNotFoundException& val);

  bool operator == (const TUniquepairService_get_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_get_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_get_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_get_presult__isset {
  _TUniquepairService_get_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_get_presult__isset;

class TUniquepairService_get_presult {
 public:


  virtual ~TUniquepairService_get_presult() noexcept;
  TUniquepair* success;
  TUniquepairNotFoundException e;

  _TUniquepairService_get_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TUniquepairService_add_args__isset {
  _TUniquepairService_add_args__isset() : request_metadata(false), domain(false), first_elem(false), second_elem(false) {}
  bool request_metadata :1;
  bool domain :1;
  bool first_elem :1;
  bool second_elem :1;
} _TUniquepairService_add_args__isset;

class TUniquepairService_add_args {
 public:

  TUniquepairService_add_args(const TUniquepairService_add_args&);
  TUniquepairService_add_args& operator=(const TUniquepairService_add_args&);
  TUniquepairService_add_args() : domain(), first_elem(0), second_elem(0) {
  }

  virtual ~TUniquepairService_add_args() noexcept;
  TRequestMetadata request_metadata;
  std::string domain;
  int32_t first_elem;
  int32_t second_elem;

  _TUniquepairService_add_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_domain(const std::string& val);

  void __set_first_elem(const int32_t val);

  void __set_second_elem(const int32_t val);

  bool operator == (const TUniquepairService_add_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(domain == rhs.domain))
      return false;
    if (!(first_elem == rhs.first_elem))
      return false;
    if (!(second_elem == rhs.second_elem))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_add_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_add_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_add_pargs {
 public:


  virtual ~TUniquepairService_add_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const std::string* domain;
  const int32_t* first_elem;
  const int32_t* second_elem;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_add_result__isset {
  _TUniquepairService_add_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_add_result__isset;

class TUniquepairService_add_result {
 public:

  TUniquepairService_add_result(const TUniquepairService_add_result&);
  TUniquepairService_add_result& operator=(const TUniquepairService_add_result&);
  TUniquepairService_add_result() {
  }

  virtual ~TUniquepairService_add_result() noexcept;
  TUniquepair success;
  TUniquepairAlreadyExistsException e;

  _TUniquepairService_add_result__isset __isset;

  void __set_success(const TUniquepair& val);

  void __set_e(const TUniquepairAlreadyExistsException& val);

  bool operator == (const TUniquepairService_add_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_add_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_add_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_add_presult__isset {
  _TUniquepairService_add_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_add_presult__isset;

class TUniquepairService_add_presult {
 public:


  virtual ~TUniquepairService_add_presult() noexcept;
  TUniquepair* success;
  TUniquepairAlreadyExistsException e;

  _TUniquepairService_add_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TUniquepairService_remove_args__isset {
  _TUniquepairService_remove_args__isset() : request_metadata(false), uniquepair_id(false) {}
  bool request_metadata :1;
  bool uniquepair_id :1;
} _TUniquepairService_remove_args__isset;

class TUniquepairService_remove_args {
 public:

  TUniquepairService_remove_args(const TUniquepairService_remove_args&);
  TUniquepairService_remove_args& operator=(const TUniquepairService_remove_args&);
  TUniquepairService_remove_args() : uniquepair_id(0) {
  }

  virtual ~TUniquepairService_remove_args() noexcept;
  TRequestMetadata request_metadata;
  int32_t uniquepair_id;

  _TUniquepairService_remove_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_uniquepair_id(const int32_t val);

  bool operator == (const TUniquepairService_remove_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(uniquepair_id == rhs.uniquepair_id))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_remove_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_remove_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_remove_pargs {
 public:


  virtual ~TUniquepairService_remove_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const int32_t* uniquepair_id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_remove_result__isset {
  _TUniquepairService_remove_result__isset() : e(false) {}
  bool e :1;
} _TUniquepairService_remove_result__isset;

class TUniquepairService_remove_result {
 public:

  TUniquepairService_remove_result(const TUniquepairService_remove_result&);
  TUniquepairService_remove_result& operator=(const TUniquepairService_remove_result&);
  TUniquepairService_remove_result() {
  }

  virtual ~TUniquepairService_remove_result() noexcept;
  TUniquepairNotFoundException e;

  _TUniquepairService_remove_result__isset __isset;

  void __set_e(const TUniquepairNotFoundException& val);

  bool operator == (const TUniquepairService_remove_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_remove_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_remove_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_remove_presult__isset {
  _TUniquepairService_remove_presult__isset() : e(false) {}
  bool e :1;
} _TUniquepairService_remove_presult__isset;

class TUniquepairService_remove_presult {
 public:


  virtual ~TUniquepairService_remove_presult() noexcept;
  TUniquepairNotFoundException e;

  _TUniquepairService_remove_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TUniquepairService_find_args__isset {
  _TUniquepairService_find_args__isset() : request_metadata(false), domain(false), first_elem(false), second_elem(false) {}
  bool request_metadata :1;
  bool domain :1;
  bool first_elem :1;
  bool second_elem :1;
} _TUniquepairService_find_args__isset;

class TUniquepairService_find_args {
 public:

  TUniquepairService_find_args(const TUniquepairService_find_args&);
  TUniquepairService_find_args& operator=(const TUniquepairService_find_args&);
  TUniquepairService_find_args() : domain(), first_elem(0), second_elem(0) {
  }

  virtual ~TUniquepairService_find_args() noexcept;
  TRequestMetadata request_metadata;
  std::string domain;
  int32_t first_elem;
  int32_t second_elem;

  _TUniquepairService_find_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_domain(const std::string& val);

  void __set_first_elem(const int32_t val);

  void __set_second_elem(const int32_t val);

  bool operator == (const TUniquepairService_find_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(domain == rhs.domain))
      return false;
    if (!(first_elem == rhs.first_elem))
      return false;
    if (!(second_elem == rhs.second_elem))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_find_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_find_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_find_pargs {
 public:


  virtual ~TUniquepairService_find_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const std::string* domain;
  const int32_t* first_elem;
  const int32_t* second_elem;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_find_result__isset {
  _TUniquepairService_find_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_find_result__isset;

class TUniquepairService_find_result {
 public:

  TUniquepairService_find_result(const TUniquepairService_find_result&);
  TUniquepairService_find_result& operator=(const TUniquepairService_find_result&);
  TUniquepairService_find_result() {
  }

  virtual ~TUniquepairService_find_result() noexcept;
  TUniquepair success;
  TUniquepairNotFoundException e;

  _TUniquepairService_find_result__isset __isset;

  void __set_success(const TUniquepair& val);

  void __set_e(const TUniquepairNotFoundException& val);

  bool operator == (const TUniquepairService_find_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_find_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_find_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_find_presult__isset {
  _TUniquepairService_find_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TUniquepairService_find_presult__isset;

class TUniquepairService_find_presult {
 public:


  virtual ~TUniquepairService_find_presult() noexcept;
  TUniquepair* success;
  TUniquepairNotFoundException e;

  _TUniquepairService_find_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TUniquepairService_fetch_args__isset {
  _TUniquepairService_fetch_args__isset() : request_metadata(false), query(false), limit(false), offset(false) {}
  bool request_metadata :1;
  bool query :1;
  bool limit :1;
  bool offset :1;
} _TUniquepairService_fetch_args__isset;

class TUniquepairService_fetch_args {
 public:

  TUniquepairService_fetch_args(const TUniquepairService_fetch_args&);
  TUniquepairService_fetch_args& operator=(const TUniquepairService_fetch_args&);
  TUniquepairService_fetch_args() : limit(0), offset(0) {
  }

  virtual ~TUniquepairService_fetch_args() noexcept;
  TRequestMetadata request_metadata;
  TUniquepairQuery query;
  int32_t limit;
  int32_t offset;

  _TUniquepairService_fetch_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_query(const TUniquepairQuery& val);

  void __set_limit(const int32_t val);

  void __set_offset(const int32_t val);

  bool operator == (const TUniquepairService_fetch_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(query == rhs.query))
      return false;
    if (!(limit == rhs.limit))
      return false;
    if (!(offset == rhs.offset))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_fetch_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_fetch_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_fetch_pargs {
 public:


  virtual ~TUniquepairService_fetch_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const TUniquepairQuery* query;
  const int32_t* limit;
  const int32_t* offset;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_fetch_result__isset {
  _TUniquepairService_fetch_result__isset() : success(false) {}
  bool success :1;
} _TUniquepairService_fetch_result__isset;

class TUniquepairService_fetch_result {
 public:

  TUniquepairService_fetch_result(const TUniquepairService_fetch_result&);
  TUniquepairService_fetch_result& operator=(const TUniquepairService_fetch_result&);
  TUniquepairService_fetch_result() {
  }

  virtual ~TUniquepairService_fetch_result() noexcept;
  std::vector<TUniquepair>  success;

  _TUniquepairService_fetch_result__isset __isset;

  void __set_success(const std::vector<TUniquepair> & val);

  bool operator == (const TUniquepairService_fetch_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_fetch_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_fetch_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_fetch_presult__isset {
  _TUniquepairService_fetch_presult__isset() : success(false) {}
  bool success :1;
} _TUniquepairService_fetch_presult__isset;

class TUniquepairService_fetch_presult {
 public:


  virtual ~TUniquepairService_fetch_presult() noexcept;
  std::vector<TUniquepair> * success;

  _TUniquepairService_fetch_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TUniquepairService_count_args__isset {
  _TUniquepairService_count_args__isset() : request_metadata(false), query(false) {}
  bool request_metadata :1;
  bool query :1;
} _TUniquepairService_count_args__isset;

class TUniquepairService_count_args {
 public:

  TUniquepairService_count_args(const TUniquepairService_count_args&);
  TUniquepairService_count_args& operator=(const TUniquepairService_count_args&);
  TUniquepairService_count_args() {
  }

  virtual ~TUniquepairService_count_args() noexcept;
  TRequestMetadata request_metadata;
  TUniquepairQuery query;

  _TUniquepairService_count_args__isset __isset;

  void __set_request_metadata(const TRequestMetadata& val);

  void __set_query(const TUniquepairQuery& val);

  bool operator == (const TUniquepairService_count_args & rhs) const
  {
    if (!(request_metadata == rhs.request_metadata))
      return false;
    if (!(query == rhs.query))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_count_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_count_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TUniquepairService_count_pargs {
 public:


  virtual ~TUniquepairService_count_pargs() noexcept;
  const TRequestMetadata* request_metadata;
  const TUniquepairQuery* query;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_count_result__isset {
  _TUniquepairService_count_result__isset() : success(false) {}
  bool success :1;
} _TUniquepairService_count_result__isset;

class TUniquepairService_count_result {
 public:

  TUniquepairService_count_result(const TUniquepairService_count_result&);
  TUniquepairService_count_result& operator=(const TUniquepairService_count_result&);
  TUniquepairService_count_result() : success(0) {
  }

  virtual ~TUniquepairService_count_result() noexcept;
  int32_t success;

  _TUniquepairService_count_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const TUniquepairService_count_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const TUniquepairService_count_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TUniquepairService_count_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TUniquepairService_count_presult__isset {
  _TUniquepairService_count_presult__isset() : success(false) {}
  bool success :1;
} _TUniquepairService_count_presult__isset;

class TUniquepairService_count_presult {
 public:


  virtual ~TUniquepairService_count_presult() noexcept;
  int32_t* success;

  _TUniquepairService_count_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TUniquepairServiceClient : virtual public TUniquepairServiceIf {
 public:
  TUniquepairServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TUniquepairServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
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
  void get(TUniquepair& _return, const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void send_get(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void recv_get(TUniquepair& _return);
  void add(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void send_add(const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void recv_add(TUniquepair& _return);
  void remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void send_remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void recv_remove();
  void find(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void send_find(const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void recv_find(TUniquepair& _return);
  void fetch(std::vector<TUniquepair> & _return, const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset);
  void send_fetch(const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset);
  void recv_fetch(std::vector<TUniquepair> & _return);
  int32_t count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query);
  void send_count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query);
  int32_t recv_count();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TUniquepairServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<TUniquepairServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TUniquepairServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_get(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_add(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_remove(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_find(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_fetch(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_count(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TUniquepairServiceProcessor(::std::shared_ptr<TUniquepairServiceIf> iface) :
    iface_(iface) {
    processMap_["get"] = &TUniquepairServiceProcessor::process_get;
    processMap_["add"] = &TUniquepairServiceProcessor::process_add;
    processMap_["remove"] = &TUniquepairServiceProcessor::process_remove;
    processMap_["find"] = &TUniquepairServiceProcessor::process_find;
    processMap_["fetch"] = &TUniquepairServiceProcessor::process_fetch;
    processMap_["count"] = &TUniquepairServiceProcessor::process_count;
  }

  virtual ~TUniquepairServiceProcessor() {}
};

class TUniquepairServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TUniquepairServiceProcessorFactory(const ::std::shared_ptr< TUniquepairServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< TUniquepairServiceIfFactory > handlerFactory_;
};

class TUniquepairServiceMultiface : virtual public TUniquepairServiceIf {
 public:
  TUniquepairServiceMultiface(std::vector<std::shared_ptr<TUniquepairServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TUniquepairServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<TUniquepairServiceIf> > ifaces_;
  TUniquepairServiceMultiface() {}
  void add(::std::shared_ptr<TUniquepairServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void get(TUniquepair& _return, const TRequestMetadata& request_metadata, const int32_t uniquepair_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->get(_return, request_metadata, uniquepair_id);
    }
    ifaces_[i]->get(_return, request_metadata, uniquepair_id);
    return;
  }

  void add(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->add(_return, request_metadata, domain, first_elem, second_elem);
    }
    ifaces_[i]->add(_return, request_metadata, domain, first_elem, second_elem);
    return;
  }

  void remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->remove(request_metadata, uniquepair_id);
    }
    ifaces_[i]->remove(request_metadata, uniquepair_id);
  }

  void find(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->find(_return, request_metadata, domain, first_elem, second_elem);
    }
    ifaces_[i]->find(_return, request_metadata, domain, first_elem, second_elem);
    return;
  }

  void fetch(std::vector<TUniquepair> & _return, const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->fetch(_return, request_metadata, query, limit, offset);
    }
    ifaces_[i]->fetch(_return, request_metadata, query, limit, offset);
    return;
  }

  int32_t count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->count(request_metadata, query);
    }
    return ifaces_[i]->count(request_metadata, query);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TUniquepairServiceConcurrentClient : virtual public TUniquepairServiceIf {
 public:
  TUniquepairServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  TUniquepairServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
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
  void get(TUniquepair& _return, const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  int32_t send_get(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void recv_get(TUniquepair& _return, const int32_t seqid);
  void add(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  int32_t send_add(const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void recv_add(TUniquepair& _return, const int32_t seqid);
  void remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  int32_t send_remove(const TRequestMetadata& request_metadata, const int32_t uniquepair_id);
  void recv_remove(const int32_t seqid);
  void find(TUniquepair& _return, const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  int32_t send_find(const TRequestMetadata& request_metadata, const std::string& domain, const int32_t first_elem, const int32_t second_elem);
  void recv_find(TUniquepair& _return, const int32_t seqid);
  void fetch(std::vector<TUniquepair> & _return, const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset);
  int32_t send_fetch(const TRequestMetadata& request_metadata, const TUniquepairQuery& query, const int32_t limit, const int32_t offset);
  void recv_fetch(std::vector<TUniquepair> & _return, const int32_t seqid);
  int32_t count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query);
  int32_t send_count(const TRequestMetadata& request_metadata, const TUniquepairQuery& query);
  int32_t recv_count(const int32_t seqid);
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
