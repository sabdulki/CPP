/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:41 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/08 13:38:44 by sabdulki         ###   ########.fr       */
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

/*Why Use This Approach?
Compile-Time Safety: By specifying T (&arr)[N], 
the compiler ensures that iter only accepts arrays 
with a size known at compile-time. This prevents accidental passing 
of pointers or dynamically allocated arrays, which lack size information.*/

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