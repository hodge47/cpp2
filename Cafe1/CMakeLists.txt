cmake_minimum_required(VERSION 2.8)

# this should be the name of your homework assignment
project(Cafe1)

set(CMAKE_CXX_STANDARD 11)

add_executable(cafe1 main.cpp input.cpp log.cpp item.cpp inventory.cpp)
