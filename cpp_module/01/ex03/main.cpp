#include "ZombieHorde.hpp"

int			main(void)
{
	int i;
	std::cout << "Type a number of Zombies" << std::endl;
	while (!(std::cin >> i) || i <= 0)
		return (0);
	
	ZombieHorde horde = ZombieHorde(i);
	std::cout << "horde.announce():" << std::endl;
	horde.announce();
	return (0);
}
