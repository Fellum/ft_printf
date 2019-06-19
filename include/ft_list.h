/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcanhand <mcanhand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:28:29 by mcanhand          #+#    #+#             */
/*   Updated: 2019/06/19 19:48:57 by mcanhand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_lst_to_str(t_list *lst);
int					create_node(void *str, size_t len, t_list **lst);
#endif
