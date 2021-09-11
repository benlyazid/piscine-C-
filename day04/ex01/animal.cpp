/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:54:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 19:15:38 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

//				ANIMAL CLASS
 
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

//				DOG CLASS

// Dog::Dog()
// {
// 	brain = new (Brain);
// 	type = "Dog";
// 	std::cout << "Dog Constructor" << std::endl;
// }

// Dog::~Dog()
// {
// 	std::cout << "Dog Desstructors" << std::endl;
// }


// Dog::Dog(const Dog &dog)
// {
// 	std::cout << "Dog Deep Copy" << std::endl;
// 	brain = new(Brain);
// 	brain->set_ideas(dog.brain->get_ideas());
// }

// void Dog::makeSound() const
// {
// 	delete brain;
// 	std::cout << "Dog Sound" << std::endl;
	
// }

//				CAT CLASS



// Cat::Cat()
// {
// 	type = "Cat";
// 	brain = new (Brain);
// 	std::cout << "Cat Constructor" << std::endl;
// }

// Cat::Cat(Cat &cat)
// {
// 	std::cout << "Cat Deep Copy" << std::endl;	
// 	brain = new(Brain);
// 	brain->set_ideas(cat.brain->get_ideas());
// }

// Cat::~Cat()
// {
// 	delete brain;
// 	std::cout << "Cat Destructors" << std::endl;
// }

// void Cat::makeSound() const
// {
// 	std::cout << "Cat Sound" << std::endl;
// }

// void Cat::set_cat_ideas(std::string idea)
// {
// 	brain->set_ideas(idea);
// }

// std::string Dog::get_dog_idea(void)
// {
// 	return(brain->get_ideas());
// }

// void Dog::set_dog_ideas(std::string idea)
// {
// 	brain->set_ideas(idea);
// }

// std::string Cat::get_cat_idea(void)
// {
// 	return(brain->get_ideas());
// }




//				BRAIN CLASS

// Brain::Brain()
// {
// 	std::cout << "Brain Constructor" << std::endl;	
// }

// Brain::~Brain()
// {
// 	std::cout << "Brain Destructor" << std::endl;
// }

// void Brain::set_ideas(std::string idea)
// {
// 	for (size_t i = 0; i < 100; i++)
// 	{
// 		ideas[i] = idea;
// 	}
// }

// std::string Brain::get_ideas()
// {
// 	return (ideas[0]);
// }