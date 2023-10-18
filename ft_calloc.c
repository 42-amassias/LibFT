/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:01:26 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 02:18:40 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <errno.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sz;

	sz = nmemb * size;
	if (nmemb == 0)
		return (malloc(0));
	if ((size_t)(-1 / nmemb) < size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ptr = malloc(sz);
	if (ptr)
		ft_bzero(ptr, sz);
	return (ptr);
}
