#include "span.hpp"

int main()
{
	Span	sp(5);

	sp.addNumber(3);
    std::cout << "1.\n";
	try
	{
		std::cout<<sp.shortestSpan()<<'\n';
	}
	catch(const std::exception &e)
	{
		std::cerr<<e.what()<<'\n';
	}

	sp.addNumber(4294967295);
	sp.addNumber(0);
	sp.addNumber(16);
	sp.addNumber(1);
    std::cout << "2.\n";
	try
	{
		sp.addNumber(21);
	}
	catch(const std::exception &e)
	{
		std::cerr<<e.what()<<'\n';
	}
    std::cout << "3.\n";
    std::cout<<sp.shortestSpan()<<'\n';
    std::cout << "4.\n";
    std::cout<<sp.longestSpan()<<'\n';



	// std::vector<unsigned int>	temp;
	// Span sp2(10000);

	// for(int i=0; i<10000; i++)
	// 	temp.push_back(i*3);
	// sp2.addNumber(temp.begin(), temp.end());
    // std::cout << "5.\n";
    // std::cout<<sp2.shortestSpan()<<'\n';
    // std::cout << "6.\n";
    // std::cout<<sp2.longestSpan()<<'\n';
}