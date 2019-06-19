/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:27:31 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 19:46:54 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_CONVERSIONS_H
# define FT_PRINTF_CONVERSIONS_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_printf.h"

int			d_conversions(t_params ft, va_list *args, t_list **lst);
int			x_conversions(t_params ft, va_list *args, t_list **lst);
int			o_conversions(t_params ft, va_list *args, t_list **lst);
int			u_conversions(t_params ft, va_list *args, t_list **lst);
int			f_conversions(t_params ft, va_list *args, t_list **lst);
int			c_conversions(t_params ft, va_list *args, t_list **lst);
int			s_conversions(t_params ft, va_list *args, t_list **lst);
int			p_conversions(t_params ft, va_list *args, t_list **lst);
int			mod_conversions(t_params ft, t_list **lst);

long long	convert_flags(int flags, va_list *args);
intmax_t	convert_flags_u(int flags, va_list *args);

#endif
