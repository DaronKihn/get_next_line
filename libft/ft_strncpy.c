/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:27:56 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/02 15:52:26 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((size_t)ft_strlen(src) < len)
	{
		while (i < (size_t)ft_strlen(src))
		{
			*(dst + i) = *(src + i);
			i++;
		}
		while (i < len)
		{
			*(dst + i) = '\0';
			i++;
		}
	}
	else
		while (i < len)
		{
			*(dst + i) = *(src + i);
			i++;
		}
	return (dst);
}
