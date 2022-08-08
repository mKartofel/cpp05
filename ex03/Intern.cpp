/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:01:52 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 17:04:30 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &i)
{
	*this = i;
}

Intern &Intern::operator=(const Intern &i)
{
	(void)i;
	return (*this);
}

Intern::~Intern()
{
	return ;
}

static Form	*createPresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*createRobotomyForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*createShrubberyForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeForm(const std::string form, const std::string target)
{
	createFormFunc forms[3]= {createPresidentialForm, createRobotomyForm, createShrubberyForm};
	std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int formNum = -1;
	
	for (int i = 0; i < 3; i++)
	{
		if (form == formNames[i])
			formNum = i;
	}
	if (formNum != -1)
	{
		return forms[formNum](target);
	}
	else
	{
		std::cout << "There is no form with such name !" << std::endl;
		return NULL;
	}
}
