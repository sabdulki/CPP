/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:16:09 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/09 16:19:28 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat default constructor is called" << std::endl;
	this->setType("WrongCat");	
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

const WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &obj)
		WrongAnimal::operator=(obj);
	return *this;	
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/* -------------- Methods -------------- */

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sounds like this 'WrOnG MiAwww'" << std::endl;
}

std::string WrongCat::getType(void) const
{
	std::cout << "WrongCat getType() function was called" << std::endl;
	return this->_type;
}