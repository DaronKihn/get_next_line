/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:57:27 by dkihn             #+#    #+#             */
/*   Updated: 2019/01/24 16:12:25 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (*(s11 + i) && *(s22 + i) && (*(s11 + i) == *(s22 + i)))
		i++;
	if (*(s11 + i) && *(s22 + i))
		return (*(s11 + i) - *(s22 + i));
	if (*(s11 + i))
		return (*(s11 + i));
	if (*(s22 + i))
		return (-*(s22 + i));
	return (0);
}
