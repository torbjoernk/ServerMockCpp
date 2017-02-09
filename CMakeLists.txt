cmake_minimum_required(VERSION 3.6)
project(MockedServer
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
