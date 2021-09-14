/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 08:23:50 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:50:52 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure_Constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure_Destructor" << std::endl;
}

Cure::Cure(Cure const &cure) : AMateria(cure.type)
{
	std::cout << "Copy Cure_Constructor" << std::endl;   
	*this = cure;
}

Cure& Cure::operator=(Cure const &cure)
{
	std::cout << "Cure_Operator =" << std::endl;   

	if (&cure != this)
	{
		(std::string)this->type = cure.type;
	}
	return *this;
}

Cure* Cure::clone() const
{
	Cure *cure = new(Cure);
	return cure;
}

void Cure::use(ICharacter &target)
{
	std::cout <<  "* heals " << target.getName() << " wounds *" << std::endl;
}
