/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/27 20:14:30 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <list>

//allows you to specify a custom container type
//You can use any container type that supports 
// the same interface as std::deque (such as std::vector or std::list
template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> // using Container as the underlying storage.
{
	public:
		MutantStack();
		~MutantStack();	
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;

};

//there is a hidden c member (of type std::deque<int>) that stores the actual elements.
/*In your example, since you’re using std::stack<int>, the default underlying container 
is std::deque<int>, unless you specified a different container type.*/
/*
Since this->c is an instance of std::deque<int>, you can access all 
the public member functions of std::deque, such as push_back(), pop_back(), begin(), end(), etc.*/


#include "MutantStack.tpp"

#endif