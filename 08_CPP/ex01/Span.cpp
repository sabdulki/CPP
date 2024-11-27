/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:24 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/27 19:09:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _size(N), currentIndex(0), _vector(N)
{
	std::cout << "Param constructor called\n";
}

Span::Span(const Span& other)
{
	std::cout << "Copy constructor called\n";
    _vector = std::vector<int>(other._size);
    for (unsigned int i = 0; i < other._size; i++)
        _vector[i] = other._vector[i];
    _size = other._size;
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Copy assignment operator called\n";
    if (this != &other)
    {
        _vector = std::vector<int>(other._size);
        for (unsigned int i = 0; i < other._size; i++)
            _vector[i] = other._vector[i];
        _size = other._size;
    }
	return (*this);
}

Span::~Span()
{
	std::cout << "Destructor called\n";
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

std::vector<int>& Span::getVector()
{
	return (_vector);
}

int Span::operator[](unsigned int index)
{
	if (index >= this->getSize())
		throw(std::out_of_range("element on this index is not found"));
	return (this->getVector()[index]);
}

std::ostream& operator<<(std::ostream& os, Span& obj)
{
	os << "array: ";
	for (unsigned int i = 0; i < obj.getSize(); i++)
		os << obj.getVector()[i] << ", ";
	return (os);
}

void Span::addNumber(int number)
{
	if (this->getCurrentIndex() >= this->getSize())
		throw (std::out_of_range("the array is full. cannot add new number"));
	std::vector<int>& vect = this->getVector();
	vect[this->getCurrentIndex()] = number;
	setCurrentIndex();
}

void Span::randomlyFill()
{	
	std::srand(time(NULL));	
	unsigned int size = this->getSize();
	while (size-- > 0) 
		this->addNumber(rand() / 1000000);
	return ;
}

int Span::shortestSpan()
{
	if (this->getSize() <= 1)
		throw(std::out_of_range("no span can be found"));
	std::vector<int>& vect = this->getVector();
	int size = this->getSize();
	std::sort(vect.begin(), vect.end());
	int min = std::abs(vect[1] - vect[0]);
	for (int i = 0; i < (size - 1); i++)
	{
		if (std::abs(vect[i + 1] - vect[i]) < min)
		{
			min = std::abs(vect[i + 1] - vect[i]);
			// std::cout << "min dif: " << arr[i + 1] << " - " << arr[i] << " = " << min << std::endl;
		}
	}
	return (min);
}

int Span::longestSpan()
{
	if (this->getSize() <= 1)
		throw(std::out_of_range("no span can be found"));
	std::vector<int>& vect = this->getVector();
	int maxValue = *std::max_element(vect.begin(), vect.end());
    int minValue = *std::min_element(vect.begin(), vect.end());
	// std::cout << "max dif: " << maxValue << " - " << minValue << std::endl;
	return (maxValue - minValue);
}
