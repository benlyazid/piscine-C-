/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:18:00 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/05 15:15:19 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP
#define FRAGTRAP
#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(std::string str);
    ~FragTrap();
	void highFivesGuys(void);
};

#endif