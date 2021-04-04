#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	
private:
	std::string address;

public:
	Brain(void);
	std::string identify(void) const;

};

#endif
