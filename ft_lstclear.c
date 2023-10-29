/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:14:48 by amassias          #+#    #+#             */
/*   Updated: 2023/10/29 17:21:32 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del_fun)(void *))
{
	t_list	*l;
	t_list	*node;

	l = *list;
	while (l)
	{
		node = l;
		l = node->next;
		ft_lstdelone(node, del_fun);
	}
	*list = NULL;
}
