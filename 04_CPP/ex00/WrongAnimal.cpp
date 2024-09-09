/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:11:35 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:14:44 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = obj;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal copy Assignment operator called" << std::endl;
	if (this != &obj) {
		this->setType(obj.getType());
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

/* -------------- Methods -------------- */

std::string WrongAnimal::getType(void) const
{
	std::cout << "WrongAnimal getType() function was called" << std::endl;
	return this->_type;
}

void WrongAnimal::setType(const std::string type)
{
	std::cout << "WrongAnimal setType() function was called" << std::endl;
	if (!type.empty()) {
		this->_type = type;
	}
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal WRONG_SOUND" << std::endl;
}