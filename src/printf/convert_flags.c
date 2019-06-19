/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:06:52 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/05 16:08:12 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "conversions.h"
#include <unistd.h>

intmax_t	convert_flags_u(int flags, va_list *args)
{
	intmax_t	n;

	if (flags & l_FLAG)
		n = va_arg(*args, unsigned long);
	else if (flags & ll_FLAG)
		n = va_arg(*args, unsigned long long);
	else if (flags & Z_FLAG)
		n = va_arg(*args, size_t);
	else if (flags & J_FLAG)
		n = va_arg(*args, intmax_t);
	else
		n = va_arg(*args, unsigned int);
	if (flags & h_FLAG)
		n = (unsigned short)n;
	else if (flags & hh_FLAG)
		n = (unsigned char)n;
	return (n);		
}