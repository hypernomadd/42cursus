#include "Conversion.hpp"

Conversion::Conversion(void)
{
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion::Conversion(const Conversion &conversion)
{
	*this = conversion;
	return ;
}

Conversion		&Conversion::operator=(const Conversion &conversion)
{
	this->input = conversion.input;
	return (*this);
}

Conversion::Conversion(std::string input)
{
	if (input.size() == 1 && input.at(0) <= 127 && input.at(0) >= -128 &&
(input.at(0) < '0' || input.at(0) > '9'))
		this->input = std::to_string(input.at(0));
	else
		this->input = input;
	return ;
}


Conversion::operator char(void) const
{
	int		c;

	try
	{
		c = std::stoi(this->input);
	}
	catch (std::exception &e)
	{
		throw(Conversion::ImpossibleException());
	}
	if (c < -128 || c > 127)
		throw(Conversion::ImpossibleException());
	else if (c < 32 || c > 126)
		throw(Conversion::NonDisplayableException());
	return (static_cast<char>(c));
}

Conversion::operator int(void) const
{
	int		i;

	i = 0;
	try
	{
		i = std::stoi(this->input);
	}
	catch (std::exception &e)
	{
		throw(Conversion::ImpossibleException());
	}
	return (i);
}

Conversion::operator double(void) const
{
	double d;

	d = 0;
	try
	{
		d = std::stod(this->input);
	}
	catch (std::exception &e)
	{
		throw(Conversion::ImpossibleException());
	}
	return (d);
}

Conversion::operator float(void) const
{
	float f;

	f = 0;
	try
	{
		f = std::stof(this->input);	
	}
	catch (std::exception &e)
	{
		throw(Conversion::ImpossibleException());
	}
	return (f);
}

Conversion::ImpossibleException::ImpossibleException(void) {}

Conversion::ImpossibleException::~ImpossibleException(void) throw() {}

Conversion::ImpossibleException::ImpossibleException
(const Conversion::ImpossibleException &e)
{
	*this = e;
	return ;
}

Conversion::ImpossibleException		&Conversion::ImpossibleException::operator=
(const ImpossibleException &e)
{
	(void)e;
	return (*this);
}

const char					*Conversion::ImpossibleException::what
(void) const throw()
{
	return ("impossible");
}

Conversion::NonDisplayableException::NonDisplayableException(void) {}

Conversion::NonDisplayableException::~NonDisplayableException(void) throw() {}

Conversion::NonDisplayableException::NonDisplayableException
(const Conversion::NonDisplayableException &e)
{
	*this = e;
	return ;
}

Conversion::NonDisplayableException		&
Conversion::NonDisplayableException::operator=
(const NonDisplayableException &e)
{
	(void)e;
	return (*this);
}

const char					*Conversion::NonDisplayableException::what
(void) const throw()
{
	return ("Non displayable");
}
