/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:34:14 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/20 14:50:10 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "conversions.h"
#include "libft.h"
#include "ft_list.h"

int		place_hash(char c, t_params ft, int *i, char *str)
{
	int hash;

	hash = (ft.flags & HASH_FLAG) ? 1 : 0;
	if (((ft.flags & ZERO_FLAG) ? '0' : ' ') == c)
	{
		if (hash)
		{
			str[*i] = '0';
			*i += 1;
		}
	}
	return (0);
}

void	place_zero(char c, t_params ft, int *i, char *str)
{
	int hash;

	hash = (ft.flags & HASH_FLAG) ? 2 : 0;
	if (((ft.flags & ZERO_FLAG) ? '0' : ' ') == c)
	{
		if (hash)
		{
			str[*i] = '0';
			*i += 1;
			str[*i] = (ft.conversion == 'x') ? 'x' : 'X';
			*i += 1;
		}
	}
}

char	*ft_other_flags(t_params ft, int str_len, int hash, int sp)
{
	int		i;
	char	space_char;
	char	*str;
	int		lengh;

	i = 0;
	space_char = (ft.flags & ZERO_FLAG) && !(ft.flags & MINUS_FLAG) ? '0' : ' ';
	lengh = hash + ((str_len > ft.precision) ? 0 : ft.precision - str_len);
	if ((((sp > 0) ? sp : 0) + lengh + 1) > 1)
		str = (char *)malloc(sizeof(char) * (((sp > 0) ? sp : 0) + lengh + 1));
	else
		str = NULL;
	(ft.conversion == 'o') ? place_hash('0', ft, &i, str)
			: place_zero('0', ft, &i, str);
	while (i < sp)
		str[i++] = space_char;
	(ft.conversion == 'o') ? place_hash(' ', ft, &i, str)
			: place_zero(' ', ft, &i, str);
	if (i < sp + lengh)
		while (i < sp + lengh)
			str[i++] = '0';
	if (i)
		str[i] = '\0';
	return (str);
}

int		ft_before_num(t_params ft, int str_len, int hash, t_list **lst)
{
	int		i;
	char	*str;
	char	space_char;
	int		spaces;

	i = 0;
	space_char = (ft.flags & ZERO_FLAG) && !(ft.flags & MINUS_FLAG) ? '0' : ' ';
	spaces = ft.field_width - ((str_len > ft.precision) ?
				str_len : ft.precision) - hash;
	spaces = (ft.flags & MINUS_FLAG) ? 0 : spaces;
	if ((str = ft_other_flags(ft, str_len, hash, spaces)))
		create_node(str, ft_strlen(str) + 1, lst);
	return (i);
}
