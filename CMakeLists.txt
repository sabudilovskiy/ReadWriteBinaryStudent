cmake_minimum_required(VERSION 3.20)
project(ReadWriteBinaryStudent)

include_directories(includes)
set(CMAKE_CXX_STANDARD 20)

add_executable(ReadWriteBinaryStudent main.cpp includes/Student.h src/Student.cpp includes/Support.h)
