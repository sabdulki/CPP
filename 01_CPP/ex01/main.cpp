/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:57:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 17:17:08 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;

	Zombie* zombieArr = zombieHorde(N, "Bob");
	// for (int i = 0; i < N; i++)
	// {
	// 	cout << i << " ";
	// 	zombieArr[i].announce();
	// }
	// call destructor for each memeber of array or for array itself
	for (int i = 0; i < N; i++)
	{
		zombieArr[i].~Zombie();
	}
	delete[] zombieArr;
	return (0);
}