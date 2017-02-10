#include "server_mock/scoped_server.hpp"

namespace server_mock {

ScopedServer::~ScopedServer() {
  if (m_server) {
    m_server->stop();
  }
}

void ScopedServer::start() {
  m_server->start();
}

}  // namespace server_mock
