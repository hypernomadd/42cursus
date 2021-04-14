#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{

private:
	unsigned int	 size;
	std::vector<int> array;


public:
	Span(void);
	~Span(void);
	Span(const Span &span);
	Span	&operator=(const Span &span);

	Span(unsigned int size);
	void			addNumber(int nb);
	template<typename T>
	void			addNumbers(T head, T tail)
	{	
		if (static_cast<unsigned long>(std::distance(head, tail)) > (size - this->array.size()))
			throw(std::length_error("Array is at max size"));	
		else
		{
			while (head != tail)
			{
				this->array.push_back(*head);
				head++;
			}
		}
		return ;
	}
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif
