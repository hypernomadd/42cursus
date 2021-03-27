/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:36:30 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:37:27 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return ;
}

void		PhoneBook::search(void)
{
	int		i;
	
	if (!this->index)
	{
		std::cout << "No Contact, you should create one" << std::endl;
		return ;
	}
	i = 0;
	while (i < this->index)
	{
		std::cout << "|         " << i;
		this->contacts[i++].smallPrint();
	}
	std::cout << "Pick a index" << std::endl;
	std::cin >> i;
	if (i >= 0 && i < this->index)
	{
		std::cout << "index: " << i << std::endl;
		this->contacts[i].print();
	}
	else
		std::cout << "This index does not match with any contact" << std::endl;
	std::cin.clear();
	return ;
}

void		PhoneBook::incIndex(void)
{
	this->index++;
	return ;
}

void		PhoneBook::addContact(void)
{
	std::string	input;
	Contact		*contact;

	if (this->index == 8)
	{
		std::cout << "PhoneBook FULL" << std::endl;
		return ;
	}
	contact = &this->contacts[this->index];
	std::cout << "========     FORM      ========" << std::endl;
	std::cout << "first name: ";
	std::cin >> input;
	contact->setFirstName(input);
	std::cout << "last name: ";
	std::cin >> input;
	contact->setLastName(input);
	std::cout << "nickname: ";
	std::cin >> input;
	contact->setNickname(input);
	std::cout << "login: ";
	std::cin >> input;
	contact->setLogin(input);
	std::cout << "postal address: ";
	std::cin >> input;
	contact->setPostalAddress(input);
	std::cout << "phone number: ";
	std::cin >> input;
	contact->setPhoneNumber(input);
	std::cout << "birthday date: ";
	std::cin >> input;
	contact->setBirthdayDate(input);
	std::cout << "favorite meal: ";
	std::cin >> input;
	contact->setFavoriteMeal(input);
	std::cout << "underwear color: ";
	std::cin >> input;
	contact->setUnderwearColor(input);
	std::cout << "darkest secret: ";
	std::cin >> input;
	contact->setDarkestSecret(input);
	this->index++;
	std::cout << "======== Contact Added ========" << std::endl;
	return ;
}

int			PhoneBook::getIndex(void)
{
	return (this->index);
}
