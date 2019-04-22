/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:59:08 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/03 16:38:24 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	unsigned long	i;
	unsigned long	n;

	i = 0;
	n = 0;
	while (*(s1 + i))
		i++;
	while (*(s2 + n))
	{
		*(s1 + i) = *(s2 + n);
		i++;
		n++;
	}
	*(s1 + i) = '\0';
	return (s1);
}
