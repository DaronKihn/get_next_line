/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:34:04 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/01 18:58:15 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s2 = s;
	while (i < n)
	{
		if (*(s2 + i) == (unsigned char)c)
			return ((void *)s2 + i);
		i++;
	}
	return (NULL);
}
