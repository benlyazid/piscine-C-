/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:52:56 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 15:35:39 by kbenlyaz         ###   ########.fr       */
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
		~Animal();
		virtual void makeSound() const;
		std::string getType() const;
};

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		void makeSound() const;

};

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;

};
#endif