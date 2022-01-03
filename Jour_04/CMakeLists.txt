cmake_minimum_required (VERSION 3.10)

project (Jour02)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

add_executable (my_swap main.c my_swap.c)
add_executable (my_putstr main.c my_putchar.c my_putstr.c)
add_executable (my_strlen main.c my_strlen.c)
add_executable (my_evil_str main.c my_strlen.c my_evil_str.c)
add_executable (my_getnbr main.c my_getnbr.c)
add_executable (my_sort_int_tab main.c my_sort_int_tab.c)

target_compile_definitions (my_swap PUBLIC MY_SWAP)
target_compile_definitions (my_putstr PUBLIC MY_PUTSTR)
target_compile_definitions (my_strlen PUBLIC MY_STRLEN)
target_compile_definitions (my_evil_str PUBLIC MY_EVIL_STR)
target_compile_definitions (my_getnbr PUBLIC MY_GETNBR)
target_compile_definitions (my_sort_int_tab PUBLIC MY_SORT_INT_TAB)
