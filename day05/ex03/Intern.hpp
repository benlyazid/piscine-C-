/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 09:00:34 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 09:47:27 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private :		
		Form *make_a_RobotomyRequestForm(std::string target);
		Form *make_a_PresidentialPardonForm(std::string target);
		Form *make_a_ShrubberyCreationForm(std::string target);
	public:
		class EXCEPTION_TYPE_NOT_FOUND;
		Intern();
		Intern(const Intern &intern);
		Intern& operator = (const Intern &intern);
		~Intern();
		Form *makeForm(const std::string form_type, const std::string taregt);
};

#endif