#pragma once

#include "Poco/Net/HTTPRequestHandler.h"

namespace server_mock {
namespace poco {

class ServerResponseHandler : public Poco::Net::HTTPRequestHandler
{

};

}  // namespace poco
}  // namespace server_mock
