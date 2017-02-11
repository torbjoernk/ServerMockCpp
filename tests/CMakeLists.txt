set(ServerMockCppTest_SOURCES
    ${CMAKE_CURRENT_LIST_DIR}/server_mock_test.cpp
)

add_executable(ServerMockCppTest
               ${ServerMockCppTest_SOURCES})
target_link_libraries(ServerMockCppTest
                      PUBLIC ServerMockCpp
                             GoogleTest::gmock_main)
set_target_properties(ServerMockCppTest
					  PROPERTIES FOLDER Tests)
