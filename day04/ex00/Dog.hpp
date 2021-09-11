/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:08:45 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 11:11:15 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		Dog();
		~Dog();
		void makeSound() const;
};

#endif