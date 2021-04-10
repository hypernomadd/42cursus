#include "Bureaucrat.hpp"
#include "Form.hpp"

int				main(void)
{
	Bureaucrat		*bob;
	Bureaucrat		*joe;
	Bureaucrat		*kevin;
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
	
	Form			*form1;
	Form			*form2;
	Form			*form3;
	try
	{
		form1 = new Form("form1", 150, 150);
		form2 = new Form("form2", 1, 1);
		form3 = new Form("form3", 0, 150);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << *form1;
	std::cout << *form2;
	joe->signForm(*form1);
	bob->signForm(*form2);
	delete(bob);
	delete(joe);
	delete(form1);
	delete(form2);
	return (0);
}
