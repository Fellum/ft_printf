/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:29:25 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/20 16:48:39 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_LIBFT_H
# define FT_PRINTF_LIBFT_H
# include "ft_string.h"
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa_base(long long int n, int base, int uppercase);
char	*ft_itoa_base_hex_long(unsigned long long n, int base, int uppercase);
#endif
