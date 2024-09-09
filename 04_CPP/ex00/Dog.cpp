/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:05:06 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:21:00 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->setType("Dog");	
}

Dog::Dog(const Dog &obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

const Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return *this;	
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/* -------------- Methods -------------- */

void Dog::makeSound(void) const
{
	std::cout << "Dog makeSound func was called: Dog sounds like 'gav gav GAV!!'" << std::endl;
}

std::string Dog::getType(void) const
{
	std::cout << "Dog getType() function was called" << std::endl;
	return this->type;
}