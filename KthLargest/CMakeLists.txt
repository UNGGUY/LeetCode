cmake_minimum_required(VERSION 3.0)

project(KTHLARGEST)

set(CMAKE_CXX_FLAG "${CMAKE_CXX_FLAG} -wall -o2")

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

file(GLOB sourceList source/*.cpp)

include_directories(include)

add_executable(main main.cpp ${sourceList})