/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:54:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:36:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

 
Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "Animal Copy Constructor" << std::endl;

	*this = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal Operator =" << std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
