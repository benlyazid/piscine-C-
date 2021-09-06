/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:54:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 15:34:45 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

//				ANIMAL CLASS
 
Animal::Animal()
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructors" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
	
}
std::string Animal::getType() const
{
	return (type);
}

//				DOG CLASS

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Desstructors" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound" << std::endl;
	
}

//				CAT CLASS

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructors" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
	
}

//				WRONG_CAT CLASS

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

//				WrongANIMAL CLASS
 
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructors" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound" << std::endl;
	
}
std::string WrongAnimal::getType() const
{
	return (type);
}