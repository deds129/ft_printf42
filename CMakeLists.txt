cmake_minimum_required(VERSION 3.17)
project(ft_printf_clion C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf_clion main.c ft_printf.c includes/ft_printf.h ft_format_parser.c ft_set_flags.c ft_processor.c ft_char_type.c ft_flag_handler.c ft_string_type.c ft_uint_type.c ft_hexint_type.c)