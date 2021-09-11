/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:12:12 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 11:13:50 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL

#include "animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &wronganimal);
		WrongAnimal& operator=(WrongAnimal const &wronganimal);
		void makeSound() const;
		std::string getType() const;
};

#endif