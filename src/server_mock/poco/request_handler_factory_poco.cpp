#include "server_mock/poco/request_handler_factory_poco.hpp"

namespace server_mock {
namespace poco {

RequestHandlerFactoryPoco::RequestHandlerFactoryPoco(std::map<std::string,
                                                              std::unique_ptr<RequestMockPoco>> const& requests)
{

}

Poco::Net::HTTPRequestHandler*
RequestHandlerFactoryPoco::createRequestHandler(const Poco::Net::HTTPServerRequest& request)
{
  return nullptr;
}

}  // namespace poco
}  // namespace server_mock
