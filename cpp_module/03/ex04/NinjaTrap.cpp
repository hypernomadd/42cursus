#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = "NinjaTrap";
	this->type = "NINJ4-TP";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "I'm a robot ninja..." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->type = "NINJ4-TP";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "I'm a robot ninja..." << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJA DEAD." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap)
{
	*this = ninjaTrap;
	return ;
}

NinjaTrap			&NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{	
	this->hitPoints = ninjaTrap.hitPoints;
	this->maxHitPoints = ninjaTrap.maxHitPoints;
	this->energyPoints = ninjaTrap.energyPoints;
	this->maxEnergyPoints = ninjaTrap.maxEnergyPoints;
	this->level = ninjaTrap.level;
	this->name = ninjaTrap.name;
	this->meleeAttackDamage = ninjaTrap.meleeAttackDamage;
	this->rangedAttackDamage = ninjaTrap.rangedAttackDamage;
	this->armorDamageReduction = ninjaTrap.armorDamageReduction;
	return (*this);
}

void			NinjaTrap::rangedAttack(std::string const &target)
{
	says();
	std::cout << "NinjaTrap style attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void			NinjaTrap::meleeAttack(std::string const &target)
{	
	says();
	std::cout << "NinjaTrap style attacks ";
	std::cout << target;
	std::cout << " in melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	says();
	std::cout << "Ninjaaa on CL4P-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	says();
	std::cout << "Ninjaaa on NINJ4-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	says();
	std::cout << "Ninjaaa on FR4G-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	says();
	std::cout << "Ninjaaa on SC4V-TP " << trap.getName() << std::endl;
	return ;
}
