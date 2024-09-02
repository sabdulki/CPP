/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:53:45 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/30 23:47:19 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* An overload of the insertion («) operator that inserts a floating-point representation
of the fixed-point number into the output stream object passed as parameter. */

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) 
{
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
	return (fixedPointNumberValue);
}

void Fixed::setRawBits(int const raw)
{
	fixedPointNumberValue = raw;
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(fixedPointNumberValue / pow(2, fractionalBits)));
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(fixedPointNumberValue / pow(2, fractionalBits)));
}

//default constructor;
Fixed::Fixed()
{
	cout << "Default constructor called\n";
	fixedPointNumberValue = 0;
}

// converts decimlNum to the corresponding fixed-point value.
Fixed::Fixed(const int decimalNum)
{
	cout << "Int constructor called\n";
	fixedPointNumberValue = (decimalNum * pow(2, fractionalBits));  // 2^8
}

//  converts floatNum to the corresponding fixed-point value.
Fixed::Fixed(const float floatNum)
{
	cout << "Float constructor called\n";
	fixedPointNumberValue = (floatNum * pow(2, fractionalBits));  // 2^8
}

//copy constructor
Fixed::Fixed(const Fixed& other) 
{
	cout << "Copy constructor called\n";
	fixedPointNumberValue = other.fixedPointNumberValue;
}

//copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) 
{
	cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNumberValue = other.fixedPointNumberValue;
	return *this;
}

//destructor
Fixed::~Fixed()
{
	cout << "Destructor called\n";
}