/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:08:46 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/13 15:53:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREACRAT
#define BUREACRAT

#include <iostream>
class Form;

#include <string>

class Bureaucrat
{
	private:
		const std::string name;
		int grade; //	1---150
	public:
		Bureaucrat(std::string const &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		Bureaucrat& operator =(Bureaucrat const &bureaucrat);
		~Bureaucrat();
		Bureaucrat();
		class EXCEPTIONE_EXECUTION_GRADE;
		class EXCEPTIONE_EXECUTION_SIGNE;
		class EXCEPTIONE_SIGNING;
		class GradeTooHighException;
		class GradeTooLowException;
		std::string getName() const;
		int getGrade() const;
		void incr_grade();
		void decr_grade();
		void signForm(Form &form);
		int get_value() const;
		void executeForm(Form const & form);
		
};
std::ostream& operator <<(std::ostream &os, const Bureaucrat &buo);

#endif