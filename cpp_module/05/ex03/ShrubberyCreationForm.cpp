#include <string.h>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("undefined", 145, 137)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form)
: Form(form)
{
	*this = form;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=
(const ShrubberyCreationForm &form)
{
	(void)form;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm
(std::string target): Form(target, 145, 137)
{
	return ;
}

void					ShrubberyCreationForm::execute
(Bureaucrat const &executor) const
{
	std::ofstream outfile;	

	Form::execute(executor);
	outfile.open(this->getName() + "_shrubbery",
std::ofstream::out | std::ofstream::trunc);
	if (outfile.fail())
		std::cerr << "Error: " << strerror(errno) << std::endl;
	else
	{
		outfile << "                                                         " << std::endl;
		outfile << "                      ,@@@@@@@,                          " << std::endl;
		outfile << "              ,,,.   ,@@@@@@/@@,  .oo8888o.              " << std::endl;
		outfile << "           ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o            " << std::endl;
		outfile << "          ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'         " << std::endl;
		outfile << "           %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'         " << std::endl;
		outfile << "          %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'           " << std::endl;
		outfile << "          `&%\\ ` /%&'    |.|        \\ '|8'             " << std::endl;
		outfile << "               |o|        | |         | |                " << std::endl;
		outfile << "               |.|        | |         | |                " << std::endl;
		outfile << "      jgs \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_     " << std::endl;
		outfile << " -----------------------------------------------------   " << std::endl;
		outfile << "  https://asciiart.website/index.php?art=plants/trees    " << std::endl;
		outfile.close();
	}
	return ;
}
