/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:57:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:17:54 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void mandatoryTest()
{
	int N = 5;

	std::cout << "--- mandatory test ---\n";

	Zombie* zombieArr = zombieHorde(N, "Bob");
	for (int i = 0; i < N; i++)
	{
		zombieArr[i].announce();
	}

	delete[] zombieArr;
}
void additionalTest()
{
	int N = 5;
	std::cout << "--- additional test ---\n";

	Zombie* zombieArr = zombieHorde(N, "Jim");
	std::cout << "zombieArr address: " << zombieArr << std::endl;
	for (int i = 0; i < N; i++)
	{
		std::cout << i << ": ";
		zombieArr[i].announce();
		std::cout << &zombieArr[i] << std::endl;
	}

	delete[] zombieArr;
}

int main()
{
	mandatoryTest();
	additionalTest();
	return (0);
}