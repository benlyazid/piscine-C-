/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:43:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:58:48 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	try
	{
		Bureaucrat buo("khalid_bureaucrat",3);
		PresidentialPardonForm sh_form("target_file_2");
		buo.signForm(sh_form);
		buo.executeForm(sh_form);
		RobotomyRequestForm r_form("r_target");
		buo.signForm(r_form);
		Bureaucrat exec("exec", 3);
		exec.executeForm(r_form);
		std::cout << "-------------------------------------\n";
		Intern intern;
		Form *f1 = intern.makeForm("PresidentialPardonForm", "tarhet");
		buo.executeForm(*f1);
		buo.decr_grade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
}