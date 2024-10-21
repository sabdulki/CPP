/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:40:11 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/21 16:12:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void test1()
{
	std::cout << "--- test 1 ---\n";
	int *array = new int[3];
	array[0] = 5;
	array[1] = 6;
	array[2] = 7;
	
	iter(array, 3, power);
	iter(array, 3, printElement);
	delete[] array;
}

void test2()
{
	std::cout << "--- test 2 ---\n";
	double array[] = {1.1, 1.2, 1.3};
	int size = sizeof(array) / sizeof(array[0]);

	iter(array, size, power);
	iter(array, size, printElement);
}

void test3()
{
	std::cout << "--- test 3 ---\n";
	char array[] = {'a', 'b', 'c'};
	int size = sizeof(array) / sizeof(array[0]);
	// iter(array, size, minus);
	iter(array, size, power);
	iter(array, size, printElement);
}

void test4()
{
	std::cout << "--- test 4 ---\n";
	std::string array[] = {"hello", "world"};
	int size = sizeof(array) / sizeof(array[0]);
	iter(array, size, power);
	// iter(array, size, minus);
	iter(array, size, printElement);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	return 0;
}

