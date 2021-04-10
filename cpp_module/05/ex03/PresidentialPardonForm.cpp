#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("undefined", 25, 5)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm
(const PresidentialPardonForm &form): Form(form)
{
	*this = form;
	return ;
}

PresidentialPardonForm		&PresidentialPardonForm::operator=
(const PresidentialPardonForm &form)
{
	(void)form;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm
(std::string target): Form(target, 25, 5)
{
	return ;
}

void						PresidentialPardonForm::execute
(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox.";
	std::cout << std::endl;
	return ;
}
