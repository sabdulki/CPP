/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:54:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 19:11:01 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(string weaponType)
{
	setType(weaponType);
}

const string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(string newType)
{
	type = newType;
	return ;
}
