/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:14:55 by amassias          #+#    #+#             */
/*   Updated: 2023/10/18 00:29:48 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	char	*trimmed;
	size_t	len;

	while (*str && ft_strrchr(set, *str))
		++str;
	len = ft_strlen(str);
	while (str[len - 1] && ft_strrchr(set, str[len - 1]))
		--len;
	trimmed = malloc(len + 1);
	if (trimmed)
	{
		ft_memcpy(trimmed, str, len);
		trimmed[len] = '\0';
	}
	return (trimmed);
}
