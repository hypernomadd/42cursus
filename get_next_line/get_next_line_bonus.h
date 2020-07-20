/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:06:52 by chshin            #+#    #+#             */
/*   Updated: 2020/07/20 17:29:59 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>

# define GNL_READ 1
# define GNL_END_REACHED 0
# define GNL_ERROR -1

typedef struct		s_gnl_holder
{
	int				start;
	int				reached;
	unsigned char	buffer[BUFFER_SIZE];
	size_t			byte_read;
	size_t			offset;
	unsigned char	*stored;
	size_t			stored_length;
}					t_gnl_holder;

int					get_next_line(int fd, char **line);
void				*ft_memcpy(void *dst, const void *src, size_t n);

#endif
