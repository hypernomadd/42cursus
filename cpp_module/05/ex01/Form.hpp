#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	const std::string	name;
	bool				isSigned;
	const int			gradeToSign;
	const int			gradeToExecute;

	Form(void);

public:
	~Form(void);
	Form(const Form &f);
	Form				&operator=(const Form &f);
	
	Form
(const std::string &name, const int gradeToSign, const int gradeToExecute);
	void				beSigned(Bureaucrat &bureaucrat);
	const std::string	&getName(void) const;
	bool				getIsSigned(void) const;
	int					getGradeToSign(void) const;
	int					getGradeToExecute(void) const;

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

std::ostream					&operator<<(std::ostream &os, const Form &f);

#endif
