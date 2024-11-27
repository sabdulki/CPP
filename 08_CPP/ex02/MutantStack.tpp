/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:18 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/27 20:08:02 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	std::cout << "MutantStack default constructor called\n";
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << "MutantStack default destructor called\n";
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin() {
	return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end() {
	return this->c.end();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::begin() const {
	return this->c.begin();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::end() const {
	return this->c.end();
}