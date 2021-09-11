/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:52:56 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 19:09:35 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL
#define ANIMAL
#include <iostream>
#include <string.h>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(Animal const &animal);
		Animal& operator=(Animal const &animal);
		virtual void makeSound() const;
		std::string getType() const;
};

#endif