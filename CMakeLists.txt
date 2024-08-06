cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(KRFW VERSION 1.0 LANGUAGES CXX)

if (WIN32)
    add_definitions(-DWIN32_LEAN_AND_MEAN)
endif()

add_subdirectory(src/)