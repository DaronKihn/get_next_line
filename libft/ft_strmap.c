/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 18:05:36 by dkihn             #+#    #+#             */
/*   Updated: 2019/01/24 16:14:12 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*p;
	unsigned int	ind;

	ind = 0;
	p = NULL;
	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (p)
	{
		while (s[ind])
		{
			p[ind] = (*f)(s[ind]);
			ind++;
		}
		p[ind] = '\0';
	}
	else
		return (NULL);
	return (p);
}
