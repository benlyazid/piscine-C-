/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbenlyaz < kbenlyaz@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:34:57 by kbenlyaz          #+#    #+#             */
/*   Updated: 2021/09/17 16:25:07 by kbenlyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTASTACK
#define UNTASTACK
#include <iostream>
#include <stack>
#include <iterator>

template< typename T>

class MutantStack : public std::stack<T>
{
	private:
	public:
		typedef typename MutantStack::container_type::iterator iterator;
		MutantStack()
		{

		}
		~MutantStack()
		{

		}
		MutantStack(const MutantStack &muntaStack)
		{
			*this = muntaStack;	
		}
		
		MutantStack& operator=(const MutantStack &mutantStack)
		{
			this->c = mutantStack->c;
		}
	
		iterator begin(){return this->c.begin();}

		iterator end(){return this->c.end();}

};

#endif
