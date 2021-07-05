/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz <kbenlyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:20:07 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/05 15:23:00 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phone_book.hpp"


void print_welcome_message()
{
	std::cout << "please Enetr one this cmds <ADD>, <SEARCH>, <EXIT>" << std::endl;
}

int	main()
{
	std::string		cmd;
	phone_book	book;

	while (1)
	{
		print_welcome_message();
		std::cin >>  cmd;
		
		if (cmd.compare("EXIT") == 0)
			break ;

		else if (cmd.compare("ADD") == 0)
		{
			book.add();
		}
	
		else if (cmd.compare("SEARCH") == 0)
		{
			book.serach();
		}
	}
	return (0);
}
