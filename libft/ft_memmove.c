/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:49:38 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/01 18:29:43 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dst2;
	const char	*src2;

	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (src2 > dst2)
		while (i < len)
		{
			*(dst2 + i) = *(src2 + i);
			i++;
		}
	else
		while (len)
		{
			len--;
			*(dst2 + len) = *(src2 + len);
		}
	return (dst);
}
