/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:46:35 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 18:03:16 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreation", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &s) :  Form("ShrubberyCreation", 145, 137)
{
	*this = s;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &s)
{
	if (this = &s)
		_target = s._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkExecutable(executor);
	std::string filename = _target + "_shrubbery";
	std::ofstream ofs(filename.c_str());

	if (ofs.good() == false)
		throw OutputFileFailure();

	ofs <<	"			,@@@@@@@,                  \n"
			"	,,,.   ,@@@@@@/@@,  .oo8888o.      \n"
			"	,&%%&%&&%,@@@@@/@@@@@@,888888/8o  \n"
			",%&%&&%&&%,@@@@@@/@@@8888888/88'   \n"
			"%&&%&%&/%&&%@@@@/ /@@@8888888888'   \n"
			"%&&%/ %&%%&&@@ V /@@' `888 `/88'    \n"
			"`&% ` /%&'    |.|        \\ '|8'      \n"
			"	|o|        | |         | |         \n"
			"	|.|        | |         | |         \n"
			"   \\/ ._//_/__/  ,_//__\\/.  _//__\n";
	std::cout << "Ascii tree created in " << filename << std::endl;
	ofs.close();
}