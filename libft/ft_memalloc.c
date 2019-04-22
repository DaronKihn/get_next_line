/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 16:52:38 by dkihn             #+#    #+#             */
/*   Updated: 2018/12/19 20:44:11 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	p = NULL;
	p = (void *)malloc(sizeof(void) * size);
	if (p)
	{
		ft_bzero(p, size);
	}
	else
		return (NULL);
	return (p);
}
