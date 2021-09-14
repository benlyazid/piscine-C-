/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:05:09 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/12 13:26:56 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "AMateria.hpp"
#include <string>
#include <iostream>
#include "ICharacter.hpp"
//class AMateria;

class Character : public ICharacter
{
	
	private:
		const std::string &name;
		int count;
		AMateria* materias[4];
		//std::shared_ptr<class AMateria>*impl[4];
	public:
		Character(const std::string &name);
		Character(const Character &charachter);
		Character& operator=(const Character &character);
		~Character();
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};



#endif