/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:37:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 14:10:35 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "print the address\n\n";
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "\n\n\nprint the string\n\n";
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    return 0;
}
