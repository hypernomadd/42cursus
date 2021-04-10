#include "Form.hpp"

Form::Form() :
		_name("?"),
		_requiredGradeToSign(Bureaucrat::GRADE_HIGHEST),
		_requiredGradeToExecute(Bureaucrat::GRADE_HIGHEST)
{
	this->_signed = false;
}

Form::Form(const std::string name, int requiredGradeToSign, int requiredGradeToExecute) :
		_name(name),
		_requiredGradeToSign(ensureGradeRange(requiredGradeToSign, true)),
		_requiredGradeToExecute(ensureGradeRange(requiredGradeToExecute, false))
{
	this->_signed = false;
}

Form::~Form()
{
}

Form::Form(const Form &other) :
		_name(other._name),
		_requiredGradeToSign(other._requiredGradeToSign),
		_requiredGradeToExecute(other._requiredGradeToExecute)
{
	this->operator =(other);
}

Form&
Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->_signed = other._signed;
	}

	return (*this);
}

int
Form::ensureGradeRange(int grade, bool sign)
{
	if (grade < Bureaucrat::GRADE_HIGHEST)
		throw Form::GradeTooHighException(sign);
	if (grade > Bureaucrat::GRADE_LOWEST)
		throw Form::GradeTooLowException(sign);

	return (grade);
}

void
Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _requiredGradeToSign)
		throw Form::GradeTooLowException(true);

	this->_signed = true;
}

const std::string&
Form::getName() const
{
	return _name;
}

int
Form::getRequiredGradeToExecute() const
{
	return _requiredGradeToExecute;
}

int
Form::getRequiredGradeToSign() const
{
	return _requiredGradeToSign;
}

bool
Form::isSigned() const
{
	return _signed;
}

Form::GradeTooHighException::GradeTooHighException(void) :
		std::exception()
{
	this->_sign = false;
}

Form::GradeTooHighException::GradeTooHighException(bool sign) :
		std::exception()
{
	this->_sign = sign;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw ()
{
}

Form::GradeTooHighException::GradeTooHighException(
        const GradeTooHighException &other)
{
	this->operator =(other);
}

Form::GradeTooHighException&
Form::GradeTooHighException::operator=(const GradeTooHighException &other)
{
	if (this != &other)
	{
		this->_sign = other._sign;
	}

	return (*this);
}

const char*
Form::GradeTooHighException::what() const throw ()
{
	if (this->_sign)
		return "Req. grade to sign is too high";
	return "Req. grade to execute is too high";
}

Form::GradeTooLowException::GradeTooLowException(void) :
		std::exception()
{
	this->_sign = false;
}

Form::GradeTooLowException::GradeTooLowException(bool sign) :
		std::exception()
{
	this->_sign = sign;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw ()
{
}

Form::GradeTooLowException::GradeTooLowException(
        const GradeTooLowException &other)
{
	this->operator =(other);
}

Form::GradeTooLowException&
Form::GradeTooLowException::operator=(const GradeTooLowException &other)
{
	if (this != &other)
	{
		this->_sign = other._sign;
	}

	return (*this);
}

const char*
Form::GradeTooLowException::what() const throw ()
{
	if (this->_sign)
		return "Req. grade to sign is too low";
	return "Req. grade to execute is too low";
}

std::ostream&
operator<<(std::ostream &outStream, const Form &form)
{
	return (outStream << form.getName() //
	        << ", " //
	        << (form.isSigned() ? "" : "not ") //
	        << "signed, req. grade to sign:  " //
	        << form.getRequiredGradeToSign() //
	        << ", req. grade to execute:  " //
	        << form.getRequiredGradeToExecute());
}
