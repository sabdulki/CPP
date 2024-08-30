/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:53:45 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/30 17:43:07 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called\n";
	return (fixedPointNumberValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointNumberValue = raw;
}

//default constructor;
Fixed::Fixed()
{
	cout << "Default constructor called\n";
	setRawBits(0);
}

//copy constructor
Fixed::Fixed(const Fixed& other) 
{
	cout << "Copy constructor called\n";
	fixedPointNumberValue = other.fixedPointNumberValue;
	getRawBits();
}

//copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) 
{
	cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNumberValue = other.fixedPointNumberValue;
	getRawBits();
	return *this;
}

//destructor
Fixed::~Fixed()
{
	cout << "Destructor called\n";
}