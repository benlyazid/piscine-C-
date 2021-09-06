/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 10:16:28 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/06 11:42:12 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

/*class parent
{
	protected :
		int score;
	public :
		parent(){
			std::cout << "Parent" << std::endl;
		}
};

class father : virtual public parent
{
	public:
		father()
		{
			parent::score = 120;
			std::cout << "Father scr = " << parent::score << std::endl;
		}
};

class mother : virtual public parent
{
	public:
		mother()
		{
			parent::score = 190;
			std::cout << "Mother scr = " << parent::score << std::endl;

		}

};

class familly :  public mother, public  father
{

	public:
		familly()
		{
			std::cout << father::score << std::endl;

			 std::cout << mother::score << std::endl;
		}
};



*/
int main()
{	
	DiamondTrap diamon("diamon");
	diamon.attack("Enemy");
	diamon.highFivesGuys();
	diamon.whoAmI();	
	return 0;
}