/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 13:08:52 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/08 17:05:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* -------------- Orthodox Canonical Form -------------- */

ClapTrap::ClapTrap()
{
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << YELLOW "ClapTrap Default constructor called for " << this->name << DEFAULT << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	if (!newName.empty())
		name = newName;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
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
	std::cout <<  YELLOW "ClapTrap Destructor called for " << this->name << DEFAULT << std::endl;
}

/* -------------- Methods -------------- */

void ClapTrap::attack(const std::string& target)
{
	if (target.empty())
	{
		std::cout << "target not valid!\n";
		return ;
	}
	int tmpHitPoints = this->hitPoints;
	if (this->energyPoints == 0)
		return(printWarning('E', "attack"));
	if ((tmpHitPoints -= this->attackDamage) <= 0 || this->hitPoints == 0)
		return(printWarning('H', "attack"));
	this->hitPoints -= this->attackDamage;
	this->energyPoints -= 1;
	std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing " << this->attackDamage << " points of damage to " << target << "!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int tmpHitPoints = this->hitPoints;
	bool warning = false;
	if ((tmpHitPoints -= amount) <= 0 || this->hitPoints == 0)
	{
		warning = true;
	}
	this->hitPoints = this->hitPoints - amount;
	std::cout << "ClapTrap " + this->name + " takes damage, because the target is stronger than " << this->name << ". " << this->name << " is getting " << amount << " damage points!\n";
	if (warning)
		printWarning('H', "take damage");
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int tmpHitPoints = this->hitPoints;
	bool risen = false;
	if (this->energyPoints == 0)
		return(printWarning('E', "be repaired"));
	else if (this->hitPoints <= 0)
		return(printWarning('H', "be repaired"));
	int newHitPoints = tmpHitPoints += amount;
	if (this->hitPoints <= 0 && newHitPoints > 0)
		risen = true;
	this->hitPoints = newHitPoints;
	this->energyPoints -= 1;
	std::cout <<  "ClapTrap " + this->name + " has been repaired, getting " << amount << " hit point back!\n";
	if (risen)
		std::cout << this->name << " has risen from the dead! \U0001F338 \n";
}

std::string ClapTrap::getName()
{
	return (this->name);
}

void ClapTrap::printState()
{
	std::cout << name << " has:\n";
	std::cout << "\tHit points: " << hitPoints << std::endl;
	std::cout << "\tEnergy points: " << energyPoints << std::endl;
	std::cout << "\tAttack damage points: " << attackDamage << std::endl;
}

void ClapTrap::printWarning(char flag, std::string message)
{
	if (flag == 'E')
		std::cout << RED << "Not enough energy points to " << message << DEFAULT "!\n";
	if (flag == 'H')
		std::cout << RED << "Not enough hit points to " << message << DEFAULT "!\n";
	std::cout << "The " << this->name << " has died \U0001F480 \n";
	return ;
}