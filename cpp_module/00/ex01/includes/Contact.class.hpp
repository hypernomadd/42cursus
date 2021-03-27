/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:38:48 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:38:53 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class	Contact 
{

private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

public:

	void		smallPrint(void);
	void		print(void);
	void		setFirstName(std::string str);
	void		setLastName(std::string str);
	void		setNickname(std::string str);
	void		setLogin(std::string str);
	void		setPostalAddress(std::string str);
	void		setPhoneNumber(std::string str);
	void		setBirthdayDate(std::string str);
	void		setFavoriteMeal(std::string str);
	void		setUnderwearColor(std::string str);
	void		setDarkestSecret(std::string str);
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getLogin();
	std::string	getPostalAddress();
	std::string	getPhoneNumber();
	std::string	getBirthdayDate();
	std::string	getFavoriteMeal();
	std::string	getUnderwearColor();
	std::string	getDarkestSecret();

};

#endif
