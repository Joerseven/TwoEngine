cmake_minimum_required(VERSION 2.8)
project(glad)

add_library(glad include/glad/glad.h src/glad.c)
target_include_directories(glad PUBLIC include/)
