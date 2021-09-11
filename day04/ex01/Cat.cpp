/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:07:55 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 19:05:52 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain;
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat()
{
	delete brain;
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
		delete brain;
		brain = new Brain;
		this->type = cat.type;
		set_cat_ideas(cat.brain->get_ideas());		
		//brain = cat.brain; THIS IS NOT A DEPP COPY EXEMPLE
	}
	return *this;
}


void Cat::makeSound() const
{
	std::cout << "Cat Sound" << std::endl;	
}

std::string Cat::get_cat_idea(void)
{
	return(brain->get_ideas());
}

void Cat::set_cat_ideas(std::string idea)
{
	brain->set_ideas(idea);
}