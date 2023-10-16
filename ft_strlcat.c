/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:06:34 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 14:24:28 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*dst_cpy;
	const char		*src_cpy;
	unsigned int	remaining;
	unsigned int	dest_len;

	dst_cpy = dest;
	src_cpy = src;
	remaining = size;
	while (remaining-- && *dst_cpy)
		dst_cpy++;
	dest_len = dst_cpy - dest;
	remaining = size - dest_len;
	if (!remaining)
		return (dest_len + ft_strlen(src_cpy));
	while (*src_cpy)
	{
		if (remaining != 1)
		{
			*dst_cpy++ = *src_cpy;
			--remaining;
		}
		src_cpy++;
	}
	*dst_cpy = '\0';
	return (dest_len + (src_cpy - src));
}
