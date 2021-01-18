// This autogenerated skeleton file illustrates how to build a server.
// You should copy it to another filename to avoid overwriting it.

#include "TFollowService.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using namespace  ::buzzblog;

class TFollowServiceHandler : virtual public TFollowServiceIf {
 public:
  TFollowServiceHandler() {
    // Your initialization goes here
  }

  void follow_account(TFollow& _return, const int32_t requester_id, const int32_t account_id) {
    // Your implementation goes here
    printf("follow_account\n");
  }

  void retrieve_standard_follow(TFollow& _return, const int32_t requester_id, const int32_t follow_id) {
    // Your implementation goes here
    printf("retrieve_standard_follow\n");
  }

  void retrieve_expanded_follow(TFollow& _return, const int32_t requester_id, const int32_t follow_id) {
    // Your implementation goes here
    printf("retrieve_expanded_follow\n");
  }

  void delete_follow(const int32_t requester_id, const int32_t follow_id) {
    // Your implementation goes here
    printf("delete_follow\n");
  }

  void list_follows(std::vector<TFollow> & _return, const int32_t requester_id, const int32_t follower_id, const int32_t followee_id) {
    // Your implementation goes here
    printf("list_follows\n");
  }

  bool check_follow(const int32_t requester_id, const int32_t follower_id, const int32_t followee_id) {
    // Your implementation goes here
    printf("check_follow\n");
  }

  int32_t count_followers(const int32_t requester_id, const int32_t account_id) {
    // Your implementation goes here
    printf("count_followers\n");
  }

  int32_t count_followees(const int32_t requester_id, const int32_t account_id) {
    // Your implementation goes here
    printf("count_followees\n");
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  ::std::shared_ptr<TFollowServiceHandler> handler(new TFollowServiceHandler());
  ::std::shared_ptr<TProcessor> processor(new TFollowServiceProcessor(handler));
  ::std::shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  ::std::shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  ::std::shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}

