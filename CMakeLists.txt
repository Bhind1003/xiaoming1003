cmake_minimum_required(VERSION 3.17)
project(xiaoming1003)

set(CMAKE_CXX_STANDARD 14)

include_directories(ctest)

add_executable(xiaoming1003
        ctest/time.cpp)
