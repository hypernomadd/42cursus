#ifndef ITER_HPP_
# define ITER_HPP_
# include <iostream>

template<typename T>
void iter(T *arr, size_t length, void (*f)(const T &))
{
	if (!arr)
		return;

	for (size_t index = 0; index < length; ++index)
	{
			(f)(arr[index]);
	}
}

template<typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}


static void print_int(const int &x)
{
	std::cout << x << std::endl;
}

static void print_string(const std::string &x)
{
	std::cout << x << std::endl;
}

#endif