#include "input.hpp"

void		command(std::string input, PhoneBook *phonebook)
{
	if (!input.compare("ADD")) // compare 함수는 일치하면 0을 반환
		phonebook->addContact();
	else if (!input.compare("SEARCH"))
		phonebook->search();
	else if (!input.compare("EXIT"))
		exit (EXIT_SUCCESS);
	return ;
}

int			main(void)
{
	std::string	input;
	PhoneBook	phonebook;

	while (std::cout << "MENU: ADD - SEARCH - EXIT" << std::endl)
	{
		std::cin >> input;
		command(input, &phonebook);
	}
	return (0);
}