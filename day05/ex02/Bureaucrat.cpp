/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:08:58 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 07:18:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat::GradeTooHighException : public std::exception
{
	public:
		virtual const char* what() const throw()	
		{
			return "TooHight Error :(";
		}
};

class Bureaucrat::GradeTooLowException : public std::exception
{
	public:
		virtual const char* what() const throw()	
		{
			return "TooLow Eroor :(";
		}
};

Bureaucrat::Bureaucrat(std::string const &name, int grd) : name(name)
{
		if (grd > 150)
			throw GradeTooLowException();
		if (grd < 1)
			throw GradeTooHighException();
		this->grade = grd;
		std::cout << "Criet Bureaucrat Seccufully" << std::endl;	
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): name(bureaucrat.name)
{
		if (bureaucrat.grade > 150)
			throw GradeTooLowException();
		if (bureaucrat.grade < 1)
			throw GradeTooHighException();
	
		std::cout<< "Bureaucrat Copy Constructur" << std::endl;
		*this = bureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.grade > 150)
		throw GradeTooLowException();
	if (bureaucrat.grade < 1)		
		throw GradeTooHighException();
	
	std::cout<< "Bureaucrat operator=" << std::endl;
	grade = bureaucrat.getGrade();
	(std::string)name =  bureaucrat.getName();
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

std::string Bureaucrat::getName() const
{
	return (name);
}

void Bureaucrat::incr_grade()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
	std::cout << "Your new grade after increment is " << grade << std::endl;
}

void Bureaucrat::decr_grade()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
	std::cout << "Your new grade after decrement is " << grade << std::endl;
}

std::ostream& operator<<(std::ostream &os,  const Bureaucrat &buo)
{
	os << buo.getName() << " bureaucrat grade " << buo.getGrade();
	return (os);	
}

void Bureaucrat::signForm(Form &form)
{
	if (form.get_grade_to_sign() > grade)
	{
		std:: cout <<  name << " sign " << form.get_name() << std::endl;
		form.set_is_signed(true);
	}
	else
		std:: cout <<  name << " cannot sign " << form.get_name() << " ,because Form_grade_to_sign  is  : " << form.get_grade_to_sign() << " and the bureaucrat have just grade : " << grade << std::endl;
}

Bureaucrat::Bureaucrat() :  name("default_Bureaucrat")
{
	grade = 150;
}

class Bureaucrat::EXCEPTIONE_EXECUTION_GRADE : public std::exception
{
	public :
		virtual const char* what() const throw() 
		{
			return ("Bureaucrat Can't Execute The Form Because he Don't Have Enogh Grade");
		}
};

class Bureaucrat::EXCEPTIONE_EXECUTION_SIGNE : public std::exception
{
	public :
		virtual const char* what() const throw() 
		{
			return ("Bureaucrat Can't Execute The Form Because The Form Is Not Signed");
		}
};

class Bureaucrat::EXCEPTIONE_SIGNING : public std::exception
{
	public :
		virtual const char* what() const throw() 
		{
			return ("Bureaucrat Can't Sign The Form Because  he Don't Have Enogh Grade");
		}
};

void Bureaucrat::executeForm(Form const &form)
{

	if (!form.get_is_signed())
		throw EXCEPTIONE_EXECUTION_SIGNE();
	if (form.get_grade_to_execute() < grade)
		throw EXCEPTIONE_EXECUTION_GRADE();
	form.execute(*this);
	std::cout << name << " EXECUTE : " << form.get_name() << std::endl;

}
