/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:20:07 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 11:05:38 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phone_book.hpp"

void	Phone_book::add(void)
{
	std:: string f_name, l_name, n_name, p_number, d_secret;
	index = index % SIZE;
	contact new_contact;

	std::cout << "PLEASE ENTER FIRST_NAME" << std::endl;
	std::cin.ignore();
	std::getline(std::cin, f_name);
		
	std::cout << "PLEASE ENTER LAST_NAME" << std::endl;
	std::cin.ignore();
	getline(std::cin, l_name);

	std::cout << "PLEASE ENTER NICK_NAME" << std::endl;
	std::cin.ignore();
	getline(std::cin, n_name);

	std::cout << "PLEASE ENTER PHONE_NUMBER" << std::endl;
	std::cin.ignore();
	getline(std::cin, p_number);

	std::cout << "PLEASE ENTER DARKSET_SECRET" << std::endl;
	std::cin.ignore();
	getline(std::cin, d_secret);

	new_contact.set_first_name(f_name);
	new_contact.set_last_name(l_name);
	new_contact.set_nick_name(n_name);
	new_contact.set_phone_number(p_number);
	new_contact.set_darkset_secret(d_secret);
	my_contact[index] = new_contact;
	index++;
}

Phone_book::Phone_book()
{
	index = 0;
}

void	Phone_book::print_10_chart_from_string(std::string str)
{
	int len = str.length();
	for (int i = 0; i < 10; i++)
	{
		if (i < len  && i == 9 && len > 10)
			std::cout << '.';                    
		else if ( i < len)
			std::cout << str[i];
		else
			std::cout << ' ';
	}
	std::cout << '|';
}

void print_welcome_message()
{
	std::cout << "please Enetr one this cmds <ADD>, <SEARCH>, <EXIT>" << std::endl;
}

void    Phone_book::serach()
{
	std::cout << "Index     |";
	std::cout << "f_name    |";
	std::cout << "l_name    |";
	std::cout << "n_name    |" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << i ;
		std::cout << "         |";
		print_10_chart_from_string(my_contact[i].get_first_name());
		print_10_chart_from_string(my_contact[i].get_last_name());
		print_10_chart_from_string(my_contact[i].get_nick_name());
		std::cout << std::endl;
	}
	std::cout << "ENTER INDEX OF CONTACT YOU WANT" << std::endl;
	int index_to_set;
	std::cin >> index_to_set;

	if (index_to_set < 0 || index_to_set >=  index)
		std::cout << "INDEX NOT FOUND :( " << std::endl;
	else
	{
		std::cout << "FIRST_NAME     :  " <<  my_contact[index_to_set].get_first_name() << std::endl;
		std::cout << "LAST_NAME      :  " <<   my_contact[index_to_set].get_last_name() << std::endl;
		std::cout << "NICK_NAME      :  " <<   my_contact[index_to_set].get_nick_name() << std::endl;
		std::cout << "PHONE_NUMBER   :  " <<   my_contact[index_to_set].get_phone_number() << std::endl;
		std::cout << "DARKSET_SECRET :  " <<   my_contact[index_to_set].get_darkset_secret() << std::endl;
		std::cout << "------------------------------------------------" << std::endl << std::endl;
	}
}

int	main()
{
	std::string		cmd;
	Phone_book	book;

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
