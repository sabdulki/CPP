/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:58:23 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/31 23:43:22 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// a = b -> copy from b to a
// this - object being assigned, 
//current object to which the operation is proceeding (a)
// other	
// &other: Gives the address of the other object being
// passed as an argument.

//copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) 
{
	cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNumberValue = other.fixedPointNumberValue;
	return *this;
}

//done
Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;
	result.fixedPointNumberValue = this->fixedPointNumberValue + other.fixedPointNumberValue;
	return result;
}

//done
Fixed Fixed::operator-(const Fixed& other)
{
	Fixed result;
	result.fixedPointNumberValue = this->fixedPointNumberValue - other.fixedPointNumberValue;
	return result;
}


Fixed Fixed::operator*(const Fixed& other) 
{
    Fixed result;
	result.fixedPointNumberValue = (this->fixedPointNumberValue) * other.fixedPointNumberValue;
    result.fixedPointNumberValue >>= fractionalBits; // Correct the scale by shifting right.
    return result;
}

Fixed Fixed::operator/(const Fixed& other) 
{
	Fixed result;
	result.fixedPointNumberValue = (this->fixedPointNumberValue / other.fixedPointNumberValue); // / pow(2, this->fractionalBits);
	return result;
}