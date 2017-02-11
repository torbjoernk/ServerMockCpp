#pragma once

#include "server_mock/types.hpp"

namespace server_mock {

class RequestMock
{
 public:
  RequestMock() = default;
  virtual ~RequestMock() = default;

  void respondWith(std::string const& payload, std::string const& headers);
};

}  // namespace server_mock
