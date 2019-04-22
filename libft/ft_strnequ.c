/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:50:11 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/19 20:25:50 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[ind] && s2[ind] && (ind < n))
	{
		if (s1[ind] == s2[ind])
			ind++;
		else
			return (0);
	}
	return (1);
}
