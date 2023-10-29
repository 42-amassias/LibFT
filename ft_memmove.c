/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:10:53 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 00:05:35 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void	*dst_cpy;

	if (!dst && !src)
		return (NULL);
	dst_cpy = dst;
	if (dst > src && (size_t)(dst - src) < n)
	{
		dst += n - 1;
		src += n - 1;
		while (n--)
			*(char *)dst-- = *(char *)src--;
	}
	else
		while (n--)
			*(char *)dst++ = *(char *)src++;
	return (dst_cpy);
}
