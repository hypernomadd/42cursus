#include <sstream>
#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream s;
	
	s << this; // get object from the pointer 'this'
	this->address = s.str();
	return ;
}

std::string		Brain::identify(void) const
{
	std::cout << "Hi, I am brain!" << std::endl;
	return (this->address);
}
