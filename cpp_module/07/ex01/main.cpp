#include "iter.hpp"


int    main(void)
{
	int ints[] = { 1, 3, 5, 7, 9 };
	std::string strings[] = { "Hello", "World", "From", "The", "iter", "template" };

	std::cout << "--- INTS form existing function ---" << std::endl;
	iter(ints, 5, print_int);

	std::cout << std::endl << "--- STRINGS form existing function ---" << std::endl;
	iter(strings, 6, print_string);

	std::cout << std::endl << "--- INTS form template function ---" << std::endl;
	iter(ints, 5, print);

	std::cout << std::endl << "--- STRINGS form template function ---" << std::endl;
	iter(strings, 6, print);
}


/*
class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}
*/
