/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:45:45 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:25:07 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form::GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw()	
		{
			return "TooHight Error :(";
		}
};

class Form::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()	
		{
			return "TooLow Eroor :(";
		}
};
Form::Form(const std::string &name, const int &grade_to_sign, const int &grade_to_exec) : _name(name), _grade_required_to_execute(grade_to_exec), _grade_required_to_sign(grade_to_sign)
{

	if (grade_to_sign > 150 || grade_to_exec > 150)
		throw GradeTooHighException();
	if (grade_to_sign < 1 || grade_to_exec < 1)
		throw GradeTooHighException();
	_is_signed = false;
	std::cout << "Form Constructur" << std::endl;
}

Form::~Form()
{
	std::cout << "Form Deconstruct" << std::endl;
}

Form& Form::operator=(const Form &form)
{
	_is_signed = false;
	this->_is_signed = form._is_signed;
	(int&)_grade_required_to_execute = form._grade_required_to_execute;
	(int&)_grade_required_to_sign = form._grade_required_to_sign;
	(std::string&)_name = form._name;

	if (_grade_required_to_sign > 150 || _grade_required_to_execute > 150)
		throw GradeTooLowException();
	if (_grade_required_to_sign < 1 || _grade_required_to_execute < 1)
		throw GradeTooHighException();
	std::cout << "Form Opertor=" << std::endl;
	return (*this);
}


Form::Form(const Form &form) : _name(form._name), _grade_required_to_execute(form._grade_required_to_execute), _grade_required_to_sign(form._grade_required_to_sign)
{
	if (_grade_required_to_sign > 150 || _grade_required_to_execute > 150)
		throw GradeTooLowException();
	if (_grade_required_to_sign < 1 || _grade_required_to_execute < 1)
		throw GradeTooHighException();
	_is_signed = form._is_signed;
	std::cout << "Form Copy Constructur" << std::endl;
}

std::ostream& operator <<(std::ostream &os, Form &form)
{
	os << "___The Form INFO___\n" << "THE NAME         : " << form.get_name() << "\nGRADE TO SIGNE   : " << form.get_grade_to_sign() << "\nGRADE TO EXECUTE : " << form.get_grade_to_execute() << "\nIS SIGNED        : " << form.get_is_signed() << std::endl; 
	return (os);
}

int Form::get_grade_to_sign() const
{
	return (_grade_required_to_sign);
}

int Form::get_grade_to_execute() const
{
	return (_grade_required_to_execute);
}

std::string Form::get_name() const
{
	return (_name);
}

bool Form::get_is_signed() const
{
	return(_is_signed);
}

bool Form::beSigned(Bureaucrat &bureacrat)
{
	if (_grade_required_to_sign < bureacrat.getGrade())
		throw GradeTooLowException();
	_is_signed = true;
	return (true);
}

Form::Form() : _name("default"), _grade_required_to_execute(150), _grade_required_to_sign(150)
{
	_is_signed = false;
}


void Form::setName(std::string const name)
{
	std::string &ref_name = (std::string&)_name;
	ref_name = name;
}

void Form::setGradeExec(int const grade)
{
	int &ref_grade = (int&)_grade_required_to_execute;
	ref_grade = grade;
}

void Form::setGradeSign(int const grade)
{
	int &ref_grade = (int&)_grade_required_to_sign;
	ref_grade = grade;
}

void Form::set_is_signed(const bool sign)
{
	_is_signed = sign;
}

class Form::EXCEPTIONE_EXECUTION_GRADE : public std::exception
{
	public :
		virtual const char* what() const throw() 
		{
			return ("Bureaucrat Can't Execute The Form Because he Don't Have Enogh Grade");
		}
};

class Form::EXCEPTIONE_EXECUTION_SIGNE : public std::exception
{
	public :
		virtual const char* what() const throw() 
		{
			return ("Bureaucrat Can't Execute The Form Because The Form Is Not Signed");
		}
};

void Form::execute(Bureaucrat const &executor) const
{
		if (!_is_signed)
			throw EXCEPTIONE_EXECUTION_SIGNE();
		if (_grade_required_to_execute < executor.getGrade())
			throw EXCEPTIONE_EXECUTION_GRADE();
}