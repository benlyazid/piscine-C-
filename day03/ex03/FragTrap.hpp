/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:18:00 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 18:01:05 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP
#include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
{
	private:

	public:
		FragTrap(std::string str);
		~FragTrap();
		FragTrap();
		FragTrap(const FragTrap &fragtrap);
		FragTrap& operator=(const FragTrap &fragtrap);
		void highFivesGuys(void);
};

#endif