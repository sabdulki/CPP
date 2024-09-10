/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:38:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 16:49:50 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Animal::Animal()
{
	this->setType("Animal");
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

const Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy Assignment operator called" << std::endl;
	if (this != &other) {
		this->setType(other.getType());
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

/* -------------- Methods -------------- */

std::string Animal::getType(void) const
{
	std::cout << YELLOW << "Animal getType() function was called. The type is " << this->type << DEFAULT << std::endl;
	return this->type;
}

void Animal::setType(const std::string type)
{
	// std::cout << "Animal setType() function was called" << std::endl;
	if (!type.empty()) {
		this->type = type;
	}
}

void Animal::makeSound(void) const
{
	std::cout << GREEN << "Default Animal makeSound func was called. Default animal sound is NONE." << DEFAULT << std::endl;
}
