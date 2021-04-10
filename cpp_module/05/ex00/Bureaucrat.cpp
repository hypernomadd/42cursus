#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b)
{
	*this = b;
	return ;
}

Bureaucrat				&Bureaucrat::operator=(const Bureaucrat &b)
{
	(std::string)this->name = b.name;
	this->grade = b.grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade = grade;
}

void					Bureaucrat::incGrade(void)
{	
	if (this->grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade--;
}

void					Bureaucrat::decGrade(void)
{	
	if (this->grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->grade++;
}

const std::string		&Bureaucrat::getName(void) const
{
	return (this->name);
}

int						Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::ostream				&operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	os << std::endl;
	return (os);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) {}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException
(const GradeTooLowException &e)
{
	*this = e;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=
(const GradeTooLowException &e)
{
	(void)e;
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade Too Low (Min. 150)"); 
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) {}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException
(const GradeTooHighException &e)
{
	*this = e;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=
(const GradeTooHighException &e) 
{
	(void)e;
	return(*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade Too High (Max. 1)"); 
}
