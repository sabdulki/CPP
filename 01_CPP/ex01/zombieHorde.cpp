/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:25:11 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 17:17:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name)
{
	Zombie* arr;

	arr = new Zombie[N];
	// trying to use default constructor
	/* Zombie* arr: This is a pointer 
	that will hold the address of 
	the first object in the array. */
	/* new Zombie[N]: alocates memory 
	for N objects of type Zombie */
	
	for (int i = 0; i < N; i++)
	{
		//call constructor for each object of Array
		arr[i].setName(name);
	}
	return (arr);
}
