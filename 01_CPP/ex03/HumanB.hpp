/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:07:24 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 19:20:47 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
using namespace std;

class HumanB{
	public:
		string name;
		Weapon *weaponB; //= nullptr;
		// weaponB = nullptr;
		HumanB(string newName); // : name{newName} {}
		~HumanB() {}
		void setWeapon(Weapon &newWeapon); //{//
		// 	weaponB = &newWeapon;
		// }
		void attack(); //{
		// 	if (weaponB) {
        //     	cout << name << " attacks with their " << weaponB->getType() << endl;
        // 	} else {
        //    		cout << name << " doesn't have a weapon!" << endl;
        // 	}
		// }
};

#endif