/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 18:45:50 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/01 18:15:54 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*h;
	char		*n;
	size_t		i;
	size_t		j;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (*n == '\0')
		return (h);
	while (*(h + i) != '\0' && (i < len))
	{
		j = 0;
		while (*(h + i + j) == *(n + j) && ((j + i) < len))
		{
			if (*(n + j + 1) == '\0')
				return ((h + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
