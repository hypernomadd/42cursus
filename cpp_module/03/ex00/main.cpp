#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	*frgtrp;

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
	return (0);
}
