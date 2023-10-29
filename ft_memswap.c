/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyamen <dyamen@student.42lehavre.fr        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:55:02 by amassias          #+#    #+#             */
/*   Updated: 2023/10/22 16:40:06 by dyamen           ###   ########.fr       */
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

	a = _a;
	b = _b;
	while (n--)
		swap(a++, b++);
}
