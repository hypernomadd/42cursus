#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{

private :
	std::string		color;

public :

	Pony(void);
	~Pony(void);

	void			walk(void);
	void			jump(void);
	std::string		getColor(void);
	void			setColor(std::string c);
};

#endif
