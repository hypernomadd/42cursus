#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = "SuperTrap";
	this->type = "SUP3R-TP";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "I am SUP3R-TP!!!!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->name = name;
	this->type = "SUP3R-TP";
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "I am SUP3R-TP!!!!" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "Sadly, this is the end for SUP3R-TP" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
	*this = superTrap;
	return ;
}

SuperTrap		&SuperTrap::operator=(const SuperTrap &superTrap)
{
	this->hitPoints = superTrap.hitPoints;
	this->maxHitPoints = superTrap.maxHitPoints;
	this->energyPoints = superTrap.energyPoints;
	this->maxEnergyPoints = superTrap.maxEnergyPoints;
	this->level = superTrap.level;
	this->name = superTrap.name;
	this->meleeAttackDamage = superTrap.meleeAttackDamage;
	this->rangedAttackDamage = superTrap.rangedAttackDamage;
	this->armorDamageReduction = superTrap.armorDamageReduction;
	return (*this);
}

void			SuperTrap::rangedAttack(std::string const &target)
{
	return (FragTrap::rangedAttack(target));
}

void			SuperTrap::meleeAttack(std::string const &target)
{	
	return (NinjaTrap::meleeAttack(target));
}