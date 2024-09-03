/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 21:54:20 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap tom("Tom");
	tom.printState();
	tom.attack("cat");
	tom.printState();
	tom.takeDamage(5);
	tom.printState();
	tom.beRepaired(10);
	tom.printState();
	tom.highFivesGuys();
}