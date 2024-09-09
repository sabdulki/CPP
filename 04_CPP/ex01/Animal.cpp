/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:35:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:44:00 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Animal::Animal()
{
	this->setType("Default_animal");
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

const Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &obj) {
		this->setType(obj.getType());
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/* -------------- Methods -------------- */

std::string Animal::getType(void) const
{
	std::cout << "Animal getType() function was called" << std::endl;
	return this->_type;
}

void Animal::setType(const std::string type)
{
	std::cout << "Animal setType() function was called" << std::endl;
	if (!type.empty()) {
		this->_type = type;
	}
}

void Animal::makeSound(void) const
{
	std::cout << "Default Animal sound" << std::endl;
}
