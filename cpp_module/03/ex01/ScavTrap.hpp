#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
		
private:
	int				hitPoints;
	int				maxHitPoints;
	int				energyPoints;
	int				maxEnergyPoints;
	int				level;
	std::string		name;
	int				meleeAttackDamage;
	int				rangedAttackDamage;
	int				armorDamageReduction;


public:
	ScavTrap(void);
	ScavTrap(std::string name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap		&operator=(const ScavTrap &scavTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			challengeNewcomer(void);

};

#endif
