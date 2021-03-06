/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doing.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:10:50 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 20:55:11 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_three.h"

void	eating(t_philo *ph)
{
	sem_wait(ph->sems->s_forks);
	messages(" has take a fork\n", ph);
	messages(" is eating\n", ph);
	ph->last_meal = get_time();
	usleep(ph->pd->time_to_eat);
	ph->pd->num_of_meals++;
	sem_post(ph->sems->s_meal);
	sem_post(ph->sems->s_forks);
}
