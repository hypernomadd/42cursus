#include <ctime>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int				main(void)
{
	Bureaucrat		*bob;
	Bureaucrat		*joe;
	Bureaucrat		*kevin;
	std::srand(std::time(nullptr));
	
	std::cout << "--- Basic TEST ---" << std::endl;
	std::cout << "Bob : 150/ joe : 1/ kevin : 151" << std::endl;
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
	
	std::cout << std::endl;
	std::cout << "--- Grade inc TEST ---" << std::endl;
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

	std::cout << std::endl;
	std::cout << "--- Form TEST with Intern ---" << std::endl;
	Intern michel;

	Form *form1 = michel.makeForm("presidential pardon", "blab");
	Form *form2 = michel.makeForm("robotomy request", "bla");
	Form *form3 = michel.makeForm("shrubbery creation", "blob");
	Form *form4 = michel.makeForm("bwaaaa", "blub");
	(void)form4;
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
	delete(bob);
	delete(joe);
	return (0);
}
