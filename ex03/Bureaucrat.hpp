/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:09:39 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/31 21:30:32 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &b);
	Bureaucrat & operator=(Bureaucrat const &b);
	~Bureaucrat();

	std::string const getName(void) const;
	int getGrade(void) const;
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &f) const;
	void executeForm(Form const &f) const;

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

std::ostream & operator<<(std::ostream &o, Bureaucrat const &b);

#endif