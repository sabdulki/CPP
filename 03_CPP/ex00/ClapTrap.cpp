/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:52 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 21:14:14 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << YELLOW "ClapTrap Default constructor called" << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	if (!newName.empty())
		name = newName;
	std::cout << YELLOW "ClapTrap Param constructor called for " << this->name << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	
	std::cout <<  YELLOW "ClapTrap Copy constructor called" << DEFAULT << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout <<  YELLOW "ClapTrap Copy assignment operator overload called" << DEFAULT << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout <<  YELLOW "ClapTrap Destructor called" << DEFAULT << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints == 0)
		return(printWarning('E', "attack"));
	if (this->hitPoints == 0)
		return(printWarning('H', "attack"));
	this->hitPoints = this->hitPoints - this->attackDamage;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " << this->attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
		return(printWarning('H', "take damage"));
	this->hitPoints = this->hitPoints - amount;
	std::cout << "ClapTrap " + this->name + " takes damage, getting " << amount << " damage points!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
		return(printWarning('E', "be repaired"));
	int newHitPoints = this->hitPoints += amount;
	if (newHitPoints <= 10)
		this->hitPoints = newHitPoints;
	// else if (newHitPoints > 10)
	// {
	// 	this->hitPoints = 10;
	// 	std::cout << YELLOW "The maximum amount of hit points is 10, cannnot be more" << DEFAULT << std::endl;
	// }
	this->energyPoints -= 1;
	std::cout <<  "ClapTrap " + this->name + " has been repaired, getting " << amount << " hit point back!\n";
}

void ClapTrap::printState()
{
	std::cout << name << " has:\n";
	std::cout << "\tHit points: " << hitPoints << std::endl;
	std::cout << "\tEnergy points: " << energyPoints << std::endl;
}
