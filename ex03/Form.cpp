/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:58:20 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/09/08 18:03:43 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("random"), _signed(false), _gradeToSign(150), _gradeToExec(150)
{
	return ;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const &f) : _name(f._name), _gradeToSign(f._gradeToSign), _gradeToExec(f._gradeToExec)
{
	*this = f;
}

Form & Form::operator=(Form const &f)
{
	if (this = &f)
		_signed = f._signed;
	return *this;
}

Form::~Form()
{
	return ;
}

std::string const Form::getName(void) const
{
	return _name;
}

bool Form::getSigned(void) const
{
	return _signed;
}

int Form::getGradeToSign(void) const
{
	return _gradeToSign;
}

int Form::getGradeToExec(void) const
{
	return _gradeToExec;
}

void Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_signed = true;
}

void Form::checkExecutable(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	if (_signed == false)
		throw FormNotSigned();
		
}

std::ostream & operator<<(std::ostream &o, Form const &f)
{
	o << "Form : " << f.getName() << ", signed : " << f.getSigned() << ", grade to sign : " << f.getGradeToSign() << ", grade to exec : " << f.getGradeToExec();
	return o;
}
