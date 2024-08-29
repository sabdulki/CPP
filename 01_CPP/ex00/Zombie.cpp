/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:46 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 18:42:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// do the constructor here

void Zombie::announce(void)
{
	cout << getName() << ": BraiiiiiiinnnzzzZ..." << endl;
}

string Zombie::getName(void)
{
	return (name);
}

void Zombie::setName(string newName)
{
	name = newName;
}

Zombie::Zombie(string newName)
{
	setName(newName);
}

Zombie::~Zombie()
{
	cout << "Destructor has been called for zombie named " << name << endl;
}