// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: rtk/rtk.proto
#ifndef GRPC_rtk_2frtk_2eproto__INCLUDED
#define GRPC_rtk_2frtk_2eproto__INCLUDED

#include "rtk/rtk.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace mavsdk {
namespace rpc {
namespace rtk {

// Service to send RTK corrections to the vehicle.
class RtkService final {
 public:
  static constexpr char const* service_full_name() {
    return "mavsdk.rpc.rtk.RtkService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Send RTCM data.
    virtual ::grpc::Status SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>> AsyncSendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>>(AsyncSendRtcmDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>> PrepareAsyncSendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>>(PrepareAsyncSendRtcmDataRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Send RTCM data.
      virtual void SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* AsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* PrepareAsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>> AsyncSendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>>(AsyncSendRtcmDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>> PrepareAsyncSendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>>(PrepareAsyncSendRtcmDataRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, std::function<void(::grpc::Status)>) override;
      void SendRtcmData(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* AsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* PrepareAsyncSendRtcmDataRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SendRtcmData_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Send RTCM data.
    virtual ::grpc::Status SendRtcmData(::grpc::ServerContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendRtcmData(::grpc::ServerContext* context, ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::grpc::ServerAsyncResponseWriter< ::mavsdk::rpc::rtk::SendRtcmDataResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SendRtcmData<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* request, ::mavsdk::rpc::rtk::SendRtcmDataResponse* response) { return this->SendRtcmData(context, request, response); }));}
    void SetMessageAllocatorFor_SendRtcmData(
        ::grpc::MessageAllocator< ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendRtcmData(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_SendRtcmData<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendRtcmData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->SendRtcmData(context, request, response); }));
    }
    ~WithRawCallbackMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* SendRtcmData(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SendRtcmData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_SendRtcmData() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::mavsdk::rpc::rtk::SendRtcmDataRequest, ::mavsdk::rpc::rtk::SendRtcmDataResponse>* streamer) {
                       return this->StreamedSendRtcmData(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_SendRtcmData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SendRtcmData(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::rtk::SendRtcmDataRequest* /*request*/, ::mavsdk::rpc::rtk::SendRtcmDataResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSendRtcmData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::mavsdk::rpc::rtk::SendRtcmDataRequest,::mavsdk::rpc::rtk::SendRtcmDataResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SendRtcmData<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SendRtcmData<Service > StreamedService;
};

}  // namespace rtk
}  // namespace rpc
}  // namespace mavsdk


#endif  // GRPC_rtk_2frtk_2eproto__INCLUDED