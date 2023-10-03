cmake_minimum_required(VERSION 2.8)

project(TwoEngine)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
add_subdirectory(external/glad)

add_executable(TwoEngine main.cpp)
target_link_libraries(TwoEngine PUBLIC glfw glad)
target_include_directories(TwoEngine PUBLIC external/glfw/include)
target_include_directories(TwoEngine PUBLIC external/glad/include)
