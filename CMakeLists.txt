cmake_minimum_required(VERSION 3.23)
project(university)

set(CMAKE_CXX_STANDARD 14)

add_executable(university main.cpp Student.h Teacher.h Person.h Date.h)
