/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 15:49:26 by dkihn             #+#    #+#             */
/*   Updated: 2019/04/13 18:05:26 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			f_line(char **data, char **line)
{
	char	*tmp;
	int		i;
	int		l;

	i = -1;
	l = 0;
	tmp = ft_strdup(*data);
	while (tmp[++i] != '\n' && tmp[i])
		l++;
	*line = ft_strnew(l);
	ft_strncpy(*line, *data, l);
	ft_strdel(data);
	if (l < (int)ft_strlen(tmp))
		*data = ft_strdup(&tmp[l + 1]);
	else
		*data = NULL;
	ft_strdel(&tmp);
}

static void			f_join(char **data, char *buff)
{
	char *tmp;

	tmp = ft_strnew(ft_strlen(*data) + ft_strlen(buff));
	ft_strcpy(tmp, *data);
	ft_strcat(tmp, buff);
	ft_strdel(data);
	*data = tmp;
}

static	t_fdlist	*f_check_file(t_fdlist **head, int fd)
{
	t_fdlist	*tmp;

	tmp = *head;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	if (!(tmp = (t_fdlist*)malloc(sizeof(t_fdlist))))
		return (NULL);
	tmp->fd = fd;
	tmp->data = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

static	void		delete_list(t_fdlist **head, int fd)
{
	t_fdlist	*tmp;
	t_fdlist	*prev;

	prev = NULL;
	tmp = *head;
	while (tmp->fd != fd)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	if (prev)
	{
		prev->next = tmp->next;
		free(tmp);
	}
	else
	{
		*head = tmp->next;
		free(tmp);
	}
}

int					get_next_line(const int fd, char **line)
{
	static t_fdlist	*head;
	t_fdlist		*this;
	char			buff[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || !line || read(fd, buff, 0) < 0)
		return (-1);
	this = f_check_file(&head, fd);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		f_join(&this->data, buff);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !this->data)
	{
		delete_list(&head, this->fd);
		return (0);
	}
	f_line(&this->data, line);
	return (1);
}
