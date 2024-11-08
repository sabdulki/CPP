/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:40:11 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/08 13:48:00 by sabdulki         ###   ########.fr       */
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

	dependencies in makefile in ex02
	- why templates are not assigned in cpp files? 
	1) each translation unit, that includes templates header, has access to the complete definition of the template.
	2) Templates must be in headers 
	because they are "instantiated" (generated as code) 
	when they are used, and .cpp files are compiled separately.
	3) Header Files (.hpp or .tpp): By defining templates in header files, 
	all translation units (i.e., .cpp files) that include the header 
	can generate the necessary template instances.
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
