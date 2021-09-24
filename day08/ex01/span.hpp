/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:08:38 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 16:32:39 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

typedef unsigned int uint;
#include <iostream>
class Span
{
	private:
		unsigned int N;
		unsigned int size;
		unsigned int *my_array;
		class Exception_Span;
		class Exception_EMPTY_Span;
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &span);
		Span& operator=(const Span &span);
		void addNumber(unsigned int element);
		unsigned int shortestSpan()const ;
		unsigned int longestSpan() const ;
};

#endif