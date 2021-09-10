/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:45:54 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/08 11:37:57 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

////////////////////////////////////////_________AMATERIA____/////////////////////////////////////////////////////////////
AMateria::AMateria(std::string const &type) : type(type)
{	
	std::cout << "default AMateria_Constructor" << std::endl;
}

AMateria::~AMateria()
{	
	std::cout << "AMateria_Destructor" << std::endl;
}
std::string const& AMateria::getType() const
{
	return (this->type);
}






/////////////////////////////////////_________MateriaSource__/////////////////////////////////////////////////////////////
MateriaSource::MateriaSource()
{
	std::cout << "default MateriaSource_Constructor" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource_Destructor" << std::endl;
}





////////////////////////////////////////_________ICE_________/////////////////////////////////////////////////////////////
Ice::Ice() : AMateria("ice")
{
	std::cout << "default Ice_Constructor" << std::endl;   
}

Ice::~Ice()
{
	std::cout << "Ice_Destructor" << std::endl;
}

Ice* Ice::clone() const
{
	Ice *ice = new(Ice);
	return ice;
}

void Ice::use(ICharacter &target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}





////////////////////////////////////////_________CURE________/////////////////////////////////////////////////////////////
Cure::Cure() : AMateria("cure")
{
	std::cout << "default Cure_Constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure_Destructor" << std::endl;
}

Cure* Cure::clone() const
{
	Cure *cure = new(Cure);
	return cure;
}

void Cure::use(ICharacter &target)
{
	std::cout <<  "* heals" << target.getName() << " wounds *" << std::endl;
}
