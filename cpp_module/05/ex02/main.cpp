#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int				main(void)
{
	Bureaucrat		*bob;
	Bureaucrat		*joe;
	Bureaucrat		*kevin;
	std::srand(std::time(nullptr));
	try
	{
		bob = new Bureaucrat("bob", 150);
		joe = new Bureaucrat("joe", 1);
		kevin = new Bureaucrat("kevin", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *bob;
	std::cout << *joe;
	try
	{
		bob->incGrade();
		joe->incGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *bob;
	std::cout << *joe;
	Form *form1 = new PresidentialPardonForm("form1");
	Form *form2 = new RobotomyRequestForm("form2");
	Form *form3 = new ShrubberyCreationForm("form3");
	std::cout << *form1;
	std::cout << *form2;
	std::cout << *form3;
	joe->signForm(*form1);
	joe->signForm(*form3);
	joe->executeForm(*form1);
	joe->executeForm(*form2);
	joe->signForm(*form2);
	bob->executeForm(*form2);
	joe->executeForm(*form2);
	joe->executeForm(*form3);
	delete(form1);
	delete(form2);
	delete(form3);
	delete(bob);
	delete(joe);
	return (0);
}
