/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:18 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/30 17:37:33 by sabdulki         ###   ########.fr       */
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
