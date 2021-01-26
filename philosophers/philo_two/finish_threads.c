/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finish_threads.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:47:33 by chshin            #+#    #+#             */
/*   Updated: 2021/01/26 20:47:51 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_two.h"

void		finish_semaphores(t_philo *ph, t_sem *sems)
{
	sem_unlink("forks");
	sem_unlink("write");
	sem_unlink("meal");
	sem_close(sems->s_meal);
	sem_close(sems->s_forks);
	sem_close(sems->s_write);
	free(ph);
}
