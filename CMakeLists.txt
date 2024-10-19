cmake_minimum_required(VERSION 3.22)
project(cpa_cypher)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpa_cypher modules.h modules.cpp main.cpp)