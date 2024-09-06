/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 13:53:25 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/06 15:21:28 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void arithmeticTest(std::string arSymbol, Fixed obj1, Fixed obj2)
{
	Fixed result;
	if (arSymbol == "+")
		result = obj1 + obj2;
	else if(arSymbol == "-")
		result = obj1 - obj2;
	else if(arSymbol == "*")
		result = obj1 * obj2;
	else if(arSymbol == "/")
		result = obj1 / obj2;
	
	std::cout << obj1 << " " << arSymbol << " " << obj2 << " = " << result << ";\n";
}

void comparationTest(std::string compSymbol, Fixed obj1, Fixed obj2)
{
	std::string result;
	bool boolRes;
	if (compSymbol == ">")
		boolRes = (obj1 > obj2);
	else if (compSymbol == "<")
		boolRes = (obj1 < obj2);
	else if (compSymbol == ">=")
		boolRes = (obj1 >= obj2);
	else if (compSymbol == "<=")
		boolRes = (obj1 <= obj2);
	else if (compSymbol == "==")
		boolRes = (obj1 == obj2);
	else if (compSymbol == "!=")
		boolRes = (obj1 != obj2);

	if (boolRes)
		result = "true";
	else
		result = "false";
	std::cout << "If " << obj1 << " " << compSymbol << " " << obj2 << "? " << result << ";\n";
}

void incDecTest(std::string flag, std::string symbol, Fixed obj)
{
	Fixed result;
	Fixed tmpObj = obj;
	if (flag == "pre" && symbol == "++")
		result = ++obj;
	else if (flag == "pre" && symbol == "--")
		result = --obj;
	else if (flag == "post" && symbol == "++")
		result = obj++;
	else if (flag == "post" && symbol == "--")
		result = obj--;
	if (flag == "pre")
		std::cout << symbol << tmpObj << " = " << result << ";\n";
	else
		std::cout  << tmpObj << symbol << " = " << result << ";\n";
}

void subjectTest()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}


int main()
{
	std::cout << "------------ subject tests ------------\n";
	subjectTest();
		
	std::cout << "------------ my tests ------------\n";
	Fixed a(5);
	Fixed const b(2.5f);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	std::cout << "------------ arithmetic operators ------------\n";
	arithmeticTest("+", a, b);
	arithmeticTest("-", a, b);
	arithmeticTest("*", a, b);
	arithmeticTest("/", a, b);
	
	std::cout << "------------ comparation operators ------------\n";
	comparationTest(">", a, b);
	comparationTest("<", a, b);
	comparationTest(">=", a, b);
	comparationTest("<=", a, b);
	comparationTest("==", a, b);
	comparationTest("!=", a, b);

	std::cout << "------------ inc/dec operators ------------\n";
	incDecTest("pre", "++", a);
	incDecTest("pre", "--", a);
	incDecTest("post", "++", a);
	incDecTest("post", "--", a);
	return 0;
}
