/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/07 16:16:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string newName, int newSignGrade, int newExecuteGrade) : name(newName), signGrade(newSignGrade), executeGrade(newExecuteGrade)
{
	std::cout << "Param constructor called for " << this->name << "\n";
	if (signGrade < 1 || executeGrade < 1)
		throw (GradeTooHighException("Construction failed. The grade is too high"));
	else if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException("Construction failed. The grade is too low"));
	this->isSigned = false;
	// std::cout << "Successfully assigned new grade: " << this->signGrade << " to " << this->name << std::endl;
}

Form::Form(const Form& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	std::cout << "Copy Constructor called\n";
	if (signGrade < 1 || executeGrade < 1)
		throw (GradeTooHighException("Construction failed. The grade is too high"));
	else if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException("Construction failed. The grade is too low"));
	this->isSigned = other.isSigned;
}
Form& Form::operator=(const Form& other)
{
	std::cout << "Copy Assignment operator called\n";
	if (this != &other)
	{
		//cannot reassign const name.
		std::cout << "Cannot reassign const attributes\n";
		this->isSigned = other.isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}

const std::string Form::getName()
{
	return (this->name);
}

bool Form::getSignStatus()
{
	return (this->isSigned);
}

const int Form::getSignGrade()
{
	return (this->signGrade);
}

const int Form::getExecuteGrade()
{
	return (this->executeGrade);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
		throw (GradeTooLowException("The signing failed. Grade is too low"));
	else
		this->isSigned = true;
}

std::ostream& operator<<(std::ostream &os, Form& f)
{
	os << "\tForm " << f.getName();
	if (f.getSignStatus())
		os << " is not signed yet. ";
	else
		os << " is already signed. ";
	os << "The grade to sign the form is " << f.getSignGrade();
	os << ". The grade to execute the form is " << f.getExecuteGrade() << std::endl;
	return (os);
}
