/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:43:05 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 13:47:59 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string	name;
    public:
		void	announce(void);
		void	set_name(std::string name);
		Zombie(void);
		~Zombie(void);
};

Zombie* newZombie( std::string name);
#endif