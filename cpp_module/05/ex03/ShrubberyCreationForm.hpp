#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{

private:
	ShrubberyCreationForm(void);

public:
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm &form);
	ShrubberyCreationForm		&operator=(const ShrubberyCreationForm &form);

	ShrubberyCreationForm(std::string target);
	void						execute(Bureaucrat const &executor) const;
};

#endif
