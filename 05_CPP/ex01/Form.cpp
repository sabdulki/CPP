/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/01 18:38:30 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string newName, int newGrade, int newRequiredGrade) : formGrade(newGrade), requiredGrade(newRequiredGrade)
{
	if (!newName.empty())
		this->name = newName;
	std::cout << "Param constructor called for " << this->name << "\n";
	GradeTooHighException(newGrade);
	GradeTooLowException(newGrade);
	this->isSigned = 0;
	std::cout << "Successfully assigned new grade: " << this->formGrade << " to " << this->name << std::endl;
}

Form::~Form()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}

const std::string Form::getName()
{
	return (this->name);
}

bool Form::getSign()
{
	return (this->isSigned);
}

const int Form::getFormGrade()
{
	return (this->formGrade);
}

const int Form::getRequiredGrade()
{
	return (this->requiredGrade);
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() < this->getRequiredGrade())
		throw (Form::GradeTooLowException());
	else
	{
		this->isSigned = 1;
	}
}

void Form::GradeTooHighException(const int grade)
{
	if (grade < 1)
		throw std::out_of_range("form range cannot be higher than 1");
	return ;
}

void Form::GradeTooLowException(const int grade)
{
	if (grade > 150)
		throw std::out_of_range("form range cannot be lower than 150");
	return ;
}

std::ostream& operator<<(std::ostream &os, Form& f)
{
	os << "Form " << f.getName();
	if (f.getSign())
		os << " is not signed yet. ";
	else
		os << " is already signed. ";
	os << "The form grade is" << f.getFormGrade();
	os << " and required bureaucrat grade to sign is" <<f.getRequiredGrade() << std::endl;
}
