cmake_minimum_required(VERSION 3.17)
project(ft_printf_clion C)

set(CMAKE_C_STANDARD 99)

add_executable(ft_printf_clion main.c ft_printf.c includes/ft_printf.h parser/ft_format_parser.c parser/set_flags.c processor/ft_processor.c processor/ft_char_type.c processor/ft_flag_handler.c)