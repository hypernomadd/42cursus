#include <cstdlib>
#include <iostream>

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"

int
main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "--- EXTRA ---" << std::endl;

	jim.getPolymorphed();
	joe.getPolymorphed();

	{
		Victim *jimByCopy = new Victim(jim);
		Peon *joeByCopy = new Peon(joe);

		delete jimByCopy;
		delete joeByCopy;
	}
	
	std::cout << "--- EXTRA2 ---" << std::endl;
	
	Sorcerer blank(robert);

	Victim franck(jim);
	Peon jean(joe);

	std::cout << blank << franck << jean;

	franck = jim;
	blank.polymorph(franck);
	franck.getPolymorphed();
	blank = robert;
	jean = joe;
	blank.polymorph(jean);
	jean.getPolymorphed();
	
	std::cout << "--- EXTRA END ---" << std::endl;

	return (EXIT_SUCCESS);
}
