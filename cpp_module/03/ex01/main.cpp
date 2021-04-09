#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	*frgtrp;
	ScavTrap	*scvtrp;

	srand((unsigned) time(0));
	frgtrp = new FragTrap("Bob");
	frgtrp->rangedAttack("Michel");	
	frgtrp->meleeAttack("Michel");	
	frgtrp->takeDamage(30);
	frgtrp->takeDamage(2);
	frgtrp->takeDamage(200);
	frgtrp->beRepaired(120);
	frgtrp->vaulthunter_dot_exe("Joe");
	frgtrp->vaulthunter_dot_exe("Joe");
	frgtrp->vaulthunter_dot_exe("Joe");
	frgtrp->vaulthunter_dot_exe("Joe");
	frgtrp->vaulthunter_dot_exe("Joe");
	delete(frgtrp);
	scvtrp = new ScavTrap("Raoul");
	scvtrp->rangedAttack("Fred");	
	scvtrp->meleeAttack("Fred");	
	scvtrp->takeDamage(30);
	scvtrp->takeDamage(2);
	scvtrp->takeDamage(200);
	scvtrp->beRepaired(120);
	scvtrp->challengeNewcomer();
	scvtrp->challengeNewcomer();
	scvtrp->challengeNewcomer();
	delete(scvtrp);
	return (0);
}
