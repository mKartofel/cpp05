/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:31:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 14:41:27 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "Test ShrubberyCreationForm" << std::endl;
	Bureaucrat b("Weko", 138);
	ShrubberyCreationForm s("cible");

	b.executeForm(s);
	b.incrementGrade();
	b.executeForm(s);
	b.signForm(s);
	b.executeForm(s);

	std::cout << std::endl << "Test RobotomyRequestForm" << std::endl;
	std::srand(std::time(NULL));
	Bureaucrat b2("Wako", 43);
	RobotomyRequestForm r("cible");

	b2.executeForm(r);
	b2.signForm(r);
	b2.executeForm(r);
	b2.executeForm(r);
	b2.executeForm(r);
	b2.executeForm(r);
	b2.executeForm(r);
	b2.executeForm(r);

	std::cout << std::endl << "Test PresidentialPardonForm" << std::endl;
	Bureaucrat b3("Jacko", 6);
	PresidentialPardonForm p("cible");

	b3.signForm(p);
	b3.executeForm(p);
	b3.incrementGrade();
	b3.executeForm(p);

	return 0;
}