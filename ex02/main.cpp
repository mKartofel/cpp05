/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:31:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/31 21:43:53 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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
	
	return 0;
}