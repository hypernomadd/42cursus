/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   monitoring.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:50:23 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 20:49:33 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_two.h"

void	*is_full(void *tmp_ph)
{
	t_philo	*ph;
	int		i;

	ph = (t_philo *)tmp_ph;
	while (ph[0].pd->state != FULL && ph[0].pd->state != DIED)
	{
		i = 0;
		while (i < ph[0].pd->num_of_philo && ph[0].pd->state != FULL &&
		ph[0].pd->state != DIED)
		{
			if (ph[i].pd->num_of_meals ==
			(ph[0].pd->num_of_philo * ph[0].pd->num_of_must_eat))
			{
				ph[i].pd->state = FULL;
				sem_wait(ph[i].sems->s_write);
				ft_putstr("All philosophers is full\n");
				sem_post(ph[i].sems->s_write);
			}
			i++;
		}
	}
	return (NULL);
}

void	*is_die(void *tmp_ph)
{
	t_philo			*ph;

	ph = (t_philo *)tmp_ph;
	while (ph->pd->state != DIED && ph->pd->state != FULL)
	{
		if (get_time() - ph->last_meal > ph->pd->time_to_die)
		{
			messages(" is died\n", ph);
			ph->pd->state = DIED;
		}
	}
	return (NULL);
}
