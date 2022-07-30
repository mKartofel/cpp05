/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:31:17 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/30 19:50:09 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat a;
	Bureaucrat b("Bobby", 2);
	Bureaucrat c(a);
	a = b;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;

	a.incrementGrade();
	std::cout << "increment grade of a: " << a << std::endl;

	b.decrementGrade();
	std::cout << "decrement grade of b: " <<  b << std::endl;


	try
	{
		a.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "after failed increment grade of a: " << a << std::endl;
	}

	try
	{
		c.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "after failed decrement grade of c: " << c << std::endl;
	}

	try
	{
		Bureaucrat d("ambitio", -5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat d("nono", 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	return 0;
}