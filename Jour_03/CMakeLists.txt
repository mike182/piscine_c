
cmake_minimum_required (VERSION 3.10)

project (a.out)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

add_executable (my_aff_alpha main.c my_putchar.c my_aff_alpha.c)
add_executable (my_aff_revalpha main.c my_putchar my_aff_revalpha.c)
add_executable (my_aff_chiffre main.c my_putchar my_aff_chiffre.c)
add_executable (my_isneg main.c my_putchar my_isneg.c)
add_executable (my_aff_comb main.c my_putchar my_aff_comb.c)

target_compile_definitions(my_aff_alpha PUBLIC MY_AFF_ALPHA)
target_compile_definitions(my_aff_revalpha PUBLIC MY_AFF_REVALPHA)
target_compile_definitions(my_aff_chiffre PUBLIC MY_AFF_CHIFFRE)
target_compile_definitions(my_isneg PUBLIC MY_ISNEG)
target_compile_definitions(my_aff_comb PUBLIC MY_AFF_COMB)
