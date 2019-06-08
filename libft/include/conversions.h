#ifndef FT_PRINTF_CONVERSIONS_H
#define FT_PRINTF_CONVERSIONS_H

#include <stdarg.h>
#include <stdint.h>
#include "ft_printf.h"

int			d_conversions(t_params ft, va_list *args);
int			x_conversions(t_params ft, va_list *args);
int			o_conversions(t_params ft, va_list *args);
int			u_conversions(t_params ft, va_list *args);
int			f_conversions(t_params ft, va_list *args);
int			c_conversions(t_params ft, va_list *args);
char		*s_conversions(t_params ft, va_list *args);
int			p_conversions(t_params ft, va_list *args);
long long	convert_flags(int flags, va_list *args);
unsigned long long int	convert_flags_u(int flags, va_list *args);
int			mod_conversion(t_params ft);
#endif //FT_PRINTF_CONVERSIONS_H
