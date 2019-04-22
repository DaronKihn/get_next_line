/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 18:24:01 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/24 19:54:25 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	if (*n == '\0')
		return (h);
	while (*(h + i) != '\0')
	{
		j = 0;
		while (*(n + j) == *(h + i + j))
		{
			if (*(n + j + 1) == '\0')
				return ((h + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
