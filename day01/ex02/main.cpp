/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 13:37:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/07 19:32:49 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN" ;
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout  << "print the address\n\n";
    std::cout << "String            : " << &str << std::endl;
    std::cout << "String_Ptr        : " << stringPTR << std::endl;
    std::cout << "String_Ref        : " << &stringREF << std::endl;

    std::cout << "\nprint the string\n\n";
    std::cout << "using pointer     : " << *stringPTR << std::endl;
    std::cout << "using reference   : " << stringREF << std::endl;
    
    return 0;
}
