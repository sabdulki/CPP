/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:33 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 13:49:48 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade) : name(newName)
{
	std::cout << "Param constructor called for " << this->name << "\n";
	if (newGrade < 1)
		throw (GradeTooHighException("Construction failed"));
	else if (newGrade > 150)
		throw(GradeTooLowException("Construction failed"));
	else
		this->grade = newGrade;
	std::cout << "Successfully assigned new grade: " << this->grade << " to " << this->name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name)
{
	std::cout << "Copy Constructor called\n";
	if (other.grade < 1)
		throw (GradeTooHighException("Construction failed"));
	else if (other.grade > 150)
		throw(GradeTooLowException("Construction failed"));
	else
		this->grade = other.grade;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy Assignment operator called\n";
	if (this != &other)
	{
		//cannot reassign const name.
		if (other.grade < 1)
			throw (GradeTooHighException("Construction failed"));
		else if (other.grade > 150)
			throw(GradeTooLowException("Construction failed"));
		else
			this->grade = other.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for " << this->name << "\n";
}

const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	int tmpGrade;
	
	tmpGrade = this->grade;
	tmpGrade -= 1;
	if (tmpGrade < 1)
		throw (GradeTooHighException("Incremention failed"));
	this->grade = tmpGrade;
	std::cout << "Successfully incrementetd " << this->name << " range from " << this->grade + 1  << " to " << this->grade << std::endl;
	return ;
}

void Bureaucrat::decrementGrade()
{
	int tmpGrade;
	
	tmpGrade = this->grade;
	tmpGrade += 1;
	if (tmpGrade > 150)
		throw (GradeTooLowException("Decremention failed"));
	this->grade = tmpGrade;
	std::cout << "Successfully decrementetd " << this->name << " range from " << this->grade - 1  << " to " << this->grade << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
	// This version may be slightly more efficient 
	// since it potentially reduces the number of calls to the output stream's operator<<.
    os << "\t" << b.getName() << ", bureaucrat grade " << b.getGrade();
	
    // os << b.getName();
	// os << ", bureaucrat grade ";
	// os << b.getGrade();
    return os;
}


Bureaucrat::GradeTooHighException::GradeTooHighException(const char* str) : _msg(str) {}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return _msg;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* str) : _msg(str) {}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return _msg;
}
