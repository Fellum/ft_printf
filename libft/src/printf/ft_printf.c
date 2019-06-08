/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:18:31 by jleann            #+#    #+#             */
/*   Updated: 2019/06/03 19:25:53 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "conversions.h"
#include "ft_list.h"
#include "ft_string.h"

int	create_node(void *str, size_t len, t_list **lst)
{
	t_list 		*tmp_lst;

	if (!(tmp_lst = ft_lstnew(str, len)))
		return (-1);
	(*lst)->next = tmp_lst;
	*lst = tmp_lst;
	return (0);
}

void	free_lst(t_list *lst)
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst->next;
		free(lst->content);
		free(lst);
		lst = tmp;
	}
}

void		print_arg(const char **format, va_list *args, t_list **lst)
{
	t_params	formating;
	char 		*res;

	(*format)++;
	formating.flags = get_flags(format);
	formating.field_width = get_field_width(format, args);
	formating.precision = get_precision(format, args);
	formating.flags |= get_conv_flags(format);
	formating.conversion = get_conversion(format);
	res = print_conversion(formating, args, lst);
	create_node(res, ft_strlen(res) + 1, lst);
}



t_list	*main_loop(const char *format, va_list *args, t_list *res_lst)
{
	const char	*tmp;
	t_list	*last_lst;

	last_lst = res_lst;
	while (*format)
	{
		tmp = format;
		while (*tmp && *tmp != '%')
			tmp++;
		create_node(ft_strsub(format, 0, tmp - format), tmp - format + 1,
				&last_lst);
		format = tmp;
		if (*tmp == '%')
			print_arg(&format, args, &last_lst);
		{
			free_lst(res_lst);
			return (NULL);
		}
	}
	return (res_lst);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_list		*res_lst;
	char 		*tmp_str;
	int 		res;

	va_start(args, format);
	res = 0;
	res_lst = ft_lstnew();
	main_loop(format, &args, &res_lst);
	tmp_str = ft_lst_to_str(&res_lst);
	write(1, tmp_str, ft_strlen(tmp_str));
	free_lst(&res_lst);
	free(tmp_str);
	va_end(args);
	return (res);
}
