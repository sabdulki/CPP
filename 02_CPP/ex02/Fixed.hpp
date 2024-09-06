/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:54:04 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/06 15:39:58 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <climits>
#include <cmath>

/*
decimal number: 12.75 
fractional bits: 8
Fixed-Point Number Value: 3276 (12,75 * (2 in 8))
*/

class Fixed {
	private:
		int fixedPointNumberValue;
		static const int fractionalBits = 8;
	public:
		// constructors
		Fixed();
		Fixed(const int decimlNum);
		Fixed(const float floatNum);
		//copy
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		//destructor
		~Fixed();
	
		//functions
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits(void) const; // will return the fixed point number
		void setRawBits(int const raw); //will calculate the fix point number 

		// operators funcs
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
		
		/* A constant member function cannot modify the state of the calling object */
		bool operator>(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator++();
		Fixed operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed& max(Fixed &obj1, Fixed &obj2);
		static const Fixed& max(const Fixed &obj1, const Fixed &obj2);
		static Fixed& min(Fixed &obj1, Fixed &obj2);
		static const Fixed& min(const Fixed &obj1, const Fixed &obj2);
		
		
};		

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // must be binary operator

#endif