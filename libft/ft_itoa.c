/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 18:03:12 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/01 18:14:58 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		proverka_otr(int n, int *otric)
{
	if (n < 0)
	{
		*otric = 1;
		n = -n;
	}
	return (n);
}

static	void	f_len(int n, int *len)
{
	int		numb;

	numb = n;
	if (numb == 0)
		(*len)++;
	while (numb)
	{
		(*len)++;
		numb = numb / 10;
	}
}

char			*ft_itoa(int n)
{
	int		len;
	char	*s;
	int		n2;
	int		otric;

	len = 0;
	n2 = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	otric = 0;
	f_len(n, &len);
	n2 = proverka_otr(n, &otric);
	if (otric)
		len++;
	if (!(s = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	s[len] = '\0';
	while ((--len) >= 0)
	{
		s[len] = n2 % 10 + '0';
		n2 = n2 / 10;
	}
	if (otric)
		s[0] = '-';
	return (s);
}
