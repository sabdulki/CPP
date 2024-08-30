/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedFunc.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 23:55:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/30 23:57:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
