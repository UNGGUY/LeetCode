cmake_minimum_required(VERSION 3.0)

project(Candy)

set(CMAKE_CXX_FLAG "${CMAKE_CXX_FLAG} -wall")

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_BUILD_TYPE Debug)

file(GLOB sourceList source/*.cpp)

include_directories(include)

add_executable(CANDY main.cpp ${sourceList})
