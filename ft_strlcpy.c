/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:16:32 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 14:28:18 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(void *dest, const void *src, size_t size)
{
	size_t	len;
	void	*dst;

	len = 0;
	dst = dest;
	while (*(char *)src && size > 1)
	{
		*(char *)dst++ = *(char *)src++;
		--size;
		++len;
	}
	while (size--)
		*(char *)dst++ = '\0';
	while (*(char *)src++)
		++len;
	return (len);
}
