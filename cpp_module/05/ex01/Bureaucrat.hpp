#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{

private:
	const std::string		name;
	int						grade;

	Bureaucrat(void);

public:
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &b);
	Bureaucrat				&operator=(const Bureaucrat &b);

	Bureaucrat(const std::string &name, int grade);
	void					signForm(Form &form);
	void					incGrade(void);
	void					decGrade(void);
	const std::string		&getName(void) const;
	int						getGrade(void) const;

	class GradeTooLowException: public std::exception
	{

	public:
		GradeTooLowException(void);
		virtual ~GradeTooLowException(void) throw();
		GradeTooLowException(const GradeTooLowException &e);
		GradeTooLowException		&operator=(const GradeTooLowException &e);
		
		virtual const char *what(void) const throw();

	};

	class GradeTooHighException: public std::exception
	{

	public:
		GradeTooHighException(void);
		virtual ~GradeTooHighException(void) throw();
		GradeTooHighException(const GradeTooHighException &e);
		GradeTooHighException		&operator=(const GradeTooHighException &e);
		
		virtual const char *what(void) const throw();

	};
};

std::ostream				&operator<<(std::ostream &os, const Bureaucrat &b);

#endif
