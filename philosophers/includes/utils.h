/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:50:30 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 20:37:45 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(const char *str);
int		ft_strlen(const char *str);
int		ft_atoi(const char *nptr);
int		ft_isdigit(int c);
void	ft_putnbr_fd(unsigned long n, int fd);

#endif
