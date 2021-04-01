#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	return ;
}

void		Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
	return ;
}

void		Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}

void		Zombie::setType(std::string type)
{
	this->type = type;
	return ;
}
