cmake_minimum_required (VERSION 3.10)

project (libmy.a)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

file (GLOB src *.c)

add_library (my ${src}) # STATIC by default
