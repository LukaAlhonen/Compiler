cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

add_definitions(-std=c++20)
set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(Tokenizer)

set(SOURCES
    main.cpp
)

add_executable(main ${SOURCES})