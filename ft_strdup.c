/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 00:29:42 by amassias          #+#    #+#             */
/*   Updated: 2023/10/17 00:53:05 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	len;

	len = ft_strlen(str) + 1;
	cpy = malloc(len);
	if (cpy)
		ft_memcpy(cpy, str, len);
	return (cpy);
}
