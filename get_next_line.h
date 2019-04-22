/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkihn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:17:10 by dkihn             #+#    #+#             */
/*   Updated: 2019/04/14 16:22:12 by dkihn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_fdlist
{
	char			*data;
	int				fd;
	struct s_fdlist	*next;
}				t_fdlist;

int				get_next_line(const int fd, char **line);

#endif
