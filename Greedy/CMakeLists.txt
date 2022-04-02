cmake_minimum_required(VERSION 3.0)

project(GREEDY)

set(CMAKE_CXX_FLAG "${CMAKE_CXX_FLAG} -g -wall -02")

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 11)

file(GLOB srclist src/*.cpp)

include_directories(include)

add_executable(MAIN main.cpp ${srclist})