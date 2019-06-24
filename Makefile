L_FT    ?= .
FT_NAME    := libftprintf.a
NAME    := FT_NAME
FT_LNK    := -L $(L_FT) -l ft
FT_INC    := -I $(L_FT)/include
FT_LIB    := $(L_FT)/$(FT_NAME)
# Global variables for compilation
ifndef LIB_LNK
LIB_LNK    :=
LIB_INC    :=
endif
LIB_LNK    += $(FT_LNK)
LIB_INC    += $(FT_INC)
SRC_DIR    = ./src
INC_DIR    = ./include
OBJ_DIR    = ./obj

RAW_SRC    := $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")
RAW_DIRS:= $(shell find $(SRC_DIR) -mindepth 1 -type d)
SRCDIRS = $(RAW_DIRS:./src/%=%)
SRC		:=	printf/c_conversions.c \
			printf/conversion_flags.c \
			printf/convert_flags.c \
			printf/d_conversions.c \
			printf/div_10_longnum.c \
			printf/f_conversions.c \
			printf/float_to_str.c \
			printf/ft_after_num.c \
			printf/ft_before_num.c \
			printf/ft_itoa_base.c \
			printf/ft_itoa_base_hex_long.c \
			printf/ft_printf.c \
			printf/get_conv_glags.c \
			printf/get_conversion.c \
			printf/get_first_digit.c \
			printf/get_flags.c \
			printf/get_sizes.c \
			printf/large_arythmetics.c \
			printf/make_double.c \
			printf/make_ldouble.c \
			printf/mod_conversions.c \
			printf/o_conversions.c \
			printf/p_conversions.c \
			printf/print_conversion.c \
			printf/s_conversion.c \
			printf/sum_longnum.c \
			printf/u_conversion.c \
			printf/x_conversions.c \
			\
			list/ft_create_node.c \
			list/ft_lstadd.c \
			list/ft_lstnew.c \
			\
			string/fill_with_chars.c \
			string/ft_bzero.c \
			string/ft_lst_to_str.c \
			string/ft_memcpy.c \
			string/ft_memset.c \
			string/ft_realloc.c \
			string/ft_strappend.c \
			string/ft_strchr.c \
			string/ft_strcpy.c \
			string/ft_strdup.c \
			string/ft_strjoin.c \
			string/ft_strlen.c \
			string/ft_strncpy.c \
			string/ft_strnew.c \
			string/ft_strsub.c \

OBJ        = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

CC        = gcc
CFLAGS    = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(MAKE) $(OBJ_DIR) --no-print-directory
	@$(MAKE) $(FT_NAME) --no-print-directory

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(addprefix $(OBJ_DIR)/,$(SRCDIRS))

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(FT_INC) -o $@ -c $<

$(FT_NAME): $(OBJ)
	ar rc $(FT_NAME) $(OBJ)
	ranlib $(FT_NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(FT_NAME)

re: fclean all
