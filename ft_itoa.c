/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:26:44 by amassias          #+#    #+#             */
/*   Updated: 2023/10/17 22:50:45 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	itoa(int _n, int len, char *out)
{
	long	n;

	n = _n;
	if (n < 0)
	{
		n = -n;
		*out++ = '-';
		--len;
	}
	out[len] = '\0';
	while (len--)
	{
		out[len] = '0' + n % 10;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	cpy;
	int		len;
	char	*str;

	cpy = n;
	len = 1;
	if (cpy < 0)
	{
		cpy = -cpy;
		++len;
	}
	while (cpy > 9)
	{
		cpy /= 10;
		++len;
	}
	str = (char *) malloc(len + 1);
	if (str)
		itoa(n, len, str);
	return (str);
}
