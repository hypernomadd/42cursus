#ifndef ROBOTOMYREQUESTFORM_HPP_
# define ROBOTOMYREQUESTFORM_HPP_

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);

		virtual ~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);

		virtual void execute(Bureaucrat const &executor) const;

		static Form *factory(const std::string target);
};

#endif /* ROBOTOMYREQUESTFORM_HPP_ */
