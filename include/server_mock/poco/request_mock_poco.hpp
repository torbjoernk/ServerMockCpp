#pragma once

#include "server_mock/request_mock.hpp"
#include "server_mock/poco/poco_fwd.hpp"

namespace server_mock {
namespace poco {

class RequestMockPoco
    : public RequestMock {
 public:
  RequestMockPoco(std::string const& endpoint,
                  Method method,
                  std::string const& payload,
                  Headers headers);
  RequestMockPoco(RequestMockPoco const& other) = delete;
  RequestMockPoco(RequestMockPoco&& other) = default;
  ~RequestMockPoco() override = default;
  RequestMockPoco& operator=(RequestMockPoco const& other) = delete;
  RequestMockPoco& operator=(RequestMockPoco&& other) = delete;

  void respondWith(std::string const& payload, std::string const& headers) override;
};

}  // namespace poco
}  // namespace server_mock
