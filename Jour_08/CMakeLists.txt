cmake_minimum_required (VERSION 3.10)

project (Jour07)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

link_directories (./)

add_executable (my_strdup main.c my_strdup.c)
add_executable (convert_base main.c convert_base.c)
add_executable (sum_params sum_params.c)
add_executable (my_str_to_wordtab main.c my_strndup.c my_str_to_wordtab.c)
add_executable (my_show_wordtab main.c my_strndup.c my_str_to_wordtab.c my_show_wordtab.c)

target_compile_definitions (my_strdup PUBLIC MY_STRDUP)
target_compile_definitions (convert_base PUBLIC CONVERT_BASE)
target_compile_definitions (sum_params PUBLIC SUM_PARAMS)
target_compile_definitions (my_str_to_wordtab PUBLIC MY_STR_TO_WORDTAB)
target_compile_definitions (my_show_wordtab PUBLIC MY_SHOW_WORDTAB)

target_link_libraries(my_strdup libmy.a)
target_link_libraries(convert_base libmy.a)
target_link_libraries(sum_params libmy.a)
target_link_libraries(my_str_to_wordtab libmy.a)
target_link_libraries(my_show_wordtab libmy.a)
