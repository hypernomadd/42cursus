#include <iostream>
#include <sstream>
#include <cmath>
#include "Conversion.hpp"

void		printInt(Conversion &conv)
{
	int d;

	try
	{
		d = static_cast<int>(conv);	
		std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printChar(Conversion &conv)
{
	char c;

	try
	{
		c = static_cast<char>(conv);
		std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printFloat(Conversion &conv)
{
	float f;
	
	try
	{
		f = static_cast<float>(conv);
		std::cout << f;
		if (fabs(f - round(f)) < 0.0001)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

void		printDouble(Conversion &conv)
{
	double d;

	try
	{
		d = static_cast<double>(conv);
		std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

int			main(int argc, char *argv[])
{
	Conversion *conv;

	(void)argc;
	if (argc != 2)
	{
		std::cerr << "usage: " << argv[0] << " value" << std::endl;
		return (0);
	}
	conv = new Conversion(argv[1]);
	std::cout << "char: ";
	printChar(*conv);
	std::cout << "int: ";
	printInt(*conv);
	std::cout << "float: ";
	printFloat(*conv);
	std::cout << "double: ";
	printDouble(*conv);
	return (0);
}
