/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:01:38 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/10 18:01:39 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    private:
    public:
        ScavTrap(std::string str);
        ~ScavTrap();
        ScavTrap();
        ScavTrap(ScavTrap const &scavtrap);
        ScavTrap& operator=(ScavTrap const &scavtrap);
	    void attack(std::string const & target);
        void guardGate();

};

#endif