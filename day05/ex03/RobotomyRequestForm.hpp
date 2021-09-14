/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:25:25 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:50:05 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY__
#define ROBOTOMY__

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private :
		const std::string target;
	public :
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm();
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &sh_form);
		RobotomyRequestForm& operator =(const RobotomyRequestForm &sh_form);
		virtual void execute(Bureaucrat const & executor) const;

};

#endif