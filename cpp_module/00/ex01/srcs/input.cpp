/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 08:05:22 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 08:05:27 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input.hpp"

void		command(std::string input, PhoneBook *phonebook)
{
	if (!input.compare("ADD"))
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

	while (1)
	{
		std::cout << "MENU: ADD - SEARCH - EXIT" << std::endl;
		std::cin >> input;
		command(input, &phonebook);
	}
	return (0);
}
