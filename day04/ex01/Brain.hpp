/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:28:21 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/11 13:32:31 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN__H
#define BRAIN__H
#include <string>
#include <iostream>

class Brain	
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &brain);
		Brain& operator=(const Brain &brain);
		~Brain();
		void set_ideas(std::string idea);
		std::string get_ideas() const;
};
#endif