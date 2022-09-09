/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:31:04 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/09 13:48:32 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardon", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &r) :  Form("PresidentialPardon", 25, 5)
{
	*this = r;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &r)
{
	if (this != &r)
		_target = r._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	checkExecutable(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}