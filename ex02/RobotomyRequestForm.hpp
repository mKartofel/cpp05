/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfiszbin <vfiszbin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:08:52 by vfiszbin          #+#    #+#             */
/*   Updated: 2022/08/08 14:26:22 by vfiszbin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"
# include <cstdlib>
# include <ctime>     

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &f);

public:
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &f);
	virtual ~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
};


#endif
