/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 08:15:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 11:35:54 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H
//#include "AMateria.hpp"
#include "Character.hpp"

class Ice : public AMateria
{	
	public:
		AMateria* clone();
		Ice();
		Ice(const Ice &ice);
		Ice& operator=(const Ice &ice);
		Ice* clone() const;
		~Ice();
		void use(ICharacter& target);
};
#endif
