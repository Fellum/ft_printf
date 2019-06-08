cmake_minimum_required(VERSION 3.14)
project(ft_printf C)

set(CMAKE_C_STANDARD 99)
add_subdirectory(libft)
include_directories(libft/include)
add_executable(ft_printf main.c)
target_link_libraries(ft_printf libft_lib)