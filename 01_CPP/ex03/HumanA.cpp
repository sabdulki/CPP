/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:58:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 19:28:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(string newName, Weapon &newWeapon)
// {
// 	name = newName; 
// 	weaponA = newWeapon;
// }

void HumanA::attack() 
{
    cout << name << " attacks with their " << weaponA.getType() << endl;
	return ;
}