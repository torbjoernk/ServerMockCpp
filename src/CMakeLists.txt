set(ServerMockCpp_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/request_mock.cpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/server_mock.cpp

    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/server_mock_poco.cpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/request_mock_poco.cpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/request_handler_factory_poco.cpp
    PARENT_SCOPE
)
