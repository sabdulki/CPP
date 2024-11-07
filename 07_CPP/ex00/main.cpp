/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:40:11 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/07 22:24:56 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
/*
	using of initializer list is prefered and it's
	more efficient and safe couse the object is created allredy filled
	template <typename T>
	void swap(T& a, T& b)
	{
		T tmp{a};
		// tmp = a;
		a = b;
		b = tmp;
	}

	be carefull - sometimes '='  calls copy constructor,
	 not copy assignment operator
*/
int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
