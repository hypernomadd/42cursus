#include "whatever.hpp"

/*
class Awesome
 {
     public:
         Awesome() : _n(0){}
         Awesome(int n): _n(n){}
         bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
         bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
         bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
         bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
         bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
         bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
         int  getN() {return(_n);}
     private:
         int _n;
 };
 */

int main(void)
{
	std::cout << std::endl << "==== 42 ====" << std::endl;
	{
		int a = 2;
		int b = 3;
		swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	
	std::cout << "===== Custom Test =====" << std::endl;
    int a = 1;
    int b = 2;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    swap(a, b);
    std::cout << "===== swap =====" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    int minimum = ::min(a, b);
    std::cout << "min: " << minimum << std::endl;
    int maximum = ::max(a, b);
    std::cout << "max: " << maximum << std::endl;
	
	/*
		std::cout << "\n===== Class param Test =====" << std::endl;
    	Awesome j(20);
    	Awesome k(30);
    	std::cout << "j: " << j.getN() << std::endl;
    	std::cout << "k: " << k.getN() << std::endl;
    	swap(j, k);
    	std::cout << "===== swap =====" << std::endl;
    	std::cout << "j: " << j.getN() << std::endl;
    	std::cout << "k: " << k.getN() << std::endl;
    	Awesome minAwesome = ::min(j, k);
    	std::cout << "min: " << minAwesome.getN() << std::endl;
    	Awesome maxAwesome = ::max(j, k);
    	std::cout << "max: " << maxAwesome.getN() << std::endl;
	*/

}