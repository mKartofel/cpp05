/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:52:41 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/31 12:59:52 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExec;
	
public:
	Form(void);
	Form(std::string const name, int const gradeToSign, int const gradeToExec);
	Form(Form const &f);
	Form & operator=(Form const &f);
	~Form();

	std::string const getName(void) const;
	bool getSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExec(void) const;
	void beSigned(Bureaucrat const &b);

	//exceptions
	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
			{
				return "Grade too low";
			}
	};
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
			{
				return "Grade too high";
			}
	};
};

std::ostream & operator<<(std::ostream &o, Form const &f);


#endif