/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyamen <dyamen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:37:05 by amassias          #+#    #+#             */
/*   Updated: 2023/10/22 16:19:47 by dyamen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strings(const char *str, char c)
{
	size_t	string_count;

	string_count = 0;
	while (*str)
	{
		if (*str == c)
		{
			++str;
			continue ;
		}
		while (*str && *str != c)
			str++;
		string_count++;
	}
	return (string_count);
}

static const char	*dup_until_c(char **dst, const char *src, char c)
{
	size_t	len;

	while (*src == c)
		src++;
	len = 0;
	while (src[len] && src[len] != c)
		len++;
	*dst = (char *) malloc(sizeof(char) * (len + 1));
	if (*dst == NULL)
		return (NULL);
	ft_memcpy(*dst, src, len);
	(*dst)[len] = '\0';
	src += len + 1;
	return (src);
}

static void	free_strs(char ***strs, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free((*strs)[i++]);
	free(*strs);
	*strs = NULL;
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	size_t	string_count;
	size_t	i;

	string_count = count_strings(s, c);
	strs = (char **) malloc(sizeof(char *) * (string_count + 1));
	if (strs)
	{
		strs[string_count] = NULL;
		i = 0;
		while (i < string_count)
		{
			s = dup_until_c(strs + i++, s, c);
			if (!s)
			{
				free_strs(&strs, i - 1);
				return (NULL);
			}
		}
	}
	return (strs);
}
