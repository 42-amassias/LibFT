/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:55:02 by amassias          #+#    #+#             */
/*   Updated: 2023/10/20 17:57:52 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(unsigned char *a, unsigned char *b)
{
	unsigned char	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_memswap(void *_a, void *_b, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	c;

	a = _a;
	b = _b;
	while (n--)
		swap(a++, b++);
}
