/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:08:58 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 07:43:09 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name)
{
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooHight Error :(";
			}
	};

		class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooLow Eroor :(";
			}
	};
	try
	{
		this->grade = grade;
		if (grade > 150)
			throw GradeTooLowException();
		if (grade < 1)
			throw GradeTooHighException();
			
		std::cout << "Criet Bureaucrat Seccufully" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
		
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): name(bureaucrat.name)
{
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooHight Error :(";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooLow Eroor :(";
			}
	};
	try
	{
		std::cout<< "Bureaucrat Copy Constructur" << std::endl;
		this->grade = bureaucrat.getGrade();
		if (bureaucrat.grade > 150)
			throw GradeTooLowException();
		if (bureaucrat.grade < 1)
			throw GradeTooHighException();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{


	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooHight Error :(";
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return "TooLow Eroor :(";
			}
	};
	try
	{
		std::cout<< "Bureaucrat operator=" << std::endl;
		grade = bureaucrat.getGrade();
		(std::string)name =  bureaucrat.getName();

		if (bureaucrat.grade > 150)
			throw GradeTooLowException();
		if (bureaucrat.grade < 1)		
			throw GradeTooHighException();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
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
		class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return " Error : you can't incr the grade anymore :(";
			}
	};
	try
	{
		if (grade == 1)
			throw GradeTooHighException();
		grade--;
		std::cout << "Your new grade after increment is " << grade << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what() << std::endl;
	}
}

void Bureaucrat::decr_grade()
{
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()	
			{
				return " Error : you can't decr the grade anymore :(";
			}
	};
	try
	{
		if (grade == 150)
			throw GradeTooLowException();
		grade++;
		std::cout << "Your new grade after decrement is " << grade << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr<< e.what() << std::endl;
	}
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
