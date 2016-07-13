cmake_minimum_required(VERSION 3.3)
project(LargestPrimeFactor_PE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(LargestPrimeFactor_PE ${SOURCE_FILES})