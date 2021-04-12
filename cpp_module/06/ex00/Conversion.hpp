#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>

class Conversion
{

private:
	std::string input;

	Conversion(void);

public:
	~Conversion(void);
	Conversion(const Conversion &conversion);
	Conversion		&operator=(const Conversion &conversion);

	Conversion(std::string input);
	operator char(void) const;
	operator int(void) const;
	operator double(void) const;
	operator float(void) const;

	class ImpossibleException: public std::exception
	{
	
	public:
			ImpossibleException(void);
			virtual ~ImpossibleException(void) throw();
			ImpossibleException(const ImpossibleException &e);
			ImpossibleException		&operator=(const ImpossibleException &e);
			
			virtual const char *what(void) const throw();
	};

	class NonDisplayableException: public std::exception
	{
	
	public:
			NonDisplayableException(void);
			virtual ~NonDisplayableException(void) throw();
			NonDisplayableException(const NonDisplayableException &e);
			NonDisplayableException	&operator=
(const NonDisplayableException &e);
			
			virtual const char *what(void) const throw();
	};
};

#endif
