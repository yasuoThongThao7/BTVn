cmake_minimum_required(VERSION 3.29)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        Point.cpp
        Point.h
        Vector.cpp
        Vector.h
        Matrix.cpp
        Matrix.h
        cmake-build-debug/Number.cpp
        cmake-build-debug/Number.h
        Date.cpp
        Date.h)
