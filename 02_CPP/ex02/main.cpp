/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:53:25 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/31 01:04:59 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;


	Fixed a(2.5f);
	Fixed const b(2);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	Fixed sum = a + b;
	std::cout << sum << std::endl;
	sum = a - b;
	std::cout << sum << std::endl;
	Fixed sum1;
	sum1 = a * b;
	std::cout << sum1 << std::endl;
	sum = a / b;
	std::cout << sum << std::endl;
	
	// a = b; // Calls a.operator=(b)
	// std::cout << a << std::endl;
	return 0;
}
