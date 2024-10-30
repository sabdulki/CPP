/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/30 13:08:05 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

//allows you to specify a custom container type
//You can use any container type that supports 
// the same interface as std::deque (such as std::vector or std::list
template <typename T, typename anyContainer =  std::deque<T> >
class MutantStack : public std::stack<T, Container> // using Container as the underlying storage.
{
	public:
		MutantStack();
		~MutantStack();	
		typedef typename anyContainer::iterator = iterator;
		typedef typename anyContainer::const_iterator = const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
	
};

#include "MutantStack.tpp"

#endif