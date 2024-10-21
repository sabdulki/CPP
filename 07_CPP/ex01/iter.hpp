/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:08:41 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/21 16:11:47 by sabdulki         ###   ########.fr       */
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

template <typename T>
void iter(T* arr, unsigned int length, void(*const func)(T& elem))
{
	for (int i = 0; i < length; i++)
		func(arr[i]);
}

#endif