#include "span.hpp"

Span::Span(unsigned int n) : n(n) 
{
	return ;
}

Span::Span(const Span &copy) : n(copy.n), v(copy.v) 
{
	return ;
}

Span::~Span() 
{
	return ;
}

Span &Span::operator=(const Span &copy) 
{
    if (this == &copy)
        return *this;
    this->n = copy.n;
    this->v = copy.v;
    return *this;
}


void Span::addNumber(unsigned int value) 
{
    if (this->v.size() >= n)
        throw Span::NoSpaceException();
    v.push_back(value);
}


long long Span::longestSpan() 
{
    if (this->v.size() < 2)
        throw Span::NoSpanException();
    long long min = *std::min_element(this->v.begin(), this->v.end());
    long long max = *std::max_element(this->v.begin(), this->v.end());
    return (max - min);
}

long long Span::shortestSpan() 
{
    if (this->v.size() < 2)
        throw Span::NoSpanException();
    long long diff = 0;
    std::vector<unsigned int> v(this->v);
	
    std::sort(v.begin(), v.end());
    long long ret(v.back() - v.front());
    for (it pos = v.begin() + 1; pos != v.end(); pos++)
        if ((diff = static_cast<long long>(*pos) - static_cast<long long>(*(pos - 1))) < ret)
            ret = diff;
    return ret;
}

const char* Span::NoSpaceException::what() const throw() 
{
    return "No Space Exception.";
}

const char* Span::NoSpanException::what() const throw() 
{
    return "No Span Exception.";
}