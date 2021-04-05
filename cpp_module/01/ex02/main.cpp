#include "Zombie.hpp"
#include "ZombieEvent.hpp"

/*
** Allocated on the heap because ZombieEvent::randomChump() and
** ZombieEvent::newZombie returns a (Zombie *)
*/

int			main(void)
{
	Zombie		*zombie1;
	Zombie		*zombie2;
	ZombieEvent	event;

	zombie1 = event.randomChump();
	zombie1->announce();
	zombie1->tellname();
	delete (zombie1); // not needed anymore
	std::cout << " byeeeeeee....." << std::endl;
	event.setZombieType("not cool");
	zombie2 = event.newZombie("Hugo");
	zombie2->announce();
	zombie2->tellname();
	delete (zombie2); // not needed anymore
	std::cout << " byeeeeeee....." << std::endl;
	return (0);
}
