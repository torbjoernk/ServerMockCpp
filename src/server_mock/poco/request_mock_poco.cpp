#include "server_mock/poco/request_mock_poco.hpp"

namespace server_mock {
namespace poco {

RequestMockPoco::RequestMockPoco(std::string const& endpoint,
                                 Method method,
                                 std::string const& payload,
                                 Headers headers) {

}

void RequestMockPoco::respondWith(std::string const& payload, std::string const& headers) {

}

}  // namespace poco
}  // namespace server_mock
