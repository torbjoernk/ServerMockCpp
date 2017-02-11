#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "server_mock/scoped_server.hpp"

TEST(Dummy, ScopedServer)
{
  server_mock::ScopedServer server;
}
