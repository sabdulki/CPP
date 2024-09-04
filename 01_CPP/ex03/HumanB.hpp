/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:07:24 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 13:21:11 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *weaponB;
	public:
		HumanB(std::string newName);
		~HumanB();
		void setWeapon(Weapon &newWeapon);
		void attack();
};

#endif