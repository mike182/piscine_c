cmake_minimum_required (VERSION 3.10)

project (Jour05)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

add_executable (my_factorielle_it main.c my_factorielle_it.c)
add_executable (my_factorielle_rec main.c my_factorielle_rec.c)
add_executable (my_power_it main.c my_power_it.c)
add_executable (my_power_rec main.c my_power_rec.c)

target_compile_definitions (my_factorielle_it PUBLIC MY_FACTORIELLE_IT)
target_compile_definitions (my_factorielle_rec PUBLIC MY_FACTORIELLE_REC)
target_compile_definitions (my_power_it PUBLIC MY_POWER_IT)
target_compile_definitions (my_power_rec PUBLIC MY_POWER_REC)
