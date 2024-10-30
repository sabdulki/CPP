/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:18 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/30 13:09:27 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename anyContainer>
MutantStack<T, anyContainer>::MutantStack()
{
	std::cout << "MutantStack default constructor called\n";
}

template<typename T, typename anyContainer>
MutantStack<T, anyContainer>::~MutantStack()
{
	std::cout << "MutantStack default destructor called\n";
}

//there is a hidden c member (of type std::deque<int>) that stores the actual elements.
/*In your example, since you’re using std::stack<int>, the default underlying container 
is std::deque<int>, unless you specified a different container type.*/
/*
Since this->c is an instance of std::deque<int>, you can access all 
the public member functions of std::deque, such as push_back(), pop_back(), begin(), end(), etc.*/

template<typename T, typename anyContainer>
typename MutantStack<T, anyContainer>::iterator MutantStack<T, anyContainer>::begin()
{
    return this->c.begin();  // Access the underlying container's begin
}

template<typename T, typename anyContainer>
typename MutantStack<T, anyContainer>::iterator MutantStack<T, anyContainer>::end()
{
	return this->c.end();
}

template<typename T, typename anyContainer>
const_iterator MutantStack<T, anyContainer>::begin() const
{
	return this->c.begin();
}

template<typename T, typename anyContainer>
const_iterator MutantStack<T, anyContainer>::end() const
{
	return this->c.end();
}
