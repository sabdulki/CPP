/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:46 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/05 16:06:11 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newName)
{
	name = newName;
	std::cout << "Constructor called for zombie named " << this->name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for zombie named " << this->name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "Announce function called:\n";
	std::cout << "\t" << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
