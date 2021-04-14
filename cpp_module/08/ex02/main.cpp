#include <vector>
#include <iostream>
#include <string>
#include "mutantstack.hpp"

template <class T>
void		printStack(T head, T tail)
{
	std::cout << "[";
	while (head != tail)
	{
		std::cout << *head;
		head++;
		if (head != tail)
			std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}

template class MutantStack<int>;
int			main(void)
{
	MutantStack<int>    mstack;

	mstack.push(5);
	printStack(mstack.begin(), mstack.end());
	mstack.push(17);
	printStack(mstack.begin(), mstack.end());
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "mstack.pop()" << std::endl;
	mstack.pop();
	printStack(mstack.begin(), mstack.end());
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	printStack(mstack.begin(), mstack.end());
	mstack.push(5);
	printStack(mstack.begin(), mstack.end());
	mstack.push(737);
	printStack(mstack.begin(), mstack.end());
	std::cout << "mstack.pop()" << std::endl;
	mstack.pop();
	printStack(mstack.begin(), mstack.end());
	std::cout << "mstack.pop()" << std::endl;
	mstack.pop();
	printStack(mstack.begin(), mstack.end());
	mstack.push(0);
	printStack(mstack.begin(), mstack.end());

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		mstack.push(rand());
		printStack(mstack.begin(), mstack.end());
	}
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
