/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:06:34 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 14:27:51 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(void *dest, const void *src, size_t size)
{
	void		*dst_cpy;
	const void	*src_cpy;
	size_t		remaining;
	size_t		dest_len;

	dst_cpy = dest;
	src_cpy = src;
	remaining = size;
	while (remaining-- && *(char *)dst_cpy)
		dst_cpy++;
	dest_len = dst_cpy - dest;
	remaining = size - dest_len;
	if (!remaining)
		return (dest_len + ft_strlen(src_cpy));
	while (*(char *)src_cpy)
	{
		if (remaining != 1)
		{
			*(char *)dst_cpy++ = *(char *)src_cpy;
			--remaining;
		}
		src_cpy++;
	}
	*(char *)dst_cpy = '\0';
	return (dest_len + (src_cpy - src));
}
