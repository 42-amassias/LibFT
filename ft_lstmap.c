/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:22:28 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 03:30:32 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del_fun)(void *))
{
	t_list	*res;
	t_list	*node;

	res = NULL;
	while (list)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&res, del_fun);
			break ;
		}
		node->content = f(list->content);
		ft_lstadd_back(&res, node);
		list = list->next;
	}
	return (res);
}
