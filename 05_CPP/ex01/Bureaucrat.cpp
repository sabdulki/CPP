/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:33 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/01 18:35:58 by sabdulki         ###   ########.fr       */
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

const int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::signForm(Form& f)
{
	// If the form got signed
	if (f.getSign())
		std::cout << this->name << " signed " << f.getName() << std::endl; 
	else
		std::cout << this->name << " couldn’t sign " << f.getName() << " because bureaucrat's grade is too low or high" << std::endl;
}

void Bureaucrat::incrementGrade()
{
	int tmpGrade;
	
	tmpGrade = this->grade;
	tmpGrade -= 1;
	try {
		GradeTooHighException(tmpGrade);
	} catch (const std::out_of_range& e) {
		std::cout << "Cannot increment grade: " << e.what() << std::endl;
		return ;
	}
	this->grade = tmpGrade;
	std::cout << "Successfully incrementetd " << this->name << " range from " << this->grade + 1  << " to " << this->grade << std::endl;
	return ;
}

void Bureaucrat::decrementGrade()
{
	int tmpGrade;
	
	tmpGrade = this->grade;
	tmpGrade += 1;
	try {
		GradeTooLowException(tmpGrade);
	} catch (const std::out_of_range& e) {
		std::cout << "Cannot decrement grade: " << e.what() << std::endl;
		return ;
	}
	this->grade = tmpGrade;
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
std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
    os << b.getName();
	os << ", bureaucrat grade ";
	os << b.getGrade();
    return os;
}
