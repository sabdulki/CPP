/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:02:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 13:32:41 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

/* getType() will return a const std::string& to prevent copying +
		cannot change the var through reference */

class Weapon {
	private:
		std::string type;
	public:
		Weapon() {};
		Weapon(std::string weaponType);
		~Weapon();
		
		const std::string& getType() const;
		void setType(std::string newType);
};

#endif