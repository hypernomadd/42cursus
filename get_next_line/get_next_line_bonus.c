/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:16:54 by chshin            #+#    #+#             */
/*   Updated: 2020/07/20 15:20:41 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int
	get_struct(t_gnl_holder *holder, int force, int return_value)
{
	if (!(holder->start == 1 && !force))
	{
		holder->start = 1;
		holder->reached = 0;
		holder->offset = BUFFER_SIZE;
		holder->stored = NULL;
		holder->stored_length = 0;
	}
	return (return_value);
}

static unsigned char
	*get_save(t_gnl_holder *holder, int force)
{
	unsigned char c;
	unsigned char *new;

	c = holder->buffer[holder->offset];
	holder->offset += 1;
	new = malloc((holder->stored_length + 1) * sizeof(char));
	if (!new)
		return (NULL);
	if (holder->stored != NULL)
	{
		ft_memcpy(new, holder->stored, holder->stored_length);
		free(holder->stored);
	}
	if (c == '\n' || force)
	{
		new[holder->stored_length] = '\0';
		holder->stored = NULL;
		holder->stored_length = 0;
		return (new);
	}
	new[holder->stored_length] = c;
	holder->stored_length += 1;
	holder->stored = new;
	return (NULL);
}

static int
	get_read(t_gnl_holder *holder, char **return_line)
{
	unsigned char	*line;
	int				force;

	while (holder->offset + 1 < BUFFER_SIZE + 1)
	{
		force = holder->offset >= holder->byte_read;
		line = get_save(holder, force);
		if (line != NULL)
		{
			if (force)
				holder->reached = 1;
			*return_line = (char *)line;
			return (1);
		}
	}
	return (0);
}

int
	get_next_line(int fd, char **line)
{
	static t_gnl_holder holders[OPEN_MAX];
	t_gnl_holder		*holder;

	if (line == NULL || BUFFER_SIZE == 0 || fd < 0)
		return (GNL_ERROR);
	*line = NULL;
	holder = (holders + fd);
	get_struct(holder, 0, 1);
	while (1)
	{
		if (holder->offset == BUFFER_SIZE)
		{
			holder->byte_read = read(fd, holder->buffer, BUFFER_SIZE);
			holder->offset = 0;
		}
		if (holder->byte_read == (size_t)-1)
			return (GNL_ERROR);
		if (get_read(holder, line))
		{
			if (holder->byte_read == 0 || holder->reached)
				return (get_struct(holder, 1, GNL_END_REACHED));
			return (GNL_READ);
		}
	}
}
