#include "span.hpp"

int main()
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

	std::cout << std::endl;
	std::cout << "-- Edge Test : Max/Min Ints" << std::endl;
	Span edge = Span(2);

	edge.addNumber(0);
	edge.addNumber(4294967295);

	std::cout << edge.shortestSpan() << std::endl;
	std::cout << edge.longestSpan() << std::endl;
	
	std::cout << std::endl;
	std::cout << "-- TooShort Test : 0 element" << std::endl;
	Span empty = Span(0);
	try
	{
		std::cout << empty.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "-- TooShort Test : 1 element" << std::endl;
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

	std::cout << std::endl;
	std::cout << "-- 10000 random values and max size" << std::endl;
	std::vector<unsigned int> vector(10000);
	std::vector<unsigned int>::iterator head = vector.begin();
	std::vector<unsigned int>::iterator tail = vector.end();
	std::vector<unsigned int>::iterator it = head;
	srand(time(NULL));
	while (it != tail)
	{
		*it = rand();
		it++;
	}
	Span goo = Span(10000);
	goo.addNumbers(head, tail);
	std::cout << "ShortestSpan(): " << goo.shortestSpan() << std::endl;
	std::cout << "LongestSpan(): " << goo.longestSpan() << std::endl;
	
	std::cout << std::endl;
	std::cout << "-- MaxSize Test" << std::endl;
	try
	{
		goo.addNumbers(head, tail);
	}
	catch (std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}