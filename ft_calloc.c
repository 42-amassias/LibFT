/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:01:26 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 23:26:53 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <errno.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	if ((size_t)(-1 / nmemb) < size)
	{
		errno = ENOMEM;
		return (NULL);
	}
	return (malloc(nmemb * size));
}
