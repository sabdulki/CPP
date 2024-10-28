/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:50:50 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/28 14:46:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void test1()
{
	std::vector<int> containerV;
	for (int i = 0; i < 10; i++)
		containerV.push_back(i);
	try
	{
		std::cout << "vector elemet: " << *(easyfind(containerV, 1)) << std::endl;
	}
	catch(std::out_of_range& e) {
		std::cout << "Exception occured: " << e.what() << std::endl;
	}
}

void test2()
{
	std::list<int> containerL;
	int random;

	for(int i = 0; i < 10; i++)
	{
		std::srand(static_cast<unsigned>(time(0)));
		random = rand() % 20;
		std::cout << random << std::endl;
		containerL.push_front(random);
		sleep(1);
	}
	try
	{
		std::cout << "list elemet: " << *(easyfind(containerL, 3)) << std::endl;
	}
	catch(std::out_of_range& e) {
		std::cout << "Exception occured: " << e.what() << std::endl;
	}
}

int main()
{
	test1();
	test2();
}