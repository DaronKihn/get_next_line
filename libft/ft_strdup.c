/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:28:57 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/19 17:39:01 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*p;
	size_t	size;
	int		i;

	i = 0;
	if (!ft_strlen(src))
		return (NULL);
	size = ft_strlen(src) + 1;
	if (!(p = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = src[i];
	return (p);
}
