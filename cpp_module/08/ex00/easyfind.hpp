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
	if (it == t.end()) //end()는 배열 마지막의 다음을 가리킴. 할당 범위를 넘어갔으므로 예외처리
		throw(std::exception());
	return (*it);
}


#endif
