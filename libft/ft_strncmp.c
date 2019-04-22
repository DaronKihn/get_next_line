/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 20:21:13 by dkihn             #+#    #+#             */
/*   Updated: 2019/01/24 16:15:08 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (*(s11 + i) && *(s22 + i) && (*(s11 + i) == *(s22 + i)) && (i < n))
		i++;
	if (*(s11 + i) && *(s22 + i) && (i < n))
		return (*(s11 + i) - *(s22 + i));
	if (*(s11 + i) && (i < n))
		return (*(s11 + i));
	if (*(s22 + i) && (i < n))
		return (-*(s22 + i));
	return (0);
}
