/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:54:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 16:32:26 by kbenlyaz         ###   ########.fr       */
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
	brain = new (Brain);
	type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Desstructors" << std::endl;
}

void Dog::makeSound() const
{
	delete brain;
	std::cout << "Dog Sound" << std::endl;
	
}

//				CAT CLASS

Cat::Cat()
{
	type = "Cat";
	brain = new (Brain);
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructors" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;
}

//				BRAIN CLASS

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;	
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

