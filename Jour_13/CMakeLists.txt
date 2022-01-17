cmake_minimum_required (VERSION 3.10)

project (Jour12)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

link_directories (./)

add_executable (cat cat.c)
# add_executable (who who.c)
# add_executable (last last.c)

target_compile_definitions (cat PUBLIC CAT)
# target_compile_definitions (who PUBLIC WHO)
# target_compile_definitions (last PUBLIC LAST)

target_link_libraries(cat libmy.a)
# target_link_libraries(who libmy.a)
# target_link_libraries(last libmy.a)
