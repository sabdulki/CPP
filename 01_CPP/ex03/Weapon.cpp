/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:54:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 13:24:58 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
	setType(weaponType);
	std::cout << "Weapon param constructor called for " << this->type<< std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called for " << this->type << std::endl;
}

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
