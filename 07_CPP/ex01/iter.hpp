/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:41 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/07 22:13:49 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void minus(T& element) 
{
   element -= 1;
}

// Specialization for string
template <>
void minus(std::string& value) 
{
	int len = value.length();
	if (len > 0)
		value[len - 1] = '\0';
}

template <typename T>
void power(T& element) 
{
   element += element;
}

template <typename T>
void printElement(T& element) 
{
    std::cout << element << std::endl;
}

template <typename T, size_t N, typename F>
void iter(T (&arr)[N], unsigned int length, F func)
{
	if (N < length)
		return;
	std::cout << x << std::endl;
	for (unsigned int i = 0; i < length; i++)
		func(arr[i]);
}

#endif