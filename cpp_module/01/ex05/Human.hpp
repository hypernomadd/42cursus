#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include "Brain.hpp"

class Human
{

private:
	const Brain	brain;

public:
	const Brain	getBrain(void);
	std::string identify(void);
};

#endif
