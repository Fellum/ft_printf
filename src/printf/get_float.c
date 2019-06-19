/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_float.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:38:46 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 20:02:10 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

char	*get_float(t_params params, va_list *args)
{
	int precision;

	precision = params.precision == -1 ? 6 : params.precision;
	if (params.flags & L_FLAG)
		return (make_ldouble(va_arg(*args, double), precision));
	else
		return (make_double(va_arg(*args, double), precision));
}
