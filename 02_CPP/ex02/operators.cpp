/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:58:23 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/06 15:54:13 by sabdulki         ###   ########.fr       */
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
	// cout << "Copy assignment operator called\n";
	if (this != &other)
		fixedPointNumberValue = other.fixedPointNumberValue;
	return *this;
}

/* ---------- arithmetic operators ---------- (+, -, *, /) */
Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;
	result.fixedPointNumberValue = this->fixedPointNumberValue + other.fixedPointNumberValue;
	return result;
}

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
	result.fixedPointNumberValue = (this->fixedPointNumberValue) / other.fixedPointNumberValue;
    result.fixedPointNumberValue <<= fractionalBits; // Correct the scale by shifting left.
    return result;
}

/* ---------- comparison operators ----------  (>, <, >=, <=, ==, !=) */

bool Fixed::operator>(const Fixed &other) const {
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->getRawBits() != other.getRawBits());
}

/* ----------  increment/decrement operators ----------  (++x, x++, --x, x--) */

/* pre increment/decrement operators (++x, --x) */

Fixed Fixed::operator++() 
{
	if (this->fixedPointNumberValue < INT_MAX)
		this->fixedPointNumberValue++;
	else 
		std::cout << "cannot apply ++ operator. The value is too big!" << std::endl;
	return *this;
}

Fixed Fixed::operator--() 
{
	if (this->fixedPointNumberValue > INT_MIN)
		this->fixedPointNumberValue--;
	else 
		std::cout << "cannot apply -- operator. The value is too small!" << std::endl;
	return *this;
}

/* post increment/decrement operators (x++, x--) */

/*
Effect: This operator increases the value of the fixed-point number, 
but returns the original value (before the increment).
Operation: It stores the current value, increments the fixed-point value, 
then returns the previously stored value.
*/

Fixed Fixed::operator++(int) 
{
	Fixed tmp;
	tmp = *this;
	if (this->fixedPointNumberValue < INT_MAX)
		this->fixedPointNumberValue++;
	else 
		std::cout << "cannot apply ++ operator. The value is too big!" << std::endl;
	return tmp;
}

Fixed Fixed::operator--(int) 
{
	Fixed tmp;
	tmp = *this;
	if (this->fixedPointNumberValue > INT_MIN)
		this->fixedPointNumberValue--;
	else 
		std::cout << "cannot apply -- operator. The value is too small!" << std::endl;
	return tmp;
}

/* ------------ min/max function ------------ */

// this function is allowed to modify the member variables of the calling object.
Fixed& Fixed::max(Fixed &obj1, Fixed &obj2) 
{
	if (obj1 > obj2)
		return (obj1);
	else
		return (obj2);
}

//it cannot modify the calling object (*this).
const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	else
		return (obj2);
}

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	else
		return (obj2);
}
