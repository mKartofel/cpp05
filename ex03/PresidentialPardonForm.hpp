/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:29:50 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 17:04:45 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &f);

public:
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &f);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const & executor) const;
};


#endif