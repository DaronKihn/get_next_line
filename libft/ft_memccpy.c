/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:05:03 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/01 18:30:18 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,\
					size_t n)
{
	size_t				i;
	unsigned char		*dst2;
	const unsigned char	*src2;
	int					flag;

	flag = 0;
	i = 0;
	dst2 = dst;
	src2 = src;
	while (i < n)
	{
		*(dst2 + i) = *(src2 + i);
		if (*(src2 + i) == (unsigned char)c)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 1)
		return (dst + i + 1);
	return (NULL);
}
