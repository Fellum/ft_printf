NAME = libftprintf.a

FT_INC    := ./include

PRINT_PATH = src/printf/
FT_PRINTF_SRC = c_conversions.c \
				conversion_flags.c \
				convert_flags.c \
				d_conversions.c \
				div_10_longnum.c \
				f_conversions.c \
				float_to_str.c \
				ft_after_num.c \
				ft_before_num.c \
				ft_itoa_base.c \
				ft_itoa_base_hex_long.c \
				ft_printf.c \
				get_conv_glags.c \
				get_conversion.c \
				get_first_digit.c \
				get_flags.c \
				get_sizes.c \
				large_arythmetics.c \
				make_double.c \
				make_ldouble.c \
				mod_conversions.c \
				o_conversions.c \
				p_conversions.c \
				print_conversion.c \
				s_conversion.c \
				sum_longnum.c \
				u_conversion.c \
				x_conversions.c \

LIST_PATH = src/list/
LIST_SRC =	ft_create_node.c \
			ft_lstadd.c \
			ft_lstnew.c \

STRING_PATH = src/string/
STRING_SRC =	fill_with_chars.c \
				ft_bzero.c \
				ft_lst_to_str.c \
				ft_memcpy.c \
				ft_memset.c \
				ft_realloc.c \
				ft_strappend.c \
				ft_strchr.c \
				ft_strcpy.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlen.c \
				ft_strncpy.c \
				ft_strnew.c \
				ft_strsub.c \

OBJ += $(addprefix $(PRINT_PATH),$(FT_PRINTF_SRC:.c=.o))
OBJ += $(addprefix $(LIST_PATH),$(LIST_SRC:.c=.o))
OBJ += $(addprefix $(STRING_PATH),$(STRING_SRC:.c=.o))

CC = gcc
CFLAGS = -Wall -Werror -Wextra

CLEAR_LINE = \033[2K\c

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\nCreating $@"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c
	@echo "$(CLEAR_LINE)"
	@echo "Compiling $<\r\c"
	@$(CC) $(CFLAGS) -I$(FT_INC) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
