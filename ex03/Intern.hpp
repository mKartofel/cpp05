/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:54:39 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 16:33:13 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern &i);
	Intern & operator=(const Intern &i);
	~Intern();
	
	Form *makeForm(const std::string form, const std::string target);
};

typedef Form * (*createFormFunc)(const std::string);


