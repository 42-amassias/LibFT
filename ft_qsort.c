/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amassias <amassias@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 07:52:05 by amassias          #+#    #+#             */
/*   Updated: 2023/10/23 08:10:16 by amassias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*partition(void *base, size_t nmemb, size_t size, t_comparator cmp)
{
	void	*pivot;
	int		r;

	pivot = (char *)base + (nmemb - 1) * size;
	while (pivot > base)
	{
		r = cmp(base, pivot);
		if (r > 0)
		{
			ft_memswap(base, pivot, size);
			pivot -= size;
			ft_memswap(base, pivot, size);
		}
		else
			base += size;
	}
	return (pivot);
}

void	ft_qsort(void *base, size_t nmemb, size_t size, t_comparator cmp)
{
	void	*pivot;
	size_t	len;

	if (nmemb < 2)
		return ;
	pivot = partition(base, nmemb, size, cmp);
	len = (char *)pivot - (char *)base;
	len /= size;
	ft_qsort(base, len, size, cmp);
	ft_qsort((char *)pivot + size, nmemb - len - 1, size, cmp);
}
