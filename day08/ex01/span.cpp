/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:13:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 16:36:26 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

class Span::Exception_Span : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("The array is Full !!\n");
		}
};

class Span::Exception_EMPTY_Span : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("The array have less than 2 numbers !!\n");
		}
};

Span::Span(uint N)
{
	this->N = N;
	this->size = 0;
	my_array = new uint[N];
}

Span::Span(const Span &span)
{
	my_array = new uint[0];
	*this = span;
}


Span::~Span()
{
}

Span& Span::operator=(const Span &span)
{
	if (this != &span)
	{
		delete my_array;
		size = span.size;
		N = span.N;
		my_array = new uint [N];
		for (uint i = 0; i < N; i++)
		{
			my_array[i] = span.my_array[i];
		}
	}
	return (*this);
}

void Span::addNumber(uint number)
{

	if (size == N)
		throw Exception_Span();

	my_array[size] = number;
	size++;

	
}

uint Span::longestSpan() const
{
	if (size < 2)
		throw Exception_EMPTY_Span();
	uint max = *std::max_element(my_array, my_array + N);
	uint min = *std::min_element(my_array, my_array + N);
	return max - min;
}

uint Span::shortestSpan()const
{
	
	if (size < 2)
		throw Exception_EMPTY_Span();
	std::sort(my_array, my_array + N);
	uint min_span = *std::max_element(my_array, my_array + N);
	for (uint i = 1; i < size; i++)
	{	
		if (my_array[i] - my_array[i - 1] < min_span)
		min_span = my_array[i] - my_array[i - 1];
	}
	return (min_span); 
}