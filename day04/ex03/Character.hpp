/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:05:09 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/08 11:02:26 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER
#define ICHARACTER

#include "AMateria.hpp"

class ICharacter
{
	protected:
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : ICharacter
{
	
	private:
		const std::string &name;
		int count;
		AMateria *materias[4];
	public:
		Character(const std::string &type_name);
		Character(const Character &charachter);
		Character& operator=(const Character &character);
		~Character();
		void equip(AMateria* m) = 0;
		void unequip(int idx);
};



#endif