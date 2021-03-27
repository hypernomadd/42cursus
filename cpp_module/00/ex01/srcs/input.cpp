/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:35:39 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:35:42 by chshin           ###   ########.fr       */
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

	while (std::cout << "MENU: ADD - SEARCH - EXIT" << std::endl)
	{
		std::cin >> input;
		command(input, &phonebook);
	}
	return (0);
}
