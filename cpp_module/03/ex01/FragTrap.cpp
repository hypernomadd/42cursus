#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = "FR4G-TP";
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
	std::cout << " Designation: FR4G-TP, Hyperion Robot, Class C.";
	std::cout << " Please adjust factory settings to meet your needs";
	std::cout << " before deployment." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->name = name;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
	std::cout << " Designation: " << this->name << ", Hyperion Robot, Class C.";
	std::cout << " Please adjust factory settings to meet your needs";
	std::cout << " before deployment." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh...";
	std::cout << " death." << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
	*this = fragTrap;
	return ;
}

FragTrap		&FragTrap::operator=(const FragTrap &fragTrap)
{
	this->hitPoints = fragTrap.hitPoints;
	this->maxHitPoints = fragTrap.maxHitPoints;
	this->energyPoints = fragTrap.energyPoints;
	this->maxEnergyPoints = fragTrap.maxEnergyPoints;
	this->level = fragTrap.level;
	this->name = fragTrap.name;
	this->meleeAttackDamage = fragTrap.meleeAttackDamage;
	this->rangedAttackDamage = fragTrap.rangedAttackDamage;
	this->armorDamageReduction = fragTrap.armorDamageReduction;
	return (*this);
}

void	FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " at range, causing ";
	std::cout << this->rangedAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{	
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " attacks ";
	std::cout << target;
	std::cout << " in melee, causing ";
	std::cout << this->meleeAttackDamage;
	std::cout << " points of damage!";
	std::cout << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{	
	int			dmg_taken;

	dmg_taken = (amount - this->armorDamageReduction);
	if (dmg_taken < 0)
		dmg_taken = 0;
	if (dmg_taken > this->hitPoints)
		dmg_taken = this->hitPoints;
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " taking ";
	std::cout << dmg_taken;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints -= dmg_taken;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int			hp_repaired;

	hp_repaired = amount;
	if (this->hitPoints + hp_repaired > this->maxHitPoints)
		hp_repaired = this->maxHitPoints - this->hitPoints;
	std::cout << "FR4G-TP ";
	std::cout << this->name;
	std::cout << " repaired of ";
	std::cout << hp_repaired;
	std::cout << " damage.";
	std::cout << std::endl;
	this->hitPoints += hp_repaired;
	return ;
}
	
void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int				nb;
	std::string		attacks[5] = {"Laser Inferno",
									"Gun Wizard",
									"Clap-In-The-Box",
									"Rubber Ducky",
									"One Shot Wonder"};

	if (this->energyPoints < 25)
	{
		std::cout << "FR4G-TP ";
		std::cout << this->name;
		std::cout << " don't have enough energy.";
		std::cout << std::endl;
	}
	else
	{
		nb = std::rand() % 5;
		std::cout << "FR4G-TP ";
		std::cout << this->name;
		std::cout << " attacks ";
		std::cout << target;
		std::cout << " with '";
		std::cout << attacks[nb];
		std::cout << "', causing ";
		std::cout << this->rangedAttackDamage * (nb * 5);
		std::cout << " points of damage!";
		std::cout << std::endl;
		this->energyPoints -= 25;
	}
	return ;
}
