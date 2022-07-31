/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:31:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/31 12:56:31 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat	b("James", 2);
	Form 		f("torchon", 1, 5);

	std::cout << f << std::endl;
	std::cout << b << std::endl;
	
	b.signForm(f);
	b.incrementGrade();
	b.signForm(f);

	std::cout << f << std::endl;
	return 0;
}