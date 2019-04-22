/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:59:25 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/01 20:06:02 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;
	size_t				i;

	i = 0;
	s11 = s1;
	s22 = s2;
	while (i < n)
		if (*(s11 + i) != *(s22 + i))
			return (*(s11 + i) - *(s22 + i));
		else
			i++;
	return (0);
}
