#include "span.hpp"

int			main(void)
{
	std::cout << "-- Main Given" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "-- TooShort Test1 : 0 element" << std::endl;
	Span empty;
	try
	{
		std::cout << empty.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << "-- TooShort Test2 : 1 element" << std::endl;
	Span tooShort = Span(1);
	tooShort.addNumber(1);
	try
	{
		std::cout << tooShort.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::vector<int> vector(10000);
	std::vector<int>::iterator head = vector.begin();
	std::vector<int>::iterator tail = vector.end();
	std::vector<int>::iterator it = head;
	srand(time(NULL));
	while (it != tail)
	{
		*it = rand();
		it++;
	}
	std::cout << "-- 10000 random values and max size" << std::endl;
	Span goo = Span(10000);
	goo.addNumbers(head, tail);
	std::cout << "ShortestSpan(): " << goo.shortestSpan() << std::endl;
	std::cout << "LongestSpan(): " << goo.longestSpan() << std::endl;
	std::cout << "-- MaxSize2 Test" << std::endl;
	try
	{
		goo.addNumbers(head, tail);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
