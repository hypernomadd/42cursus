#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{

protected:
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
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap		&operator=(const ClapTrap &clapTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

};

#endif
