/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:09:46 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:38:01 by sabdulki         ###   ########.fr       */
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
	// Здесь не нужно вызывать delete для самого себя, это приведет к ошибке.
	std::cout << "Destructor called for zombie named " << this->name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newName)
{
	name = newName;
}
