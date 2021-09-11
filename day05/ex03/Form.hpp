/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:45:05 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 07:47:40 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>

class Bureaucrat;
class Form
{
	private:
		 std::string const _name;
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
		bool get_is_signed() const;
		std::string get_name() const;
		bool beSigned(Bureaucrat &bueucrat);
		virtual void execute(Bureaucrat const & executor)const;
		class EXCEPTIONE_EXECUTION_GRADE;
		class EXCEPTIONE_EXECUTION_SIGNE;
		void setName(const std::string name);
		void setGradeExec(const int grade);
		void setGradeSign(const int grade);
		void set_is_signed(const bool sign);
};

std::ostream& operator <<(std::ostream &os, Form &form);
#endif
