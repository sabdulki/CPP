/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:17:42 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 17:16:13 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << YELLOW << "ScavTrap default constructor called" << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(const ClapTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	
	std::cout <<  YELLOW "ScavTrap copy constructor called" << DEFAULT << std::endl;
}

ScavTrap& ScavTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout <<  YELLOW "ScavTrap copy assignment operator overload called" << DEFAULT << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout <<  YELLOW "ScavTrap destructor called" << DEFAULT << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}