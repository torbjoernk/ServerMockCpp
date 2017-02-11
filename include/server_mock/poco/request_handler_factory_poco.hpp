#pragma once

#include <memory>
#include <map>

#include "Poco/Net/HTTPRequestHandlerFactory.h"
#include "Poco/Net/HTTPServerRequest.h"

#include "server_mock/poco/poco_fwd.hpp"

namespace server_mock {
namespace poco {

class RequestHandlerFactoryPoco
    : public Poco::Net::HTTPRequestHandlerFactory
{
 public:
  explicit RequestHandlerFactoryPoco(std::map<std::string, std::unique_ptr<RequestMockPoco>> const& requests);
  RequestHandlerFactoryPoco(RequestHandlerFactoryPoco const& other) = delete;
  RequestHandlerFactoryPoco(RequestHandlerFactoryPoco&& other) = default;
  ~RequestHandlerFactoryPoco() override = default;
  RequestHandlerFactoryPoco& operator=(RequestHandlerFactoryPoco const& other) = delete;
  RequestHandlerFactoryPoco& operator=(RequestHandlerFactoryPoco&& other) = default;

  Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request) override;

 private:

};

}  // namespace poco
}  // namespace server_mock
