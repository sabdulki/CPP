/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 18:28:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap bob("Bob");
	ScavTrap enemy("angry cat");
	bob.attack(enemy.getName());
	bob.takeDamage(20);
	// bob.takeDamage(80);
	bob.printState();
	enemy.printState();
	bob.beRepaired(10);
	bob.printState();
	enemy.printState();
	bob.guardGate();
}