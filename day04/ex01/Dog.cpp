/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:09:36 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 17:41:36 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "Dog Copy Constructor" << std::endl;

	*this = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog Operator =" << std::endl;
	if (this != &dog)
	{
		delete brain;
		brain = new Brain;
		this->type = dog.type;
		set_dog_ideas(dog.brain->get_ideas());
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog Sound" << std::endl;
}

std::string Dog::get_dog_idea(void)
{
	return(brain->get_ideas());
}

void Dog::set_dog_ideas(std::string idea)
{
	brain->set_ideas(idea);
}