cmake_minimum_required(VERSION 3.21)
project(PingPongGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(PingPongGame main.cpp)

cmake_minimum_required(VERSION 3.0)

project("gtest")

enable_testing()
add_subdirectory(googletest)
add_executable(test_app test.cpp)
target_link_libraries(test_app gtest_main gmock_main)