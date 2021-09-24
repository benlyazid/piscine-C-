/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:53:13 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/16 07:55:07 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int l;
	public:
		class OUT_OF_RANGE : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return "Index Out Of Range :(";
				}	
		};
		
		Array(unsigned int n)
		{
			array = new T[n];
			l = n;
			std::cout << "creat ARRAY CONSTRUCTOR" << std::endl;
		}
		
		Array()
		{
			array = new T[0];
			l = 0;
			std::cout << "Creat ARRAY DEFAULT CONSTRUCTOR" << std::endl;
		}
		
		~Array()
		{
			delete array;
			std::cout << "ARRAY DESTRUCTOR" << std::endl;
		}
		
		Array(Array const &arr)
		{
			std::cout << "Copy ARRAY  CONSTRUCTOR " << std::endl;
			array = new T[0];
			*this = arr;
		}

		Array& operator =(Array const &arr)
		{
			if (this != &arr)
			{
				delete array;
				array = new T[arr.l];
				l = arr.l;
				for (unsigned int i = 0; i < l; i++)
				{
					array[i] = arr.array[i];
				}
			}
			return (*this);			
		}
		
		T& operator[](unsigned int index)
		{
			try
			{
				if (index >= l)
					throw OUT_OF_RANGE();
				return array[index];
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			return array[0];
		}
		unsigned int size() const
		{
			return (l);
		}
};



#endif