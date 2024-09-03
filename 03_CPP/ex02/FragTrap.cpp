/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:38:34 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 21:48:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << YELLOW << "FragTrap default constructor called" << DEFAULT << std::endl;
}

FragTrap::FragTrap(std::string newName): ClapTrap(newName)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << YELLOW << "FragTrap constructor called for " << this->name << DEFAULT << std::endl;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other)
{	
	std::cout <<  YELLOW "FragTrap copy constructor called for " << this->name << DEFAULT << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout <<  YELLOW "FragTrap copy assignment operator overload called for " << this->name << DEFAULT << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout <<  YELLOW "FragTrap destructor called for " << this->name << DEFAULT << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap's " << this->name << " gives high five!" << std::endl;
}
