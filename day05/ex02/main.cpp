/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 13:43:10 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 15:06:51 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>
using namespace std;

	

class Base
{
	private:
		int const number;
	public:
		Base(int num): number(num){}
		virtual void check_number()
		{
			if (number == 0)
				throw EXECEPTION();
		};

		class EXECEPTION : public exception
		{
			private:
				/* data */
			public:
				virtual const char* what() const throw()
				{
					return("EXCEPTION");
				}
		};
};

class Child : public Base
{
	public:
		Child(int num) : Base(num)
		{
			
		}
		void check_number()
		{
			try
			{
				Base::check_number();
				printf("check done");
			}
			catch(EXECEPTION& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
};


class Point
{
	private:
		const int x;
		const int y;
	public :
		Point(const int x, const int y) : x(x), y(y) {}
		int	get_x() const {return x;}
		int	get_y() const {return y;}
};

void check_points(const Point a, const Point b, const Point c)
{
	std::cout << a.get_x() << "    " << a.get_y() << std::endl;
	std::cout << b.get_x() << "    " << b.get_y() << std::endl;
	std::cout << c.get_x() << "    " << c.get_y() << std::endl;
}

int main()
{
	Bureaucrat buo("khalid_bureaucrat",10);
	ShrubberyCreationForm sh_form("target_file");
	sh_form.beSigned(buo);
	sh_form.execute(buo);
	

	//Child  child(0);
	//child.check_number();

	// Point a(10,10);
	// Point b(100,100);
	// Point c(1000,1000);
	// check_points(a, b, c);
	
}