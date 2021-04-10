#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Initializing ClapTrap." << std::endl;
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->level = 0;
	this->name = "ClapTrap";
	this->type = "CL4P-TP";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Initializing ClapTrap." << std::endl;
	this->hitPoints = 0;
	this->maxHitPoints = 0;
	this->energyPoints = 0;
	this->maxEnergyPoints = 0;
	this->name = name;
	this->type = "CL4P-TP";
	this->meleeAttackDamage = 0;
	this->rangedAttackDamage = 0;
	this->armorDamageReduction = 0;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Deleting ClapTrap." << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	*this = clapTrap;
	return ;
}

ClapTrap		&ClapTrap::operator=(const ClapTrap &clapTrap)
{
	this->hitPoints = clapTrap.hitPoints;
	this->maxHitPoints = clapTrap.maxHitPoints;
	this->energyPoints = clapTrap.energyPoints;
	this->maxEnergyPoints = clapTrap.maxEnergyPoints;
	this->level = clapTrap.level;
	this->name = clapTrap.name;
	this->meleeAttackDamage = clapTrap.meleeAttackDamage;
	this->rangedAttackDamage = clapTrap.rangedAttackDamage;
	this->armorDamageReduction = clapTrap.armorDamageReduction;
	return (*this);
}

std::ostream	&ClapTrap::says()
{
	return (std::cout << "<" << this->type << "-" << this->name << "> ");
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	says();
	std::cout << "attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{	
	says();
	std::cout << "attacks ";
	std::cout << target;
	std::cout << " in melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{	
	int			dmg_taken;

	dmg_taken = (amount - this->armorDamageReduction);
	if (dmg_taken < 0)
		dmg_taken = 0;
	if (dmg_taken > this->hitPoints)
		dmg_taken = this->hitPoints;
	says();
	std::cout << "taking ";
	std::cout << dmg_taken;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints -= dmg_taken;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int			hp_repaired;

	hp_repaired = amount;
	if (this->hitPoints + hp_repaired > this->maxHitPoints)
		hp_repaired = this->maxHitPoints - this->hitPoints;
	says();
	std::cout << "repaired of ";
	std::cout << hp_repaired;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints += hp_repaired;
	return ;
}
