cmake_minimum_required (VERSION 3.10)

project (Jour09)

set (CMAKE_C_COMPILER clang)
set (CMAKE_C_FLAGS "-W -Wall -Werror -Wextra")
set (CMAKE_BUILD_TYPE CMAKE_C_FLAGS)

link_directories (./)

add_executable (my_param_to_tab main.c my_param_to_tab.c)
add_executable (my_show_tab main.c my_param_to_tab.c my_show_tab.c)
add_executable (is_big_endian main.c is_big_endian.c)

target_compile_definitions (my_param_to_tab PUBLIC MY_PARAM_TO_TAB)
target_compile_definitions (my_show_tab PUBLIC MY_SHOW_TAB)
target_compile_definitions (is_big_endian PUBLIC IS_BIG_ENDIAN)

target_link_libraries(my_param_to_tab libmy.a)
target_link_libraries(my_show_tab libmy.a)
target_link_libraries(is_big_endian libmy.a)
