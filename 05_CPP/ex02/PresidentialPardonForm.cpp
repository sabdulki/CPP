/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:12:29 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/08 13:12:52 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : target(_target)
{
	std::cout << "PresidentialPardonForm Constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Copy constructor called\n";
	this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Copy Assignment operator called\n";
	if (*this != other)
		this->target = other.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}