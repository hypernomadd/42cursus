#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int		main(void)
{
	FragTrap	*frgtrp;
	ScavTrap	*scvtrp;
	NinjaTrap	*nnjtrp;
	SuperTrap	*sprtrp;

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
	std::cout << std::endl;
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
	std::cout << std::endl;
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
	std::cout << std::endl;
	sprtrp = new SuperTrap("Bernard");
	sprtrp->rangedAttack("Fred");
	sprtrp->meleeAttack("Fred");
	sprtrp->takeDamage(30);
	sprtrp->takeDamage(2);
	sprtrp->takeDamage(200);
	sprtrp->beRepaired(120);
	sprtrp->vaulthunter_dot_exe("Joe");
	sprtrp->ninjaShoebox(*nnjtrp);
	std::cout << std::endl;
	delete(frgtrp);
	delete(scvtrp);
	delete(nnjtrp);
	delete(sprtrp);
	return (0);
}
