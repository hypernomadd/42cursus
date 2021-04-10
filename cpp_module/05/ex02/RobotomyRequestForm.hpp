#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{

private:
	RobotomyRequestForm(void);

public:
	~RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm		&operator=(const RobotomyRequestForm &form);

	RobotomyRequestForm(std::string target);
	void					execute(Bureaucrat const &executor) const;
};

#endif
