/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:54:04 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/31 00:53:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

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
		

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // must be binary operator

#endif