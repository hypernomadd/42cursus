#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{

private:
	PresidentialPardonForm(void);

public:
	~PresidentialPardonForm(void);
	PresidentialPardonForm
(const PresidentialPardonForm &form);
	PresidentialPardonForm		&operator=(const PresidentialPardonForm &form);

	PresidentialPardonForm(std::string target);
	void						execute(Bureaucrat const &executor) const;

};

#endif
