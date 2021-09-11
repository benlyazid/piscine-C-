/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:12:43 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:37:42 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructors" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal)
{
	std::cout << "WrongAnimal Copy  Constructor" << std::endl;

	*this = wronganimal;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &wronganimal)
{
	std::cout << "WrongAnimal Operator = " << std::endl;

	if (this != &wronganimal)
	{
		type = wronganimal.type;
	}
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
	
}

std::string WrongAnimal::getType() const
{
	return (type);
}
