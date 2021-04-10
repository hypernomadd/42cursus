#include "Form.hpp"

Form::Form(void):
name("undefined"),
isSigned(false),
gradeToSign(150),
gradeToExecute(1)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form::Form(const Form &f):
gradeToSign(f.gradeToSign),
gradeToExecute(f.gradeToExecute)
{
	*this = f;
}

Form						&Form::operator=(const Form &f)
{
	int		*ptr;

	(std::string)this->name = f.name;
	this->isSigned = f.isSigned;
	ptr = (int *)&this->gradeToSign;
	*ptr = (int)f.gradeToSign;
	ptr = (int *)&this->gradeToExecute;
	*ptr = (int)f.gradeToExecute;
	return (*this);
}

Form::Form
(const std::string &name, const int gradeToSign, const int gradeToExecute):
name(name),
isSigned(false),
gradeToSign(150),
gradeToExecute(1)
{
	int		*ptr;

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw(Form::GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw(Form::GradeTooLowException());
	else
	{
		ptr = (int *)&this->gradeToSign;
		*ptr = (int)gradeToSign;
		ptr = (int *)&this->gradeToExecute;
		*ptr = (int)gradeToExecute;
	}
	return ;
}

void						Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw(Form::GradeTooLowException());
	else
		this->isSigned = true;
	return ;
}

const std::string			&Form::getName(void) const
{
	return (this->name);
}

bool						Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int							Form::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int							Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

std::ostream				&operator<<(std::ostream &os, const Form &f)
{
	if (f.getIsSigned())
		os << f.getName() << " is signed";
	else
		os << f.getName() << " is not signed";
	os << ", sign in required a min grade of " << f.getGradeToSign();
	os << " and execute a grade of " << f.getGradeToExecute() << ".";
	os << std::endl;
	return (os);
}

Form::GradeTooLowException::GradeTooLowException(void) {}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

Form::GradeTooLowException::GradeTooLowException
(const Form::GradeTooLowException &e)
{
	*this = e;
	return ;
}

Form::GradeTooLowException	&Form::GradeTooLowException::operator=
(const Form::GradeTooLowException &e) 
{
	(void)e;
	return (*this);
}

const char					*Form::GradeTooLowException::what
(void) const throw()
{
	return ("Grade Too Low");
}

Form::GradeTooHighException::GradeTooHighException(void) {}

Form::GradeTooHighException::~GradeTooHighException(void) throw() {}

Form::GradeTooHighException::GradeTooHighException
(const Form::GradeTooHighException &e)
{
	*this = e;
	return ;
}

Form::GradeTooHighException	&Form::GradeTooHighException::operator=
(const GradeTooHighException &e)
{
	(void)e;
	return (*this);
}

const char					*Form::GradeTooHighException::what
(void) const throw()
{
	return ("Grade Too High");
}
