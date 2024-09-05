/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:00:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:23:39 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
	std::cout << "Param constructor called for " << newName << std::endl;
	name = newName;
	weaponB = nullptr;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called for " << this->name << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	weaponB = &newWeapon;
}

void HumanB::attack() 
{
	if (weaponB)
    	std::cout << "\t" << name << " attacks with their " << weaponB->getType() << std::endl;
	else
   		std::cout << "\t" << name << " doesn't have a weapon!" << std::endl;
}
