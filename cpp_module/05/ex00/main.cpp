#include "Bureaucrat.hpp"

int				main(void)
{
	Bureaucrat		*bob;
	Bureaucrat		*joe;
	Bureaucrat		*kevin;
	
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
	delete(bob);
	delete(joe);
	return (0);
}
