/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:24 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/28 16:28:19 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : currentIndex(0)
{
	std::cout << "Param constructor called\n";
	_size = N;
	_array = new int[_size];
}

Span::Span(const Span& other)
{
	std::cout << "Copy constructor called\n";
    _array = new int[other._size];
    for (unsigned int i = 0; i < other._size; i++)
        _array[i] = other._array[i];
    _size = other._size;
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        _array = new int[other._size];
        for (unsigned int i = 0; i < other._size; i++)
            _array[i] = other._array[i];
        _size = other._size;
    }
	return (*this);
}

Span::~Span()
{
	delete[] _array;
}

unsigned int Span::getSize()
{
	return (_size);
}

unsigned int Span::getCurrentIndex()
{
	return (currentIndex);
}

unsigned int Span::setCurrentIndex()
{
	return (currentIndex += 1);
}

int* Span::getArray()
{
	return (_array);
}

int Span::operator[](unsigned int index)
{
	if (index < 0 || index >= this->getSize())
		throw(std::out_of_range("element on this index is not found"));
	return (this->getArray()[index]);
}

std::ostream& operator<<(std::ostream& os, Span& obj)
{
	os << "array: ";
	for (int i = 0; i < obj.getSize(); i++)
		os << obj.getArray()[i] << ", ";
	return (os);
}

void Span::addNumber(int number)
{
	if (this->getCurrentIndex() >= this->getSize())
		throw (std::out_of_range("the array is full. cannot add new number"));
	this->getArray()[this->getCurrentIndex()] = number;
	setCurrentIndex();
}

void Span::fillArray(int n1, int n2)
{
	if (n1 == n2 || n1 > n2)
		throw(std::invalid_argument("invalid argemnets"));
	int size = this->getSize();
	int randomNbr;
	// Create a random number generator
    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 eng(rd()); // Seed the generator

    // Define the range
    std::uniform_int_distribution<> distr(n1, n2); // Define the range from -10 to 10
	for (int i = 0; i < size; i++)
	{
		randomNbr = distr(eng);
		this->addNumber(randomNbr);
	}
}

int Span::shortestSpan()
{
	if (this->getSize() <= 1)
		throw(std::out_of_range("no span can be found"));
	int *arr = this->getArray();
	int size = this->getSize();
	std::sort(arr, arr + size);
	int min = std::abs(arr[1] - arr[0]);
	for (int i = 0; i < (size - 1); i++)
	{
		if (std::abs(arr[i + 1] - arr[i]) < min)
		{
			min = std::abs(arr[i + 1] - arr[i]);
			std::cout << "min dif: " << arr[i + 1] << " - " << arr[i] << " = " << min << std::endl;
		}
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->getSize() <= 1)
		throw(std::out_of_range("no span can be found"));
	int *arr = this->getArray();
	int maxValue = *std::max_element(arr, arr + this->getSize());
    int minValue = *std::min_element(arr, arr + this->getSize());
	std::cout << "max dif: " << maxValue << " - " << minValue << std::endl;
	return(maxValue - minValue);
}
