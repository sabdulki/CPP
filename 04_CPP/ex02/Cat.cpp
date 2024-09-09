/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:54:20 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:54:52 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Cat::Cat(): Animal()
{
	this->setType("Cat");	
	this->_brain = new Brain();
	std::cout << "Cat default constructor is called" << std::endl;
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	if (this != &obj) {
		std::cout << "Cat copy constructor called" << std::endl;
		this->_brain = new Brain();	
		*this->_brain = *obj._brain; 
	}
}

const Cat &Cat::operator=(const Cat &obj)
{
	if (this != &obj) {
		Animal::operator=(obj);
		*this->_brain = *obj._brain;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;	
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

/* -------------- Methods -------------- */

void Cat::makeSound(void) const
{
	std::cout << "Cat makeSound was called: Meow..." << std::endl;
}

std::string Cat::getType(void) const
{
	std::cout << "Cat getType() function was called" << std::endl;
	return this->_type;
}

Brain *Cat::getBrain(void) const 
{
	return this->_brain;
}