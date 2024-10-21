/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:26:26 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/21 16:56:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T arr[];
	public:
		Array();
		Array(unsigned int n);
		Array(Array& other);
		Array& operator=(Array& other);
		~Array();
		int size();
};

// Include the template definitions in the header file
#include "Array.tpp"

#endif