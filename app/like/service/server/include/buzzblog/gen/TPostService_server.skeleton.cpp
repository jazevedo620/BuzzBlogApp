// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "TPostService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::gen;

class TPostServiceHandler : virtual public TPostServiceIf {
 public:
  TPostServiceHandler() {
    // Your initialization goes here
  }

  void create_post(TPost& _return, const TRequestMetadata& request_metadata, const std::string& text) {
    // Your implementation goes here
    printf("create_post\n");
  }

  void retrieve_standard_post(TPost& _return, const TRequestMetadata& request_metadata, const int32_t post_id) {
    // Your implementation goes here
    printf("retrieve_standard_post\n");
  }

  void retrieve_expanded_post(TPost& _return, const TRequestMetadata& request_metadata, const int32_t post_id) {
    // Your implementation goes here
    printf("retrieve_expanded_post\n");
  }

  void delete_post(const TRequestMetadata& request_metadata, const int32_t post_id) {
    // Your implementation goes here
    printf("delete_post\n");
  }

  void list_posts(std::vector<TPost> & _return, const TRequestMetadata& request_metadata, const TPostQuery& query, const int32_t limit, const int32_t offset) {
    // Your implementation goes here
    printf("list_posts\n");
  }

  int32_t count_posts_by_author(const TRequestMetadata& request_metadata, const int32_t author_id) {
    // Your implementation goes here
    printf("count_posts_by_author\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<TPostServiceHandler> handler(new TPostServiceHandler());
  ::std::shared_ptr<TProcessor> processor(new TPostServiceProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

