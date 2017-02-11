#pragma once

#include <memory>

#include "server_mock/types.hpp"
#include "server_mock/request_mock.hpp"

namespace server_mock {

class ServerMock {
 public:
  ServerMock() = default;
  virtual ~ServerMock() = default;

  virtual void start() = 0;
  virtual void stop() = 0;

  virtual RequestMock& onRequest(std::string const& endpoint,
                                 Method method,
                                 std::string const& payload,
                                 Headers headers) = 0;
};

std::unique_ptr<ServerMock> createServerMock();

}  // namespace server_mock