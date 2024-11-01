/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:12:29 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 14:32:11 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target)
{
	if (_target.empty())
		throw(EmptyString("Target cannot be empty"));
	std::cout << "PresidentialPardonForm Constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm Copy constructor called\n";
	this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Copy Assignment operator called\n";
	if (this != &other)
		this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

int PresidentialPardonForm::executeConcreteForm() const
{
	//Informs that <target> has been pardoned by Zaphod Beeblebrox.
	std::cout << YELLOW << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << DEF << std::endl;
	return (0);
}
