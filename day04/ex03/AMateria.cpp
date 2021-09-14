/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:45:54 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:00:22 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{	
	std::cout << "AMateria_Constructor" << std::endl;
}

AMateria::~AMateria()
{	
	std::cout << "AMateria_Destructor" << std::endl;
}

AMateria::AMateria(AMateria const & materia) : type(materia.type)
{
	std::cout << "AMateria_Copy_Constructor" << std::endl;
	*this = materia;
}

AMateria& AMateria::operator=(AMateria const & materia)
{
	std::cout << "AMateria_Operator =" << std::endl;
	if (this != &materia)
	{
		(std::string)type = materia.type;
	}
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

 void AMateria::use(ICharacter& target)
 {
	std::cout << "AMateria Use Function for target "<< target.getName()  << std::endl; 
 }



