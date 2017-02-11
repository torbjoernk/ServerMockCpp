cmake_minimum_required(VERSION 3.6)
project(ServerMockCpp
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set_property(GLOBAL PROPERTY USE_FOLDERS TRUE)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

enable_testing()

add_subdirectory(include)
add_subdirectory(src)

add_library(ServerMockCpp
			${ServerMockCpp_HEADERS}
            ${ServerMockCpp_SOURCES})
target_include_directories(ServerMockCpp
                           PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
                                  $<INSTALL_INTERFACE:include>
)
target_link_libraries(ServerMockCpp
                      PUBLIC CONAN_PKG::Poco)

find_package(GoogleTest)
add_subdirectory(tests)
