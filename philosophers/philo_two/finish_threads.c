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
