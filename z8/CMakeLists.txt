cmake_minimum_required(VERSION 2.8.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Wconversion -Werror")

project(christmas_tree)

add_executable(${PROJECT_NAME} main.cpp christmas_tree.cpp)
