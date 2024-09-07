/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:54:04 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/06 18:24:57 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <fstream>

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
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		//destructor
		~Fixed();
	
		//functions
		int getRawBits(void) const; // will return the fixed point number
		void setRawBits(int const raw); //will set 0;
};

#endif