/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:45:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:49:00 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include <string.h>
#include "ICharacter.hpp"
class AMateria
{
	protected:
		const std::string  type;
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const & materia);
		AMateria& operator =(AMateria const & materia);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
