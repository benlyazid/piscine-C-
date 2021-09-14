/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 09:04:04 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:53:39 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Intern.hpp"

Intern::Intern()
{	
}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}
Intern& Intern::operator = (const Intern &intern)
{
	(void)intern;
	return *this;
}

Intern::~Intern()
{	
}

Form* Intern::make_a_RobotomyRequestForm(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form* Intern::make_a_PresidentialPardonForm(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);	
}

class Intern::EXCEPTION_TYPE_NOT_FOUND : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Type Of File Not Found !");
	}
};

Form* Intern::make_a_ShrubberyCreationForm(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}
		
Form* Intern::makeForm(const std::string form_type, const std::string target)
{
	Form* (Intern::*ptr_void[])(std::string) = {&Intern::make_a_RobotomyRequestForm, &Intern::make_a_PresidentialPardonForm, &Intern::make_a_ShrubberyCreationForm};
	std::string list[3] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	for (size_t i = 0; i < 3; i++)
	{
		if (list[i] == form_type)
		{
			std::cout << "Intern creates " << form_type << std::endl;
			return ((this->*ptr_void[i])(target));
		}
	}
	throw EXCEPTION_TYPE_NOT_FOUND();
}