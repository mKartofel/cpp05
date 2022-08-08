/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:23:55 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 17:03:03 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const &f);

public:
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &f);
	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};


#endif
