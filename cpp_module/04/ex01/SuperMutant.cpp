#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
        Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) :
        Enemy(other)
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant&
SuperMutant::operator=(const SuperMutant &other)
{
	Enemy::operator =(other);

	return (*this);
}

void
SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}
