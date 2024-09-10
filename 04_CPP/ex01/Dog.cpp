/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:36:48 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 19:37:13 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");	
	this->_brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	if (this != &obj) {
		this->_brain = new Brain();	
		*this->_brain = *obj._brain; 
	}
}

const Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy Assignment operator called" << std::endl;
	if (this != &obj) {
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	return *this;	
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;
}

/* -------------- Methods -------------- */

void Dog::makeSound(void) const
{
	std::cout << "Dog makeSound was called: Meow..." << std::endl;
}

std::string Dog::getType(void) const
{
	std::cout << "Dog getType() function was called" << std::endl;
	return this->_type;
}

Brain *Dog::getBrain(void) const 
{
	return this->_brain;
}