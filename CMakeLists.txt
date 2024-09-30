cmake_minimum_required(VERSION 3.29)
project(House)

set(CMAKE_CXX_STANDARD 20)

add_executable(House main.cpp
        Foundation.h
        Wall.h
        Roof.h
        House.h
        Builder.h)
