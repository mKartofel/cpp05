/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:14:47 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 18:04:27 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("RobotomyRequest", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &r) :  Form("RobotomyRequest", 72, 45)
{
	*this = r;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &r)
{
	if (this = &r)
		_target = r._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkExecutable(executor);
	std::cout << "Bzzzzzz Bzzzzzzzz!" << std::endl;

	if (std::rand() % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << "'s robotomization was not successful" << std::endl;	
}

