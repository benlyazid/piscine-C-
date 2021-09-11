/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:06:55 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 11:07:51 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT
#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		Cat();
		~Cat();
		void makeSound() const;
};

#endif