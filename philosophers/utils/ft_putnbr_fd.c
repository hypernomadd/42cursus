/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/20 14:17:04 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 21:25:31 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static void		ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

static size_t	getlen(int num)
{
	size_t		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

void			ft_putnbr_fd(unsigned long n, int fd)
{
	char	line[11];
	size_t	i;

	i = getlen(n);
	line[i] = '\0';
	i--;
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (n > 0)
	{
		line[i] = '0' + (n % 10);
		n /= 10;
		i--;
	}
	ft_putstr_fd(line, fd);
}
