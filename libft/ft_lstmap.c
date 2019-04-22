/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 14:12:29 by dkihn             #+#    #+#             */
/*   Updated: 2019/03/03 16:34:59 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*new_start;
	t_list	*lst_iter;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	new_start = new;
	lst_iter = lst->next;
	while (lst_iter)
	{
		tmp = f(lst_iter);
		new->next = ft_lstnew(tmp->content, tmp->content_size);
		if (!new->next)
			return (NULL);
		new = new->next;
		lst_iter = lst_iter->next;
	}
	return (new_start);
}
