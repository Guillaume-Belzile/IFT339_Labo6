cmake_minimum_required(VERSION 3.20)
project(IFT339_Labo6)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(IFT339_Labo6
        unordered_set.h
        unordered_setImpl.h
        main.cpp)
