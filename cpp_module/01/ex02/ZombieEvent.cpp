#include <cstdlib>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->type = "cool";
	return ;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie		*ZombieEvent::randomChump(void)
{
	std::string	names[4] = {"Didier", "Georges", "Michel", "David"};

	srand((unsigned) time(0));
	return (new Zombie(names[std::rand() % 4], this->type));
}
