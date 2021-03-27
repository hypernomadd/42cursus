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