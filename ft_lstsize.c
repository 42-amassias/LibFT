/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:05:48 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 03:07:25 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *list)
{
	t_list	**list_ptr;
	int		size;

	list_ptr = &list;
	size = 0;
	while (*list_ptr)
	{
		++size;
		list_ptr = &(*list_ptr)->next;
	}
	return (size);
}
