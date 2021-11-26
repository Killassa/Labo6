cmake_minimum_required(VERSION 3.20)
project(Labo6.5)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(Labo06_Eratosthene main.cpp eratosthene.h eratosthene.cpp annexe.h
               annexe.cpp tableau.h tableau.cpp)
