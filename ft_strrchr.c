/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:50:24 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 02:04:06 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*r;

	r = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			r = s;
		++s;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		r = s;
	return ((char *) r);
}
