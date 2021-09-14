/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:16:59 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/13 17:01:51 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
		this->set_is_signed(false);
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm_Default", 25, 5), target("target")
{
		this->set_is_signed(false);
}

PresidentialPardonForm::~PresidentialPardonForm ()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) : Form(president.get_name(), president.get_grade_to_sign(), president.get_grade_to_sign()), target(president.target)
{
		this->set_is_signed(president.get_is_signed());
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &president)
{
	if (this != &president)
	{
		this->setName(president.get_name());
		this->setGradeExec(president.get_grade_to_execute());
		this->setGradeSign(president.get_grade_to_sign());
		this->set_is_signed(president.get_is_signed());
		(std::string)this->target = president.target;
	}
	return (*this);
}



void PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
	Form::execute(bureaucrat);
	std:: cout << target << " has been pardoned by Zafod Beeblebrox. " << std::endl;
}