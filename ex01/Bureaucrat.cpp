/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:09:50 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 18:00:36 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("random"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &c)
{
	if (this = &c)
		_grade = c._grade;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &c) : _name(c._name)
{
	*this = c;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

std::string const Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout  << _name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
	}
	
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}
