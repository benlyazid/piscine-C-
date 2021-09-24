/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:08:11 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 17:42:35 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"
int main()
{
	try
	{
		Span sp = Span(7);
		sp.addNumber(100);
		sp.addNumber(20);
		sp.addNumber(190);
		sp.addNumber(50);
		sp.addNumber(300);
		sp.addNumber(1);
		sp.addNumber(200);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	

}
