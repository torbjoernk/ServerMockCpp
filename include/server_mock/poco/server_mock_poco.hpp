#pragma once

#include "server_mock/server_mock.hpp"
#include "server_mock/poco/poco_fwd.hpp"

namespace Poco {
namespace Net {
class HTTPServer;
} // namespace Net
} // namespace Poco


namespace server_mock {
namespace poco {

class ServerMockPoco
    : public ServerMock {
 public:
  ServerMockPoco() = default;
  ServerMockPoco(ServerMockPoco const& other) = delete;
  ServerMockPoco(ServerMockPoco&& other) = default;
  ~ServerMockPoco() override = default;
  ServerMockPoco& operator=(ServerMockPoco const& other) = delete;
  ServerMockPoco& operator=(ServerMockPoco&& other) = delete;

  void start() override;
  void stop() override;
  RequestMock& onRequest(std::string const& endpoint,
                         Method method,
                         std::string const& payload,
                         Headers headers) override;

 private:
  std::unique_ptr<Poco::Net::HTTPServer> m_server;
  std::map<std::string, std::unique_ptr<RequestMock>> m_requests;
};

}  // namespace poco
}  // namespace server_mock
