/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:58:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:23:46 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newName, Weapon &newWeapon)
{
	std::cout << "Param constructor called for " << newName << std::endl;
	name = newName; 
	weaponA = &newWeapon;
}

HumanA::~HumanA()
{
	std::cout << "HumanB destructor called for " << this->name << std::endl;
}

void HumanA::attack() 
{
    std::cout << "\t" << name << " attacks with their " << weaponA->getType() << std::endl;
	return ;
}
