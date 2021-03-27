/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:38:57 by chshin            #+#    #+#             */
/*   Updated: 2021/03/27 16:38:58 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class	PhoneBook
{

private:

	int		index;
	Contact	contacts[8];

public:

	PhoneBook(void);
	void	search(void);
	void	incIndex(void);
	void	addContact(void);
	int		getIndex(void);

};

#endif
