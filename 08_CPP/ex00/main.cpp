/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:50:50 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/27 15:40:05 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

/*
what is STL algorithm?
	The Standard Template Library (STL) in C++ provides a set of algorithms 
	for performing common tasks on data structures and containers. 
	These algorithms make operations like searching, sorting, modifying, 
	and managing data easier and more efficient. Instead of writing custom functions,
	 you can use these predefined algorithms to work directly with containers 
	 like vector, deque, list, map, etc. STL algorithms are generic, 
	 so they can be applied to different types of data using iterators.

add as many protections as I can to each parametr in templated finctions or classes
check for leaks
*/

void test1()
{
	std::vector<int> containerV;
	for (int i = 0; i < 10; i++)
		containerV.push_back(i);
	try
	{
		std::cout << "vector elemet: " << *(easyfind(containerV, 1)) << std::endl;
	}
	catch(std::out_of_range& e) 
	{
		std::cout << "Exception occured: " << e.what() << std::endl;
	}
}

void test2()
{
	std::list<int> containerL;
	for (int i = 0; i < 10; i+=2)
		containerL.push_back(i);
	try
	{
		std::cout << "list elemet: " << *(easyfind(containerL, 6)) << std::endl;
	}
	catch(std::out_of_range& e) 
	{
		std::cout << "Exception occured: " << e.what() << std::endl;
	}
}

int main()
{
	test1();
	test2();
}