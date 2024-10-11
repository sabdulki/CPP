/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:14:33 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/11 14:10:43 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::executeForm(AForm const & form)
{
	if (!form.execute(*this))
		std::cout << GREEN << "\tBuraucrat " << this->getName() << " executed " << form.getName() << DEF << std::endl;
	else
		std::cout << RED << "\tBuraucrat " << this->getName() << " failed to executed " << form.getName() << DEF << std::endl;
}

void Bureaucrat::signForm(AForm& f)
{
	// If the form got signed
	if (f.getSignStatus())
		std::cout << GREEN << this->name << " signed " << f.getName() << DEF << std::endl; 
	else
		std::cout << RED << this->name << " couldn’t sign " << f.getName() << " because bureaucrat's grade is too low or high" << DEF << std::endl;
}

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade) : name(newName)
{
	std::cout << "Bureaucrat Param constructor called for " << this->name << "\n";
	if (newGrade < 1)
		throw (GradeTooHighException("Construction failed"));
	else if (newGrade > 150)
		throw(GradeTooLowException("Construction failed"));
	else
		this->grade = newGrade;
	std::cout << GREEN << "Successfully assigned new grade: " << this->grade << " to " << this->name << DEF << std::endl;
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
	std::cout << GREEN << "Successfully incrementetd " << this->name << " range from " << this->grade + 1  << " to " << this->grade << DEF << std::endl;
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
	std::cout << GREEN << "Successfully decrementetd " << this->name << " range from " << this->grade - 1  << " to " << this->grade << DEF << std::endl;
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