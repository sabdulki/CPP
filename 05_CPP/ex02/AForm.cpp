/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 14:50:03 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() 
	: isSigned(false), name("Base form"), signGrade(150), executeGrade(150)
{
	std::cout << "Base Default constructor called\n";
}

AForm::AForm(const std::string newName, int newSignGrade, int newExecuteGrade) 
	: name(newName), signGrade(newSignGrade), executeGrade(newExecuteGrade)
{
	std::cout << "Base Param constructor called for " << this->name << "\n";
	if (signGrade < 1 || executeGrade < 1)
		throw (GradeTooHighException("Construction failed. The grade is too high"));
	else if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException("Construction failed. The grade is too low"));
	this->isSigned = false;
}

AForm::AForm(const AForm& other) : name(other.name), signGrade(other.signGrade), executeGrade(other.executeGrade)
{
	std::cout << "Base Copy Constructor called\n";
	if (signGrade < 1 || executeGrade < 1)
		throw (GradeTooHighException("Construction failed. The grade is too high"));
	else if (signGrade > 150 || executeGrade > 150)
		throw(GradeTooLowException("Construction failed. The grade is too low"));
	this->isSigned = other.isSigned;
}
AForm& AForm::operator=(const AForm& other)
{
	std::cout << "Base Copy Assignment operator called\n";
	if (this != &other)
	{
		std::cout << "Cannot reassign const attributes\n";
		this->isSigned = other.isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "Base Destructor called for " << this->name << std::endl;
}

const std::string AForm::getName() const
{
	return (this->name);
}

bool AForm::getSignStatus() const
{
	return (this->isSigned);
}

int AForm::getSignGrade() const
{
	return (this->signGrade);
}

int AForm::getExecuteGrade() const
{
	return (this->executeGrade);
}

void AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->getSignGrade())
	{
		std::string message = "The signing of " + this->getName() + " has failed. Bureaucrat " + b.getName() + " grade is too low.";
		throw (GradeTooLowException(message.c_str()));
	}
	else
		this->isSigned = true;
	std::cout << GREEN << this->getName() << " was successfully signed by " << b.getName() << DEF << std::endl;
}

std::ostream& operator<<(std::ostream &os, AForm& f)
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

int AForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignStatus() == false)
	{
		std::cout << RED << "The " << this->getName() <<  " is not signed yet" << DEF << std::endl;
		return (1);
	}
	if (this->getExecuteGrade() < executor.getGrade())
	{
		const std::string message = "Bureaucrat" + executor.getName() + "cannot sign " + this->getName() + ". His grade is too low.";
		throw(GradeTooLowException(message.c_str()));
	}
	if (this->executeConcreteForm())
		return (1);
	return (0);
}

AForm::GradeTooHighException::GradeTooHighException(const char* str) : _msg(str) {}

const char* AForm::GradeTooHighException::what() const throw() 
{
    return _msg;
}

AForm::GradeTooLowException::GradeTooLowException(const char* str) : _msg(str) {}

const char* AForm::GradeTooLowException::what() const throw() 
{
    return _msg;
}

AForm::EmptyString::EmptyString(const char* str) : _msg(str) {}

const char* AForm::EmptyString::what() const throw() 
{
    return _msg;
}
