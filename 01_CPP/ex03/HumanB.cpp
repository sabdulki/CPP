/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:00:55 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 19:20:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string newName)
{
	name = newName;
	weaponB = nullptr;
}

HumanB::void setWeapon(Weapon &newWeapon)
{
	weaponB = &newWeapon;
	return ;
}

void attack() {
	if (weaponB) {
    	cout << name << " attacks with their " << weaponB->getType() << endl;
	} else {
   		cout << name << " doesn't have a weapon!" << endl;
	}
}