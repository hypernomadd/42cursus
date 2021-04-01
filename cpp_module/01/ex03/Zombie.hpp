#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

private:
	std::string	name;
	std::string	type;

public:
	Zombie(void);
	Zombie(std::string name, std::string type);
	void	announce(void);
	void	setName(std::string name);
	void	setType(std::string type);

};

#endif
