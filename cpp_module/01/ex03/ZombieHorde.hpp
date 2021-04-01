#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class	ZombieHorde
{

private:
	int		nb;
	Zombie	*zombies;

public:
	ZombieHorde(int n);
	void	announce(void);
	
};

#endif
