/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:07:00 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/08 11:29:23 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(const std::string &type_name) : name(type_name)
{	
	count = 0;
}

Character::~Character()
{
	for (size_t i = 0; i < count + 1; i++)
	{
		delete materias[i];
	}
	
}

void Character::equip(AMateria  *materia)
{
	if (count == 4)
		return ;
	materias[count] = materia;
	count++;

}

void Character::unequip(int index)
{
	if (index >= 4)
		return ;
	while (index < count)
	{
		materias[index] = materias[index + 1];
		index++;
	}
	materias[index] = NULL;
	count--;
}

Character::Character(const Character &charachter) : name(charachter.name)
{
	this->count = charachter.count;
	for (size_t i = 0; i <= charachter.count; i++)
	{
		delete this->materias[i];
		this->materias[i] = charachter.materias[i];
	}
}


Character& Character::operator=(const Character &charachter)
{
	this->count = charachter.count;
	for (size_t i = 0; i <= charachter.count; i++)
	{
		delete this->materias[i];
		this->materias[i] = charachter.materias[i];
	}
}