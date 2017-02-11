set(ServerMockCpp_HEADERS
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/types.hpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/request_mock.hpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/server_mock.hpp

    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/poco_fwd.hpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/server_mock_poco.hpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/request_mock_poco.hpp
    ${CMAKE_CURRENT_LIST_DIR}/server_mock/poco/request_handler_factory_poco.hpp
    PARENT_SCOPE
)
