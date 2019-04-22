/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:57:51 by dkihn             #+#    #+#             */
/*   Updated: 2019/01/24 16:19:15 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	ind;

	ind = 0;
	p = NULL;
	if (!s || !len)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (s[start + ind] && len)
		{
			p[ind] = s[start + ind];
			ind++;
			len--;
		}
		p[ind] = '\0';
	}
	else
		return (NULL);
	return (p);
}
