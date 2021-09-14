/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 08:23:56 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 11:36:16 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H
#include "Character.hpp"

class Cure : public AMateria
{
	public:
		AMateria* clone();
		Cure();
		Cure(const Cure &cure);
		Cure& operator=(const Cure &cure);
		Cure* clone() const;
		~Cure();
		void use(ICharacter& target);
};



#endif