/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/30 17:37:46 by sabdulki         ###   ########.fr       */
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
class MutantStack : public std::stack<T, anyContainer> // using Container as the underlying storage.
{
	public:
		MutantStack();
		~MutantStack();	
		typedef typename anyContainer::iterator iterator;
		typedef typename anyContainer::const_iterator const_iterator;

		iterator begin() {
			return this->c.begin();
		}
		iterator end(){
			return this->c.end();
		}
		const_iterator begin() const{
			return this->c.begin();
		}
		const_iterator end() const{
			return this->c.end();
		}
	
};



//there is a hidden c member (of type std::deque<int>) that stores the actual elements.
/*In your example, since you’re using std::stack<int>, the default underlying container 
is std::deque<int>, unless you specified a different container type.*/
/*
Since this->c is an instance of std::deque<int>, you can access all 
the public member functions of std::deque, such as push_back(), pop_back(), begin(), end(), etc.*/


#include "MutantStack.tpp"

#endif