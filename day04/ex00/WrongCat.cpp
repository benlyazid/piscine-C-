/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:15:06 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:38:07 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructors" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat Sound" << std::endl;
	
}
WrongCat::WrongCat(WrongCat const &wrongcat)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;

	*this = wrongcat;
}

WrongCat& WrongCat::operator=(WrongCat const &wrongcat)
{
	std::cout << "WrongCat Operator = " << std::endl;

	if (this != &wrongcat)
	{
		type = wrongcat.type;
	}
	return (*this);
}