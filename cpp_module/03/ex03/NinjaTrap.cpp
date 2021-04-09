#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "NINJAAAAAAAAAAAAAAAAAAAAAA." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	std::cout << "NINJAAAAAAAAAAAAAAAAAAAAAA." << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJA DED." << std::endl;
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
	std::cout << "NINJ4-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void			NinjaTrap::meleeAttack(std::string const &target)
{	
	std::cout << "NINJ4-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " in melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << "Ninjaaa on CL4P-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << "Ninjaaa on NINJ4-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << "Ninjaaa on FR4G-TP " << trap.getName() << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << "Ninjaaa on SC4V-TP " << trap.getName() << std::endl;
	return ;
}
