/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 10:39:36 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:54:19 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource_Constructor" << std::endl;
	count = 0;
}

MateriaSource::MateriaSource(const MateriaSource &materiasource)
{
	std::cout << "MateriaSource_Copy_Constructor" << std::endl;
	*this = materiasource;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materiasource)
{
	std::cout << "MateriaSource_Operator =" << std::endl;

	if (this != &materiasource)
	{
		count = materiasource.count;
		for (size_t i = 0; i < 4; i++)
		{
			delete materias[i];
			materias[i] = materiasource.materias[i];
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource_Destructor" << std::endl;
	for (size_t i = 0; i < count; i++)
	{
		delete materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *amateria)
{
	if (count == 4)
		return;
	materias[count] = amateria;
	count++;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < count; i++)
	{
		if (materias[i]->getType() == type)
		{
			return (materias[i]->clone());
		}
	}
	return 0;
}