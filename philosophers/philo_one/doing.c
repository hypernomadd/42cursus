/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doing.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:42:48 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 20:43:04 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_one.h"

void	eating(t_philo *ph)
{
	pthread_mutex_lock(ph->m_right_fork);
	pthread_mutex_lock(ph->m_left_fork);
	messages(" has take a fork\n", ph);
	ph->last_meal = get_time();
	messages(" is eating\n", ph);
	usleep(ph->pd->time_to_eat);
	pthread_mutex_lock(&ph->mutex->m_num_of_meals);
	ph->pd->num_of_meals++;
	pthread_mutex_unlock(&ph->mutex->m_num_of_meals);
	pthread_mutex_unlock(ph->m_left_fork);
	pthread_mutex_unlock(ph->m_right_fork);
}
