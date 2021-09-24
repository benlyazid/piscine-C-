/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:14:07 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 18:21:35 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	
}
Base* generate(void)
{
	int r = rand() % 3;
	switch (r)
	{
		case 0:
			return new A;
			break;
		case 1:
			return new B;
			break;
		default:
			return new C;
			break;
	}
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "Type is < A > \n";
		return ;
	}
	
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "Type is < B > \n";
		return ;
	}

	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "Type is < C > \n";
		return ;
	}

}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Type is < A > \n";
		(void)a;
		return ;
		
	}
	catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "Type is < B > \n";
		(void)b;
		return ;
		
	}
	catch(const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "Type is < C > \n";
		(void)c;
		return;
		
	}
	catch(const std::exception& e){}
	
}