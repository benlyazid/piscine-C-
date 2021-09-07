/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:45:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 15:20:26 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include <string.h>
#include "Character.hpp"

class AMateria
{
	private:
	public:
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : IMateriaSource
{
	private:
		/* data */
	public:
		MateriaSource(/* args */);
		~MateriaSource();
		
};

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}

#endif