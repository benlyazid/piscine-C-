/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:20:37 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/14 18:20:44 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"



int main()
{
	srand(time(NULL));

	Base *b_ptr = generate();
	identify(b_ptr);
	identify(*b_ptr);
	
	return 0;
}
