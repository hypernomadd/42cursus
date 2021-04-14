#include <algorithm>
#include <string>
#include "span.hpp"

// Canonical form
Span::Span(void)
{
	this->size = 0;
	this->array.reserve(0);
	return ;
}

Span::~Span(void)
{
	return ;
}

Span::Span(const Span &span)
{
	*this = span;
	return ;
}

Span				&Span::operator=(const Span &span)
{
	this->size = span.size;
	this->array = span.array;
	return (*this);
}

// functions
Span::Span(unsigned int size)
{
	this->size = size;
	this->array.reserve(size);
	return ;
}

void				Span::addNumber(int nb)
{
	if (this->array.size() < size)
		this->array.push_back(nb);
	else
		throw(std::length_error("Array is at max size"));
	return ;
}

unsigned long long		Span::shortestSpan(void)
{
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;
	unsigned long long min;

	min = std::numeric_limits<unsigned long long>::max();
	if (this->array.size() >= 2)
	{
		for (it = this->array.begin(); it != this->array.end(); it++)
		{
			for (it2 = this->array.end(); it2 != it; it2--)
			{
				if (min >
static_cast<unsigned long long>(std::max(*it, *it2) - std::min(*it, *it2)))
					min = std::max(*it, *it2) - std::min(*it, *it2);
			}
		}
	}
	else
		throw(std::length_error("Array is too short"));
	return (min);	
}

unsigned long long		Span::longestSpan(void)
{
	int max;
	int min;
	
	if (this->array.size() >= 2)
	{
		max = *std::max_element(this->array.begin(), this->array.end());
		min = *std::min_element(this->array.begin(), this->array.end());
	}	
	else
		throw(std::length_error("Array is too short"));
	return (max - min);
}
