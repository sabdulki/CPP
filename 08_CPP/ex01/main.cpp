/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:02:00 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/27 18:45:10 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void subjectTest()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	for (int i = 0; i < 5; i++)
		std::cout << sp.getVector()[i] << std::endl;
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span:  " << sp.longestSpan() << std::endl;
}

void myTest()
{
	Span sp = Span(5);
	sp.randomlyFill();

	for (unsigned int i = 0; i < sp.getSize(); i++)
		std::cout << sp.getVector()[i] << " "; 
	std::cout << std::endl;
	std::cout << "shortest span: "  << sp.shortestSpan() << std::endl;
	std::cout << "longest span:  "  << sp.longestSpan() << std::endl;
}

int main()
{
	subjectTest();
	myTest();
}