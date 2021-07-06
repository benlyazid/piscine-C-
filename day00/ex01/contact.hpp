/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:29:48 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/07/06 14:13:11 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

#define CONTACT_H

#include <string>
#include <iostream>
#include <stdlib.h>
class contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    
    public:
        void    set_first_name(std::string str);
        void    set_last_name(std::string str);
        void    set_nick_name(std::string str);
        void    set_phone_number(std::string str);
        void    set_darkset_secret(std::string str);
    
        std::string    get_first_name(void);
        std::string    get_last_name(void);
        std::string    get_nick_name(void);
        std::string    get_phone_number(void);
        std::string    get_darkset_secret(void);
};

#endif
