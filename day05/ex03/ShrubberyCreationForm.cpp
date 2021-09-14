/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:49:43 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:51:14 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
		this->set_is_signed(false);
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm_Default", 145, 137), target("target")
{
		this->set_is_signed(false);
}


ShrubberyCreationForm::~ShrubberyCreationForm ()
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubbery) : Form(shrubbery.get_name(), shrubbery.get_grade_to_sign(), shrubbery.get_grade_to_sign()), target(shrubbery.target)
{
		this->set_is_signed(shrubbery.get_is_signed());
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubbery)
{
	if (this != &shrubbery)
	{
		this->setName(shrubbery.get_name());
		this->setGradeExec(shrubbery.get_grade_to_execute());
		this->setGradeSign(shrubbery.get_grade_to_sign());
		this->set_is_signed(shrubbery.get_is_signed());
		(std::string)this->target = shrubbery.target;
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{	
		Form::execute(bureaucrat);
		std::ofstream file(target + "_shrubbery");
		
		file <<	"				&&& &&  & &&"  << std::endl;
		file << "			&& &\\/&\\|& ()|/ @, &&" << std::endl;
		file << "			&/(/&/&||/& /_/)_&/_&" << std::endl;
		file << "		&() &\\/&|()|/&\\/ '%\" & ()" << std::endl;
		file << "		&_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl;
		file << "		&&   && & &| &| /& & % ()& /&&" << std::endl;
		file << "		()&_---()&\\&\\|&&-&&--%---()~" << std::endl;
		file << "			&&     \\|||" << std::endl;
		file << "					|||" << std::endl;
		file << "					|||" << std::endl;
		file << "					|||" << std::endl;
		file << "			, -=-~  .-^- _" << std::endl;
     
		file.close();	
}