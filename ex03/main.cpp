/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:31:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 17:07:42 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat b("Bravo", 4);
	Intern i;

	Form *f1 = i.makeForm("rado het", "cible1");
	Form *f2 = i.makeForm("presidential pardon", "cible2");
	Form *f3 = i.makeForm("robotomy request", "cible3");
	Form *f4 = i.makeForm("shrubbery creation", "cible4");
	
	b.signForm(*f2);
	b.executeForm(*f2);

	b.signForm(*f3);
	b.executeForm(*f3);

	b.signForm(*f4);
	b.executeForm(*f4);

	(void)f1;
	delete f2;
	delete f3;
	delete f4;

	return (0);
}