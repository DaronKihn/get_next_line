/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 19:31:28 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/01 18:12:38 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	f_count_str(const char *s, char c)
{
	size_t	count;
	int		stat;

	count = 0;
	stat = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && stat == 0)
		{
			count++;
			stat = 1;
		}
		if (*s == c)
			stat = 0;
		s++;
	}
	return (count);
}

static	void	f_ind_count(const char *s, size_t *count, size_t *ind, char c)
{
	int		flag;

	flag = 0;
	while (flag == 0 && *(s + *ind))
	{
		while (*(s + *ind) == c)
			(*ind)++;
		while (*(s + *ind) != c)
		{
			(*count)++;
			(*ind)++;
		}
		flag = 1;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	ind;
	size_t	i;
	size_t	count;

	i = 0;
	ind = 0;
	if (!(s))
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char *) * (f_count_str(s, c) + 1))))
		return (NULL);
	while (i < f_count_str(s, c))
	{
		count = 0;
		f_ind_count(s, &count, &ind, c);
		if (!(res[i] = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
		res[i] = ft_strsub(s, (ind - count), count);
		i++;
	}
	res[i] = 0;
	return (res);
}
