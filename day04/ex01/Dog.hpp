/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:08:45 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 13:49:40 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "animal.hpp"

class Dog : public Animal
{
	private: 
		Brain *brain;
	public:
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		Dog();
		~Dog();
		void makeSound() const;
		void set_dog_ideas(std::string idea);
		std::string get_dog_idea(void);
};

#endif