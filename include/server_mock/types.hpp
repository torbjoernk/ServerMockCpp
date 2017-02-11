#pragma once

#include <map>
#include <string>

namespace server_mock {

enum class Method {
  GET,
  PUT,
  POST,
  PATCH,
  DELETE,
  HEAD,
  OPTIONS
};

using HeaderField = std::pair<std::string, std::string>;
using Headers = std::map<std::string, std::string>;

} // namespace server_mock
