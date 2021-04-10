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
	return ;
}

void					Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " sign " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->name << " cannot sign " << form.getName();
		std::cerr << " because " << e.what() << std::endl;
	}
	return ;
}

void					Bureaucrat::incGrade(void)
{	
	if (this->grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->grade--;
	return ;
}

void					Bureaucrat::decGrade(void)
{	
	if (this->grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->grade++;
	return ;
}

const std::string		&Bureaucrat::getName(void) const
{
	return (this->name);
}

int						Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void					Bureaucrat::executeForm(Form const &form)
{
	try
	{
		std::cout << this->name << " executes " << form.getName() << ".";
		std::cout << std::endl;
		form.execute(*this);

	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;	
	}
	return ;
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
