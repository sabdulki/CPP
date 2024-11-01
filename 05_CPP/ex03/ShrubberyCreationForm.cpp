/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:47:02 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:21:47 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
	if (_target.empty())
		throw(EmptyString("Target cannot be empty"));
    std::cout << "ShrubberyCreationForm Param Constructor called\n";
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

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

int ShrubberyCreationForm::executeConcreteForm() const
{
	std::string fileName = this->getTarget().append("_shrubbery");
	std::ofstream fileWrite(fileName.c_str());
	if (!fileWrite.is_open())
		return (std::cout << RED << "Unable to open " << fileName.append(".replace") << DEF << std::endl, 1);
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
	"       , -=-~  .-^- _         \n\n"
	"        &&& &&  & &&               \n"
	"      && &\\/&\\|& ()|/ @, &&      \n"
	"      &\\/(/&/&||/& /_/)_&/_&      \n"
	"   &() &\\/&|()|/&\\/ '%\" & ()    \n"
	"  &_\\_&&_\\ |& |&&/&__%_/_& &&    \n"
	"&&   && & &| &| /& & % ()& /&&	    \n"
	" ()&_---()&\\&\\|&&-&&--%---()~    \n"
	"     &&   *  \\|||   *             \n"
	"           *  |||   *              \n"
	"             |||                   \n"
	"             |||                   \n"
	"       , -=-~  .-^- _";

	fileWrite << result;
	fileWrite.close();
	std::cout  << YELLOW << fileName << " file has been successfully created!" << DEF << std::endl;
	return (0);
}
