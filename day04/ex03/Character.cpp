/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:07:00 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:50:12 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : name(name)
{	
	count = 0;
	std::cout << "Character_Constructor" << std::endl;

}
Character::Character(Character const &charachter): name(charachter.name)
{
	std::cout << "Character_Copy_Constructor" << std::endl;
	*this = charachter;
}

Character& Character::operator=(Character const &charachter)
{
	std::cout << "Character_Operator =" << std::endl;
	
	if (this != &charachter)
	{

		(std::string)name = charachter.name;
		count = charachter.count;
		for (size_t i = 0; i < 4; i++)
		{
			delete materias[i];
			materias[i] = charachter.materias[i];
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character_Destructor" << std::endl;
	for (int i = 0; i < count + 1; i++)
	{
		delete materias[i];
	}
}

void Character::equip(AMateria  *materia)
{
	if (count == 3)
		return ;
	materias[count] = materia;
	count++;
}

void Character::unequip(int index)
{
	if (index >= 4)
		return ;
	materias[index] = NULL;
	while (index < count)
	{
		materias[index] = materias[index + 1];
		index++;
	}
	materias[index] = NULL;
	count--;
}

std::string const &Character::getName()const
{
	return (name);
}

void Character::use(int idx, ICharacter&target)
{
	if (idx > count)
		return ;
	materias[idx]->use(target);
	
}