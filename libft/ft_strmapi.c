/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:29:14 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/19 20:27:29 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			p[ind] = (*f)(ind, s[ind]);
			ind++;
		}
		p[ind] = '\0';
	}
	else
		return (NULL);
	return (p);
}
