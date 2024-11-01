/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:06:14 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 15:07:10 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequestForm", 72, 45), target(_target)
{
	if (_target.empty())
		throw(EmptyString("Target cannot be empty"));
	std::cout << "RobotomyRequestForm Constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm Copy constructor called\n";
	this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy Assignment operator called\n";
	if (this != &other)
		this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

int RobotomyRequestForm::executeConcreteForm() const
{
	/* Makes some drilling noises. Then, informs that <target> has been robotomized
	successfully 50% of the time. Otherwise, informs that the robotomy failed. */

	std::cout << "Drilling noises ...\n";

	int success = rand() % 2;
	if (success)
		std::cout << YELLOW << target << " has been robotomized successfully." << DEF << std::endl;
	else
		std::cout << RED << "The robotomy failed on " << target << "." << DEF << std::endl; 
	return (0);
}