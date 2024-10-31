cmake_minimum_required(VERSION 3.29)
project(zork)

set(CMAKE_CXX_STANDARD 20)

add_executable(zork main.cpp
        command.cpp
        command.h
        invetory.cpp
        invetory.h
        textContent.cpp
        textContent.h
        gameFuntions.cpp
        gameFuntions.h
)
