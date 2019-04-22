/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 22:30:47 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/01 18:08:55 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	if (size + 1 == 0)
		return (NULL);
	if (!(p = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(p, (size + 1));
	return (p);
}
