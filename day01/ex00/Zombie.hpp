/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:43:05 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 19:16:23 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
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
		Zombie(std::string);
		~Zombie(void);
};

Zombie* newZombie( std::string name);

void randomChump( std::string name);
#endif