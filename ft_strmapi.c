/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:51:37 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 01:25:19 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	res = (char *) malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	i = 0;
	while (i < len)
	{
		res[i] = f(i, *s++);
		++i;
	}
	return (res);
}
