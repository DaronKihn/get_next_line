/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <dkihn@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:11:19 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/01 16:13:40 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				n;
	long long		res;

	n = 1;
	res = 0;
	if (ft_strlen(str) >= 19 && ft_strcmp(str, "9223372036854775807") >= 0)
		return (-1);
	if (ft_strlen(str) >= 20 && ft_strcmp(str, "-9223372036854775808") >= 0)
		return (0);
	while (*str == '\v' || *str == '\f' || *str == '\r' ||
		*str == '\t' || *str == '\n' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			n = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * n);
}
