/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:43:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:45:22 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <iostream>
#include <string>
using namespace std;


int main()
{
	try
	{
		Bureaucrat buo("khalid_bureaucrat",1);
		PresidentialPardonForm sh_form("target_file_2");
		sh_form.beSigned(buo);
		buo.executeForm(sh_form);
		RobotomyRequestForm r_form("r_target");
		buo.signForm(r_form);
		Bureaucrat exec("exec", 110);
		exec.executeForm(r_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}