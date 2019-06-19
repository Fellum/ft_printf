//
// Created by Jasper Leann on 2019-05-22.
//

#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include "ft_list.h"

# define HASH_FLAG 1U
# define PLUS_FLAG 2U
# define MINUS_FLAG 4U
# define SPACE_FLAG 8U
# define ZERO_FLAG 16U
# define l_FLAG 32U
# define ll_FLAG 64U
# define h_FLAG 128U
# define hh_FLAG 256U
# define L_FLAG 512U
# define Z_FLAG 1024U
# define J_FLAG 2048U

typedef struct		s_params
{
	int				precision;
	int				field_width;
	unsigned		flags;
	char			conversion;
}					t_params;

int			get_field_width(const char **format, va_list *args);
int			get_flags(const char **format);
int			get_precision(const char **format, va_list *args);
unsigned	get_conv_flags(const char **format);
char		get_conversion(const char **format);
int			ft_printf(const char *format, ...);
int			print_conversion(t_params formating, va_list *args, t_list **lst);
int			ft_before_num(t_params ft, int str_len, int hash, t_list **lst);
int			ft_after_num(t_params ft, int str_len, t_list **lst, int hash);


#endif //FT_PRINTF_FT_PRINTF_H
