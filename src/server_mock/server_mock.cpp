#include "server_mock/server_mock.hpp"

#include "Poco/Net/HTTPServer.h"

namespace server_mock {

ServerMock::~ServerMock() {
  if (m_server) {
    m_server->stop();
  }
}

void ServerMock::start() {
  m_server->start();
}

void
ServerMock::stop()
{
  m_server->stop();
}


}  // namespace server_mock
