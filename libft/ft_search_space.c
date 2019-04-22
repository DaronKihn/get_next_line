/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:07:09 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/03 16:29:22 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_search_space(char const *str)
{
	char	*s;
	size_t	ind;

	ind = 0;
	s = (char *)str;
	while (*(s + ind) && *(s + ind) != ' ')
		ind++;
	while (*(s + ind) && *(s + ind) == ' ')
		ind++;
	if (*(s + ind) == '\0')
		return (NULL);
	return (s + ind);
}
