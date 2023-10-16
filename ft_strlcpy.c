/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:16:32 by amassias          #+#    #+#             */
/*   Updated: 2023/10/16 14:23:20 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	len;
	char			*dst;

	len = 0;
	dst = dest;
	while (*src && size > 1)
	{
		*dst++ = *src++;
		--size;
		++len;
	}
	while (size--)
		*dst++ = '\0';
	while (*src++)
		++len;
	return (len);
}
