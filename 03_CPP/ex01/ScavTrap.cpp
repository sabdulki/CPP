/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:17:42 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 18:26:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* -------------- Orthodox Canonical Form -------------- */

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << YELLOW << "ScavTrap default constructor called" << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(std::string newName): ClapTrap(newName)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << YELLOW << "ScavTrap constructor called for " << this->name << DEFAULT << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other)
{	
	std::cout <<  YELLOW "ScavTrap copy constructor called for " << this->name << DEFAULT << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout <<  YELLOW "ScavTrap copy assignment operator overload called for " << this->name << DEFAULT << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout <<  YELLOW "ScavTrap destructor called for " << this->name << DEFAULT << std::endl;
}

/* ---------------------------- Methods ---------------------------- */

void ScavTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "target not valid!\n";
		return ;
	}
	int tmpHitPoints = this->hitPoints;
	if (this->energyPoints == 0)
		return(printWarning('E', "attack"));
	if ((tmpHitPoints -= this->attackDamage) < 0 || this->hitPoints == 0)
		return(printWarning('H', "attack"));
	this->hitPoints -= this->attackDamage;
	this->energyPoints -= 1;
	std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing " << this->attackDamage << " points of damage to " << target << "!\n";
}

void ScavTrap::guardGate()
{
	if (this->energyPoints == 0)
		return(printWarning('E', "activate gate keeper mode"));
	if (this->hitPoints <= 0)
		return(printWarning('H', "activate gate keeper mode"));
	std::cout << "ScavTrap gate keeper mode activated for " << this->name << std::endl;
}
