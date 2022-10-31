cmake_minimum_required(VERSION 3.23)
project(use_sets C)

set(CMAKE_C_STANDARD 99)

add_executable(use_sets main.c Set.c Set.h)
