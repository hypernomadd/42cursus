#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "new Pony" << std::endl;
	this->color = "White";
	return ;
}

Pony::~Pony(void)
{
	std::cout << "deleting Pony" << std::endl;
	return ;
}

void		Pony::walk(void)
{
	std::cout << "walk" << std::endl;
	return ;
}

void		Pony::jump(void)
{
	std::cout << "jump" << std::endl;
	return ;
}

std::string Pony::getColor(void)
{
	return (this->color);
}

void		Pony::setColor(std::string c)
{
	this->color = c;
	return ;
}
