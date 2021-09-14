/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:16:59 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:52:14 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
		this->set_is_signed(false);
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm_Default", 72, 45), target("target")
{
		this->set_is_signed(false);
}

RobotomyRequestForm::~RobotomyRequestForm ()
{

}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomy) : Form(robotomy.get_name(), robotomy.get_grade_to_sign(), robotomy.get_grade_to_sign()), target(robotomy.target)
{
		this->set_is_signed(robotomy.get_is_signed());
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomy)
{
	if (this != &robotomy)
	{
		this->setName(robotomy.get_name());
		this->setGradeExec(robotomy.get_grade_to_execute());
		this->setGradeSign(robotomy.get_grade_to_sign());
		this->set_is_signed(robotomy.get_is_signed());
		(std::string)this->target = robotomy.target;
	}
	return (*this);
}



void RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << "drilling noises : venvenvenvenvenvenvenvenvenvenvenven...venven" << std::endl;
	std:: cout << target << " has been robotomized successfully 50\% of the time " << std::endl;	
}