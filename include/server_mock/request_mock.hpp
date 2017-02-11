#pragma once

#include "server_mock/types.hpp"

namespace server_mock {

class RequestMock
{
 public:
  RequestMock() = default;
  RequestMock(RequestMock const& other) = delete;
  RequestMock(RequestMock&& other) = default;
  virtual ~RequestMock() = default;
  RequestMock& operator=(RequestMock const& other) = delete;
  RequestMock& operator=(RequestMock&& other) = delete;

  virtual void respondWith(std::string const& payload, std::string const& headers) = 0;
};

}  // namespace server_mock
