/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:07:55 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:35:42 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructors" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = cat;

}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat Operator =" << std::endl;

	if (this != &cat)
	{
		this->type = cat.type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;	
}
