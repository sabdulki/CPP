/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 18:29:01 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap jim("Jim");
	FragTrap enemy("angry dog");
	jim.printState();
	enemy.printState();
	jim.attack(enemy.getName());
	jim.printState();
	jim.takeDamage(20);
	// jim.takeDamage(80);
	jim.printState();
	enemy.printState();
	jim.beRepaired(10);
	jim.printState();
	enemy.printState();
	jim.highFivesGuys();
}