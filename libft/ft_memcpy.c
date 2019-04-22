/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:10:16 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/01 18:32:28 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	char		*dst2;
	const char	*src2;

	dst2 = dst;
	src2 = src;
	i = 0;
	while (i < n)
	{
		*(dst2 + i) = *(src2 + i);
		i++;
	}
	return (dst);
}
