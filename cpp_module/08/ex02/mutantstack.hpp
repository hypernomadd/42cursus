#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{
private:

public:
	MutantStack(void);
	~MutantStack(void);
	MutantStack(const MutantStack &stack);
	MutantStack		&operator=(const MutantStack &stack);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator		begin(void);
	iterator		end(void);
};

template<class T>
MutantStack<T>::MutantStack(void): std::stack<T>()
{
	return ;
}

template<class T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}	

template<class T>
MutantStack<T>::MutantStack(const MutantStack<T> &stack)
{
	*this = stack;
	return ;
}

template<class T>
MutantStack<T>		&MutantStack<T>::operator=(const MutantStack<T> &stack)
{
	std::stack<T>::operator = (stack);
	return (*this);
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template<class T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (this->c.end());
}

#endif
