/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_conversions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 19:18:58 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/20 16:40:37 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_string.h"
#include <stdlib.h>


static char	*ft_other_flags(t_params ft, int str_len, int hash, int sp)
{
	int		i;
	char	space_char;
	char	*str;

	i = 0;
	space_char = (ft.flags & ZERO_FLAG) && !(ft.flags & MINUS_FLAG) ? '0' : ' ';
	if (sp > 0)
		str = ft_strnew(sp);
	else
		str = NULL;
	while (i < sp)
		str[i++] = space_char;
	return (str);
}

static int		ft_before_num_kek(t_params ft, int str_len, int hash, t_list **lst)
{
	char	*str;
	int		spaces;

	spaces = ft.field_width - str_len - ((hash == 1) ? hash + 6 : 0);
	spaces = (ft.flags & MINUS_FLAG) ? 0 : spaces;
	if ((str = ft_other_flags(ft, str_len, hash, spaces)))
		create_node(str, ft_strlen(str) + 1, lst);
	return (1);
}

static int		ft_print_sign(unsigned flags, long double arg_val, t_list **lst)
{
	int		tmp;

	tmp = 0;
	if (((flags & PLUS_FLAG) || (arg_val < 0)) && (flags & ZERO_FLAG))
		if ((tmp = create_node(ft_strdup((arg_val < 0) ? "-" : "+"), 2, lst)))
			return (tmp);
	if ((flags & SPACE_FLAG) && !((flags & PLUS_FLAG) || (arg_val < 0)))
		if ((tmp = create_node(ft_strdup(" "), 2, lst) == -1))
			return (tmp);
	return (tmp);
}

int		f_conversions(t_params ft, va_list *args, t_list **lst)
{
	char 		*res;
	long double	val;
	char		*str;
	int 		i;

	i = 1;
	ft.precision = ft.precision == -1 ? 6 : ft.precision;
	val = ft.flags & L_FLAG ? va_arg(*args, long double) :
		  va_arg(*args, double);
	res = ft.flags & L_FLAG ? make_ldouble(val, ft.precision) :
		  make_double(val, ft.precision);

	ft_print_sign(ft.flags, val, lst);
	ft_before_num_kek(ft, ft_strlen(res), ft.flags & HASH_FLAG && !(ft.precision), lst);
	if (ft.flags & HASH_FLAG && !(ft.precision))
	{
		str = ft_strnew(7);
		str[0] = '.';
		while (i < 7)
			str[i++] = '0';
	}
	create_node(res, ft_strlen(res), lst);

	return (0);
}
