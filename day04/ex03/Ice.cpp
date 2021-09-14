/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 08:15:51 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 08:34:59 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice_Constructor" << std::endl;   
}

Ice::~Ice()
{
	std::cout << "Ice_Destructor" << std::endl;
}

Ice::Ice(Ice const &ice) : AMateria(ice.type)
{
	std::cout << "Copy Ice_Constructor" << std::endl;   
	*this = ice;
}

Ice& Ice::operator=(Ice const &ice)
{
	std::cout << "Ice_Operator =" << std::endl;   

	if (&ice != this)
	{
		(std::string)this->type = ice.type;
	}
	return *this;	
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
