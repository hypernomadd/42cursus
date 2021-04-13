#ifndef WHATEVER_HPP_
# define WHATEVER_HPP_
# include <iostream>
# include <cstdlib>

template<typename T>
	void
	swap(T &a, T &b)
	{
		T c = a;
		a = b;
		b = c;
	}

template<typename T>
	T const
	&min(T const &a, T const &b)
	{
		return (a < b ? a : b);
	}

template<typename T>
	T const
	&max(T const &a, T const &b)
	{
		return (a > b ? a : b);
	}

template<typename T>
	T const
	&min(T &a, T &b)
	{
		return (a < b ? a : b);
	}

template<typename T>
	T const
	&max(T &a, T &b)
	{
		return (a > b ? a : b);
	}

#endif