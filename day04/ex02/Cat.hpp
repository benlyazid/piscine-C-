/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:06:55 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 13:47:19 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT
#define CAT
#include "animal.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		Cat();
		~Cat();
		void makeSound() const;
		void set_cat_ideas(std::string idea);
		std::string get_cat_idea(void);
};

#endif