#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>

template <typename T> 
int		easyfind(T &t, int n)
{
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), n);
	if (it == t.end()) //find가 일치하는 값을 못 찾으면 iterator를 마지막으로 보내는 것을 이용하여 예외처리!
		throw(std::exception());
	return (*it);
}

#endif
