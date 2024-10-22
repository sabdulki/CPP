/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:26:29 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/22 13:52:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	std::cout << "Default constructor called\n";
	arr = new T;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "Param constructor called\n";
	arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
{
	//use deep copy
	std::cout << "Copy constructor called\n";
	this->arr = new T;
	*this->arr = *other.arr
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	//use deep copy
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
	{
		this->arr = new T;
		*this->arr = *other.arr
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Destructor called\n";
	delete[] arr;
}

template <typename T>
int Array<T>::size() const
{
	return (sizeof(this->arr) / sizeof(this->arr[0]));
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->size())
		throw(std::out_of_range("Index is out of bounds"));
	return (arr[index]);
}
