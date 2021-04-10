#ifndef PRESIDENTIALPARDONFORM_HPP_
# define PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);

		virtual ~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm &other);

		virtual void execute(Bureaucrat const &executor) const;
};

#endif /* PRESIDENTIALPARDONFORM_HPP_ */
