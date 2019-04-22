/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 16:57:38 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/03 16:58:25 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list*k;

	if (!(k = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		k->content = NULL;
		k->content_size = 0;
	}
	else
	{
		if (!(k->content = (void*)malloc(content_size)))
			return (NULL);
		k->content = ft_memcpy(k->content, content, content_size);
		k->content_size = content_size;
	}
	k->next = NULL;
	return (k);
}
