/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 19:18:58 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 19:31:44 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_string.h"
#include <stdlib.h>

int		f_conversions(t_params ft, va_list *args, t_list **lst)
{
	char	*arg_val;
	int		spaces;
	int		tmp;
	char	space_char;
	long	str_len;
	char	*str;

	tmp = 0;
	arg_val = get_float(ft, args);
	str_len = ft_strlen(arg_val);
	space_char = (ft.flags & ZERO_FLAG) && !(ft.flags & MINUS_FLAG) ? '0' : ' ';
	spaces = (ft.flags & MINUS_FLAG) ? 0 : ft.field_width - str_len;
	str = fill_with_chars(spaces, space_char);
	if (!(ft.flags & MINUS_FLAG))
		create_node(str, spaces > 0 ? spaces + 1 : 0, lst);
	create_node(arg_val, str_len + 1, lst);
	if (ft.flags & MINUS_FLAG)
		create_node(str, spaces > 0 ? spaces + 1 : 0, lst);
	return (tmp);
}
