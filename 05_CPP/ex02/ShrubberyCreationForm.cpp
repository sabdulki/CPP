/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:47:02 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/08 18:14:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) 
	: AForm("ShrubberyCreationForm", 145, 137), target(_target), type("SCF"), signGrade(145), executeGrade(137)
{
    std::cout << "ShrubberyCreationForm Constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.target)
{
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
	this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Copy Assignment operator called\n";
	if (this != &other)
		this->target = other.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

int ShrubberyCreationForm::executeConcreteForm() const
{
	//execute the form
	
	std::string fileName = this->getTarget().append("_srubbery");
	std::ofstream fileWrite(fileName);
	if (!fileWrite.is_open())
		return (std::cout << "Unable to open " << fileName.append(".replace") << std::endl, 1);
	std::string result;

	result = 
	"	    &&& &&  & && 				\n"
	"      && &\\/&\\|& ()|/ @, &&		\n"
	"      &\\/(/&/&||/& /_/)_&/_&		\n"
	"   &() &\\/&|()|/&\\/ '%\" & ()	\n"
	"  &_\\_&&_\\ |& |&&/&__%_/_& &&	\n"
	"&&   && & &| &| /& & % ()& /&&		\n"
	" ()&_---()&\\&\\|&&-&&--%---()~	\n"
	"     &&     \\|||					\n"
	"             |||					\n"
	"             |||					\n"
	"             |||					\n"
	"       , -=-~  .-^- _";

	fileWrite << result;
	fileWrite.close();
}
