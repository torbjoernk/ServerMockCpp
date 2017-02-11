#pragma once

#include <memory>

#include "server_mock/types.hpp"
#include "server_mock/request_mock.hpp"

namespace Poco {
namespace Net {
class HTTPServer;
} // namespace Net
} // namespace Poco


namespace server_mock {

class ServerMock
{
 public:
  ServerMock() = default;
  virtual ~ServerMock();

  virtual void start();
  virtual void stop();

  RequestMock& onRequest(std::string const& endpoint, Method method, std::string const& payload, Headers headers);

 private:
  std::unique_ptr<Poco::Net::HTTPServer> m_server;
  std::map<std::string, RequestMock> m_requests;
};

}  // namespace server_mock