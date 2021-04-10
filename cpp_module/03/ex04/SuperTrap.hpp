#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{

public:
	SuperTrap(void);
	SuperTrap(std::string name);
	~SuperTrap(void);
	SuperTrap(const SuperTrap &superTrap);
	SuperTrap		&operator=(const SuperTrap &superTrap);
	void			rangedAttack(std::string const &target);
	void			meleeAttack(std::string const &target);
};

#endif
