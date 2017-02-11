#include "server_mock/poco/server_mock_poco.hpp"

#include "Poco/Net/HTTPServer.h"

#include "server_mock/poco/request_mock_poco.hpp"

namespace server_mock {
namespace poco {

void ServerMockPoco::start() {


  m_server->start();
}

void ServerMockPoco::stop() {
  m_server->stop();
}

RequestMock& ServerMockPoco::onRequest(std::string const& endpoint,
                                       Method method,
                                       std::string const& payload,
                                       Headers headers) {
  auto result = m_requests.emplace(std::make_pair(endpoint,
                                                  std::make_unique<RequestMockPoco>(endpoint,
                                                                                    method,
                                                                                    payload,
                                                                                    headers)));
  return *result.first->second.get();
}

}  // namespace poco

std::unique_ptr<ServerMock> createServerMock()
{
  return nullptr;
}

}  // namespace server_mock
