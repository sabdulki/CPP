/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:51:03 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/10 16:45:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* -------------- Orthodox Canonical Form -------------- */

Cat::Cat(): Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->setType("Cat");	
}

Cat::Cat(const Cat &obj): Animal(obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

const Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy Assignment operator called" << std::endl;
	if (this != &obj)
		Animal::operator=(obj);
	return *this;	
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

/* -------------- Methods -------------- */

void Cat::makeSound(void) const
{
	std::cout << GREEN << "Cat makeSound func was called. Cat sounds like 'miau miau mrrrr'" << DEFAULT << std::endl;
}
