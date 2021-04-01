#include "Pony.hpp"

void		PonyOnTheHeap(void)
{
	Pony	*p;

	std::cout << "PonyOnTheHeap()" << std::endl;
	p = new Pony();
	p->setColor("Black");
	std::cout << "The pony is " << p->getColor() << std::endl;
	p->jump();
	p->jump();
	p->walk();
	delete(p);
	std::cout << "Ending PonyOnTheHeap()" << std::endl;
}

void		PonyOnTheStack(void)
{
	Pony	p;

	std::cout << "PonyOnTheStack()" << std::endl;
	std::cout << "The pony is " << p.getColor() << std::endl;
	p.walk();
	p.walk();
	p.walk();
	p.walk();
	p.walk();
	std::cout << "Ending PonyOnTheStack()" << std::endl;
}

int			main(void)
{
	std::cout << "Call PonyOnTheStack()" << std::endl;
	PonyOnTheStack();
	std::cout << "Out PonyOnTheStack()" << std::endl;
	std::cout << "Call PonyOnTheHeap()" << std::endl;
	PonyOnTheHeap();
	std::cout << "Out PonyOnTheHeap()" << std::endl;
}
