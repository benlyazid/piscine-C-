/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:52:56 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 12:17:34 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL
#include <iostream>
#include <string.h>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

class Brain	
{
	private:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		void set_ideas(std::string idea);
		std::string get_ideas();
};

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &dog);
		void set_dog_ideas(std::string idea);
		std::string get_dog_idea(void);
		void makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(Cat &cat);
		~Cat();
		void set_cat_ideas(std::string idea);
		std::string get_cat_idea(void);
		void makeSound() const;
};

#endif