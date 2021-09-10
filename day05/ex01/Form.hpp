/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:45:05 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/09 17:59:54 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>
//#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _grade_required_to_execute;
		const int _grade_required_to_sign;
	public:
		Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec);
		~Form();
		Form();
		Form& operator=(const Form &form);
		Form(const Form &form);
		int get_grade_to_sign() const;
		int get_grade_to_execute() const;
		bool get_is_signed();
		std::string get_name() const;
		bool beSigned(Bureaucrat &bueucrat);
};

std::ostream& operator <<(std::ostream &os, Form &form);
#endif
