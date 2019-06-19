/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:43:46 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 19:43:49 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	cur;

	if (dst == src)
		return (dst);
	cur = 0;
	while (cur < len && src[cur])
	{
		dst[cur] = src[cur];
		cur++;
	}
	while (cur < len && dst[cur])
		dst[cur++] = '\0';
	return (dst);
}
