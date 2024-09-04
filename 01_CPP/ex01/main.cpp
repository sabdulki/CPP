/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:57:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:40:06 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;

	Zombie* zombieArr = zombieHorde(N, "Bob");
	for (int i = 0; i < N; i++)
	{
		zombieArr[i].announce();
	}

	delete[] zombieArr;
	return (0);
}