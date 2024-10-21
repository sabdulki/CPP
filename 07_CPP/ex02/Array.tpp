/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:26:29 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/21 16:57:33 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Default constructor called\n";
	arr = new T[];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Param constructor called\n";
	arr = new T[n];
}

template <typename T>
Array<T>::Array(Array& other)
{
	//use deep copy
	std::cout << "Copy constructor called\n";

}

template <typename T>
Array<T>& Array<T>::operator=(Array& other)
{
	//use deep copy
	std::cout << "Copy assignment operator called\n";

}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called\n";
	delete[] arr;
}

template <typename T>
int Array<T>::size()
{
	return (sizeof(this->arr) / sizeof(this->arr[0]));
}