/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:52:56 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 17:39:27 by kbenlyaz         ###   ########.fr       */
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
};

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		void makeSound() const;
};

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		void makeSound() const;

};

#endif