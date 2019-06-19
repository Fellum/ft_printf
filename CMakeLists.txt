cmake_minimum_required(VERSION 3.14)
project(dasha_printf C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(src)
include_directories(src/list)
include_directories(src/printf)
include_directories(src/string)

add_executable(dasha_printf
    include/conversions.h
    include/float_to_str.h
    include/floats.h
    include/ft_list.h
    include/ft_printf.h
    include/ft_string.h
    include/large_arythmetics.h
    include/libft.h
    src/list/ft_create_node.c
    src/list/ft_lstadd.c
    src/list/ft_lstnew.c
    src/printf/c_conversions.c
    src/printf/conversion_flags.c
    src/printf/convert_flags.c
    src/printf/d_conversions.c
    src/printf/f_conversion.c
        src/string/fill_with_chars.c
    src/printf/float_to_str.c
    src/printf/ft_after_num.c
    src/printf/ft_before_num.c
        src/string/ft_bzero.c
    src/printf/ft_itoa_base.c
    src/printf/ft_itoa_base_hex..c
    src/printf/ft_itoa_base_hex_long.c
        src/string/ft_memset.c

    src/printf/ft_printf.c
    src/printf/get_conv_glags.c
    src/printf/get_conversion.c
    src/printf/get_flags.c
    src/printf/get_float.c
    src/printf/get_sizes.c
    src/printf/large_arythmetics.c
    src/printf/make_double.c
    src/printf/make_ldouble.c
    src/printf/mod_conversions.c
    src/printf/o_conversions.c
    src/printf/p_conversions.c
    src/printf/print_conversion.c
    src/printf/s_conversion.c
    src/printf/u_conversion.c
    src/printf/x_conversions.c
    src/string/ft_lst_to_str.c
    src/string/ft_memcpy.c
    src/string/ft_strchr.c
    src/string/ft_strcpy.c
    src/string/ft_strdup.c
    src/string/ft_strjoin.c
    src/string/ft_strlen.c
    src/string/ft_strncpy.c
    src/string/ft_strnew.c
    src/string/ft_strsub.c
        src/string/ft_strappend.c

    main.c src/string/ft_realloc.c main.c)
