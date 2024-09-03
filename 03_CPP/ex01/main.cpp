/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 21:48:13 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printWarning(char flag, std::string message)
{
	if (flag == 'E')
		std::cout << "Not enough energy points to " << message << "!\n";
	if (flag == 'H')
		std::cout << "Not enough hit points to " << message << "!\n";
	return ;
}

int main()
{
	ScavTrap bob("Bob");
	bob.attack("cat");
	bob.printState();
	bob.takeDamage(5);
	bob.printState();
	bob.beRepaired(10);
	bob.printState();
	bob.guardGate();
}