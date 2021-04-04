#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

void		HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->B_weapon->getType() << std::endl;
	return ;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->B_weapon = &weapon;
	return ;
}
