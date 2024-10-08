/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:06:14 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/08 13:08:10 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : target(_target)
{
	std::cout << "RobotomyRequestForm Constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy constructor called\n";
	this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy Assignment operator called\n";
	if (*this != other)
		this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}