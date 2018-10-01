cmake_minimum_required(VERSION 3.12)
project(Lab_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab_2
        LinkedList.cpp
        LinkedList.h
        ListProcessor.cpp
        Node.cpp
        Node.h)
