/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:34:08 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/20 14:15:45 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(long long int n, int base)
{
	size_t len;

	len = 0;
	while (n)
	{
		len++;
		n /= base;
	}
	return (len);
}

char			*ft_itoa_base(long long n, int bs, int up)
{
	char	*res;
	long	len;
	char	*barr;
	int		i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	barr = up ? "0123456789ABCDEF" : "0123456789abcdef";
	len = intlen(n, bs);
	res = ft_strnew(len);
	i = len;
	if (n <= -9223372036854775807)
	{
		n += 9000000000000000000;
		res[0] = '9';
		len--;
	}
	n = (n < 0) ? -n : n;
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		res[--i] = barr[(n % bs)];
		n /= bs;
	}
	return (res);
}
