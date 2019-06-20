/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:43:53 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 19:43:56 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if (size == (size_t)(-1))
		return (NULL);
	res = malloc(size + 1);
	res[size] = '\0';
	return (res);
}
