/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz <kbenlyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:29:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 09:30:18 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK

#define PHONE_BOOK

#include "contact.hpp"

#define SIZE 8
class phone_book
{
    private:

        contact my_contact[SIZE];
        int     index;

    public:

        phone_book()
        {
            index = 0;
        }
    
        void    add()
        {
            index = index % SIZE;
            contact new_contact;

            std::cout << "PLEASE ENTER FIRST_NAME" << std::endl;
            std::cin.ignore();
            std::getline(std::cin, new_contact.first_name);
                
            std::cout << "PLEASE ENTER LAST_NAME" << std::endl;
            std::cin.ignore();
            getline(std::cin, new_contact.last_name);

            std::cout << "PLEASE ENTER NICK_NAME" << std::endl;
            std::cin.ignore();
            getline(std::cin, new_contact.nick_name);

            std::cout << "PLEASE ENTER PHONE_NUMBER" << std::endl;
            std::cin.ignore();
            getline(std::cin, new_contact.phone_number);
        
            std::cout << "PLEASE ENTER DARKSET_SECRET" << std::endl;
            std::cin.ignore();
            getline(std::cin, new_contact.darkest_secret);
            my_contact[index] = new_contact;
            index++;   
        }

		void	print_10_chart_from_string(std::string str)
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

        void    serach()
        {
            std::cout << "Index     |";
            std::cout << "f_name    |";
            std::cout << "l_name    |";
            std::cout << "n_name    |" << std::endl;
			for (int i = 0; i < index; i++)
			{
                std::cout << i ;
                std::cout << "         |";
                print_10_chart_from_string(my_contact[i].first_name);
                print_10_chart_from_string(my_contact[i].last_name);
                print_10_chart_from_string(my_contact[i].nick_name);
				std::cout << std::endl;
			}
			std::cout << "ENTER INDEX OF CONTACT YOU WANT" << std::endl;
			int index_to_set;
			std::cin >> index_to_set;
	
			if (index_to_set < 0 || index_to_set >=  index)
				std::cout << "INDEX NOT FOUND :( " << std::endl;
			else
			{
				std::cout << "FIRST_NAME     :  " <<  my_contact[index_to_set].first_name << std::endl;
				std::cout << "LAST_NAME      :  " <<   my_contact[index_to_set].last_name << std::endl;
				std::cout << "NICK_NAME      :  " <<   my_contact[index_to_set].nick_name << std::endl;
				std::cout << "PHONE_NUMBER   :  " <<   my_contact[index_to_set].phone_number << std::endl;
				std::cout << "DARKSET_SECRET :  " <<   my_contact[index_to_set].darkest_secret << std::endl;
				std::cout << "------------------------------------------------" << std::endl << std::endl;
			}
        }
};

#endif
