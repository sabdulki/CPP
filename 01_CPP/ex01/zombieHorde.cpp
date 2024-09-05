/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:25:11 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:18:49 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* new Zombie[N]: alocates memory 
	for N objects of type Zombie */

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* arr;

	arr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		// if (i == 0)
		// {
		// 	arr[i].setName("firstZombie!");
		// 	continue ;
		// }
		arr[i].setName(name);
	}
	return (arr);
}
