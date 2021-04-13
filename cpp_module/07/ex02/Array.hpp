#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>

template <typename T>
class Array
{

private:
	T				*array;
	unsigned int	length;

public:

	Array(void)
	{
		this->array = new T[0];
		this->length = 0;
		return ;
	}

	~Array(void)
	{
		if (this->length)
			delete[] this->array;
		return ;
	}

	Array(const Array &a)
	{
		*this = a;
		return ;
	}

	Array				&operator=(const Array &a)
	{
		unsigned int i;

		this->length = a.length;
		this->array = new T[this->length];
		for (i = 0; i < this->length; i++)
			this->array[i] = a.array[i];
		return (*this);
	}

	Array(unsigned int length)
	{
		this->array = new T[length];
		this->length = length;
		return ;
	}

	T					&operator[](unsigned int index)
	{
		if (index >= this->length)
			throw(std::exception());
		return (this->array[index]);
	}
	
	const T				&operator[](unsigned int index) const
	{
		if (index >= this->length)
			throw(std::exception());
		return (this->array[index]);
	}
	
	unsigned int		size(void) const
	{
		return (this->length);
	}
};

#endif
