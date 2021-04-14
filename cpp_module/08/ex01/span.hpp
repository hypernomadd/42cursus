#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>
# include <algorithm>
# include <numeric>
# include <iterator>

typedef std::vector<unsigned int>::iterator it;

class Span {
public:
    Span(unsigned int n);
    Span(const Span &copy);
    virtual ~Span();

    Span &operator=(const Span &copy);

    std::vector<unsigned int>getVector();
    void addNumber(unsigned int value);
    void addNumber(it begin, it end);
    long long longestSpan();
    unsigned int shortestSpan();

    class NoSpaceException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class NoSpanException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

private:
    unsigned int n;
    std::vector<unsigned int> v;
    Span();
};


# endif