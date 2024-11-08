/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:24 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/08 18:57:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), currentIndex(0), _array(new int[_size])
{
	std::cout << "Param constructor called\n";
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
		delete[] _array;
        _array = new int[other._size];
        for (unsigned int i = 0; i < other._size; i++)
            _array[i] = other._array[i];
        _size = other._size;
    }
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called\n";
	delete[] _array;
}

unsigned int Span::getSize() const
{
	return (_size);
}

unsigned int Span::getCurrentIndex() const
{
	return (currentIndex);
}

unsigned int Span::setCurrentIndex()
{
	return (currentIndex += 1);
}

int* Span::getArray() const
{
	return (_array);
}

int Span::operator[](unsigned int index) const
{
	if (index >= this->getSize())
		throw(std::out_of_range("element on this index is not found"));
	return (this->getArray()[index]);
}

std::ostream& operator<<(std::ostream& os, Span& obj)
{
	os << "array: ";
	for (unsigned int i = 0; i < obj.getSize(); i++)
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

void Span::randomlyFill()
{	
	std::srand(time(NULL));	
	unsigned int size = this->getSize();
	while (size-- > 0) 
	{
		this->addNumber(rand());
	}
	return ;
}

// void Span::generate_evenly_spaced(int begin, int end) 
// {
//     if (end == begin || begin > end)
// 		throw(std::invalid_argument("invalid argemnets"));
// 	unsigned int size = this->getSize();
// 	if (size < 2)
// 		throw(std::invalid_argument("invalid size"));
// 	if (size == 2)
// 	{
// 		this->addNumber(begin);
// 		this->addNumber(begin);
// 		return ;
// 	}

// 	double step = static_cast<double>(end - begin) / (size - 1);

//     for (unsigned int i = 0; i < size; ++i) {
//         int value = begin + static_cast<int>(i * step);
//         this->addNumber(value);
//     }
// 	return ;
// }

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
			// std::cout << "min dif: " << arr[i + 1] << " - " << arr[i] << " = " << min << std::endl;
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
	// std::cout << "max dif: " << maxValue << " - " << minValue << std::endl;
	return (maxValue - minValue);
}
