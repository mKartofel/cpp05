/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:09:39 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/07/30 19:35:04 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

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