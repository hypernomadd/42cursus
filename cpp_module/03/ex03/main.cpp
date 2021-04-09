#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	FragTrap	*frgtrp;
	ScavTrap	*scvtrp;
	NinjaTrap	*nnjtrp;

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
	nnjtrp = new NinjaTrap("Victor");
	nnjtrp->rangedAttack("Hugo");	
	nnjtrp->meleeAttack("Hugo");	
	nnjtrp->takeDamage(30);
	nnjtrp->takeDamage(2);
	nnjtrp->takeDamage(200);
	nnjtrp->beRepaired(120);
	nnjtrp->ninjaShoebox(*nnjtrp);
	nnjtrp->ninjaShoebox(*scvtrp);
	nnjtrp->ninjaShoebox(*frgtrp);
	delete(frgtrp);
	delete(scvtrp);
	delete(nnjtrp);
	return (0);
}
