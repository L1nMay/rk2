cmake_minimum_required(VERSION 3.10)
project(rk2 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

find_package(GTest REQUIRED)
include(GoogleTest)

add_library(rk2_lib STATIC
    src/database.cpp
    src/proxy.cpp
)

add_executable(rk2_main src/main.cpp)
target_link_libraries(rk2_main rk2_lib)

add_subdirectory(tests)
