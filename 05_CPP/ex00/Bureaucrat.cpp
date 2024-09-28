/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:33 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/28 21:10:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade)
{
	if (!newName.empty())
		this->name = newName;
	std::cout << "Param constructor called for " << this->name << "\n";
	GradeTooHighException(newGrade);
	GradeTooLowException(newGrade);
	std::cout << "Successfully assigned new grade: " << this->grade << " to " << this->name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Copy Constructor called\n";
	this->name = other.name;
	this->grade = other.grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy Assignment operator called\n";
	if (this != &other)
	{
		this->name = other.name;
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for " << this->name << "\n";
}

const std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	this->grade =- 1;
	try {
		GradeTooHighException(this->grade);
	} catch (const std::out_of_range& e) {
		std::cout << "Cannot increment grade: " << e.what() << std::endl;
		return ;
	}
	std::cout << "Successfully incrementetd " << this->name << " range from " << this->grade + 1  << " to " << this->grade << std::endl;
	return ;
}

void Bureaucrat::decrementGrade()
{
	this->grade =+ 1;
	try {
		GradeTooLowException(this->grade);
	} catch (const std::out_of_range& e) {
		std::cout << "Cannot decrement grade: " << e.what() << std::endl;
		return ;
	}
	std::cout << "Successfully decrementetd " << this->name << " range from " << this->grade - 1  << " to " << this->grade << std::endl;
	return ;
}

void Bureaucrat::GradeTooHighException(int newGrade)
{
	if (newGrade < 1)
		throw std::out_of_range("bureaucrat range cannot be higher than 1");
	else
	{
		this->grade = newGrade;
	}
	return ;
}

void Bureaucrat::GradeTooLowException(int newGrade)
{
	if (newGrade > 150)
		throw std::out_of_range("bureaucrat range cannot be lower than 150");
	else
	{
		this->grade = newGrade;
	}
	return ;
}
