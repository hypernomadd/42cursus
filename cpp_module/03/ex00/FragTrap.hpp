#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>

class FragTrap
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
	FragTrap(void);
	FragTrap(std::string name);
	~FragTrap(void);
	FragTrap(const FragTrap &fragTrap);
	FragTrap		&operator=(const FragTrap &fragTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			vaulthunter_dot_exe(std::string const &target);

};

#endif
