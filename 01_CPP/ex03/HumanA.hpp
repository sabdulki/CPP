/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:40:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/27 16:44:30 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
using namespace std;

class HumanA{
	public:
		string name;
		Weapon &weaponA;
		HumanA(string newName, Weapon &newWeapon) : name{newName}, weaponA{newWeapon} {};
		void attack() {
            cout << name << " attacks with their " << weaponA.getType() << endl;
		}
};

#endif