#pragma once

#include <memory>

#include "Poco/Net/HTTPServer.h"

namespace server_mock {

class ScopedServer
{
 public:
  ScopedServer() = default;
  virtual ~ScopedServer();

  virtual void start();

 private:
  std::unique_ptr<Poco::Net::HTTPServer> m_server;
};

}  // namespace server_mock