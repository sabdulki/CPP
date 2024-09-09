/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:54:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:54:23 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Animal::Animal()
{
	this->setType("Default_animal");
	std::cout << "Animal default constructor is called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor is called" << std::endl;
}

const Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj) {
		this->setType(obj.getType());
	}
	std::cout << "Animal copy assignment operator is called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}


/* -------------- Methods -------------- */

std::string Animal::getType(void) const
{
	std::cout << "Animal getType() function was called" << std::endl;
	return this->_type;
}

void Animal::setType(const std::string type)
{
	if (!type.empty()) {
		this->_type = type;
	}
	std::cout << "Animal setType() function was called" << std::endl;
}