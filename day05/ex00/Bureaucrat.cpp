/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:08:58 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/13 15:56:29 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

Bureaucrat::Bureaucrat() : name("Default_Bureaucrat")
{
	grade = 150;
}

std::ostream& operator<<(std::ostream &os,  const Bureaucrat &buo)
{
	os << buo.getName() << " bureaucrat grade " << buo.getGrade();
	return (os);
	
}
