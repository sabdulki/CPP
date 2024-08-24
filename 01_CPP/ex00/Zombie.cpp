/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:46 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/24 16:19:40 by sabdulki         ###   ########.fr       */
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

void setName(string newName)
{
	name = newName;
}

Zombie::Zombie(newName) //maybe setter is needed
{
	setName(newName);
}