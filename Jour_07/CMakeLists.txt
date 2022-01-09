cmake_minimum_required (VERSION 3.10)

project (Jour07)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

add_executable (my_strcat main.c my_strlen.c my_strcat.c)
add_executable (my_strncat main.c my_strlen.c my_strncat.c)
add_executable (my_strlcat main.c my_strlen.c my_strlcat.c)
add_executable (my_aff_params my_putchar.c my_putstr.c my_aff_params.c)
add_executable (my_rev_params my_putchar.c my_putstr.c my_rev_params.c)
add_executable (my_sort_params my_putchar.c my_putstr.c my_strcmp.c my_swap.c my_sort_params.c)

target_compile_definitions (my_strcat PUBLIC MY_STRCAT)
target_compile_definitions (my_strncat PUBLIC MY_STRNCAT)
target_compile_definitions (my_strlcat PUBLIC MY_STRLCAT)
target_compile_definitions (my_aff_params PUBLIC MY_AFF_PARAMS)
target_compile_definitions (my_rev_params PUBLIC MY_REV_PARAMS)
target_compile_definitions (my_sort_params PUBLIC MY_SORT_PARAMS)
