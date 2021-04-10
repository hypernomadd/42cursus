#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
	return ;
}

Intern			&Intern::operator=(const Intern &intern)
{
	(void)intern;
	return (*this);
}

Form			*Intern::findForm(std::string &formName, std::string &targetName)
{	
	Form *(Intern::*create[3])(std::string &);
	std::string functionNames[3] = {"presidential pardon", "robotomy request",
"shrubbery creation"};
	Form		*form;
	int			i;

	create[0] = &Intern::createPresidentialPardonForm;
	create[1] = &Intern::createRobotomyRequestForm;
	create[2] = &Intern::createShrubberyCreationForm;
	form = NULL;
	for(i = 0; i < 3; i++)
	{
		if (functionNames[i] == formName)
			form = (this->*(create[i]))(targetName);
	}
	if (!form)
		throw(Intern::FormNotFoundException());
	return (form);
}

Form			*Intern::makeForm(std::string formName, std::string targetName)
{
	Form		*form;

	try
	{
		form = this->findForm(formName, targetName);
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return (form);
}

Form			*Intern::createPresidentialPardonForm(std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form			*Intern::createRobotomyRequestForm(std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form			*Intern::createShrubberyCreationForm(std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::FormNotFoundException::FormNotFoundException(void) {}

Intern::FormNotFoundException::~FormNotFoundException(void) throw() {}

Intern::FormNotFoundException::FormNotFoundException
(const Intern::FormNotFoundException &e)
{
	*this = e;
	return ;
}

Intern::FormNotFoundException		&Intern::FormNotFoundException::operator=
(const Intern::FormNotFoundException &e)
{
	(void)e;
	return (*this);
}

const char							*Intern::FormNotFoundException::what
(void) const throw()
{
	return ("Form Not Found");
}
