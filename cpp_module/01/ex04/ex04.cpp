#include <iostream>
#include <string>

/*
** POINTER VS REFERENCE
**
** reference has same address as string and cannot be reassigned, cannot be null
** pointer has different address because they are variable that store adresses
** and can be reassigned anytime, can be null
*/

int			main(void)
{
	std::string str = "HI THIS IS BRAIN"; // String
	std::string	*ptr = &str; // Pointer
	std::string &ref = str; // Reference

	std::cout << "By pointer: " << std::endl;
	std::cout << *ptr << std::endl; // pointer get to variable address and
// then print his value
	std::cout << "By reference: " << std::endl;
	std::cout << ref << std::endl; // is variable address and
// print his value
	return (0);
}
