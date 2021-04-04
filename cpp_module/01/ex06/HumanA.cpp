#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : A_weapon(weapon)
{
	this->name = name;
	return ;
}

void		HumanA::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with his ";
	std::cout << this->A_weapon.getType() << std::endl;
	return ;
}
