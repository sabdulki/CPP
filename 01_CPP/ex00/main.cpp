/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:57:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:12:04 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* cannot assign pointer to the object*/

int main()
{
	Zombie zombie1("Foo");
	zombie1.announce();
	Zombie* zombie2;
	zombie2 = newZombie("Bob");
	randomChump("Joe");
	
	delete zombie2;
	return (0);
}