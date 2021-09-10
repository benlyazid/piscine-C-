/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:45:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/08 11:46:34 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include <string.h>
#include "Character.hpp"

class AMateria
{
	protected:
		const std::string  &type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

class Ice : public AMateria
{	
	public:
		AMateria* clone();
		Ice();
		Ice* clone() const;
		~Ice();
		void use(ICharacter& target);
};

class Cure : public AMateria
{
	public:
		AMateria* clone();
		Cure();
		Cure* clone() const;
		~Cure();
		void use(ICharacter& target);
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
	public:
		MateriaSource();
		~MateriaSource();
		void learnMateria();	
};
#endif

//NOT FINISHE YET