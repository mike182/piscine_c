cmake_minimum_required (VERSION 3.10)

project (Jour11)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

link_directories (./)

add_executable (do-op do-op.c)
add_executable (my_sort_wordtab main.c my_sort_wordtab.c)
add_executable (my_advanced_sort_wordtab main.c my_sort_wordtab.c my_advanced_sort_wordtab.c)

target_compile_definitions (do-op PUBLIC DOOP)
target_compile_definitions (my_sort_wordtab PUBLIC MY_SORT_WORDTAB)
target_compile_definitions (my_advanced_sort_wordtab PUBLIC MY_ADVANCED_SORT_WORDTAB)

target_link_libraries(do-op libmy.a)
target_link_libraries(my_sort_wordtab libmy.a)
target_link_libraries(my_advanced_sort_wordtab libmy.a)
