/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 05:37:05 by amassias          #+#    #+#             */
/*   Updated: 2023/10/17 23:20:51 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	count_tokens(const char *str, char delim)
{
	unsigned long	token_count;

	token_count = 0;
	while (1)
	{
		while (*str && *str == delim)
			++str;
		if (*str == '\0')
			return (token_count);
		while (*str && *str != delim)
			++str;
		++token_count;
	}
}

char	*register_token(char **res_ptr, const char *str, char delim)
{
	char	*end_cpy;
	char	*end;
	long	size;

	while (*str && *str == delim)
		++str;
	end = (char *) str;
	while (*end && *end != delim)
		++end;
	size = end - str;
	*res_ptr = (char *) malloc(size + 1);
	end_cpy = end;
	end = *res_ptr;
	if (*res_ptr)
	{
		while (size--)
			*end++ = *str++;
		*end = '\0';
	}
	return (end_cpy);
}

// Steps :
// 1.   Skip first word if str[0] in charset
// 2.   Skip till char not in charset
// 3.   Register all words
//   1. If error, free all memory then exit
// 4.   Null the last element of array
char	**ft_split(char const *str, char delim)
{
	char			**res;
	long			token_count;
	unsigned long	res_index;

	token_count = count_tokens(str, delim);
	res = (char **) malloc(sizeof(char *) * (token_count + 1));
	if (!res)
		return (NULL);
	res[token_count] = NULL;
	res_index = 0;
	while (token_count--)
	{
		str = register_token(&res[res_index], str, delim);
		if (!res[res_index])
			break ;
		++res_index;
	}
	return (res);
}
