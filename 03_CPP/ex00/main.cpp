/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:54 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 17:07:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap hero("Mike");
	ClapTrap enemy("Enemy");
	hero.attack(enemy.getName());
	hero.takeDamage(4);
	hero.printState();
	enemy.printState();
	hero.attack(enemy.getName());
	hero.takeDamage(5);
	hero.printState();
	enemy.printState();
	hero.beRepaired(7);
	hero.printState();
}