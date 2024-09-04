/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:02:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:57:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	private:
		std::string type;
	public:
	/* cannot change the var through reference */
		Weapon() {};
		Weapon(std::string weaponType);
		/* getType() will return a const std::string& to prevent copying*/
		const std::string& getType() const; //{
		// 	return (type);
		// }
		void setType(std::string newType); //{
		// 	type = newType;
		// }
	
};

#endif