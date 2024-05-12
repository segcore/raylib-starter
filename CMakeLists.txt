cmake_minimum_required(VERSION 3.0)

project(Game)

add_subdirectory(deps/raylib)

add_executable(main main.c)
target_link_libraries(main PRIVATE raylib)
