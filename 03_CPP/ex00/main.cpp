/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 16:11:40 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void printWarning(char flag, std::string message)
{
	if (flag == 'E')
		std::cout << "Not enough energy points to " << message << "!\n";
	if (flag == 'H')
		std::cout << "Not enough hit points to " << message << "!\n";
}

int main()
{
	ClapTrap joe("Joe", 10, 10, 0);
	joe.attack("dog");
	joe.takeDamage(3);
	// joe.printState();
	joe.beRepaired(1);
	joe.printState();

	joe.attack("cat");
	joe.takeDamage(5);
	// joe.printState();
	joe.beRepaired(2);
	joe.printState();
}