/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 18:02:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 19:11:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
using namespace std;

class Weapon{
	private:
		string type;
	public:
	/* cannot change the var through reference */
		Weapon() {};
		Weapon(string weaponType);
		/* getType() will return a const std::string& to prevent copying*/
		const string& getType() const; //{
		// 	return (type);
		// }
		void setType(string newType); //{
		// 	type = newType;
		// }
	
};

#endif