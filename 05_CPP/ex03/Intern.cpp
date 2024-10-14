/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:59:16 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/14 13:48:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() : formsAmount(3)
{
	this->forms = createForms(formsAmount);
	std::cout << "Intern Default Constructor called\n";	
}

Intern::Intern(Intern& other) : formsAmount(other.formsAmount) 
{
	std::cout << "Intern Copy Constructor called\n";
}

Intern& Intern::operator&(Intern& other)
{
	std::cout << "Intern Assign copy operator called\n";
	std::cout << "Nothing to copy. Retunr the same object\n";
	return (*this);
}

Intern::~Intern()
{
	delete[] forms;
	std::cout << "Intern Default Destructor called\n";
}

FormsStrct* Intern::createForms(const int formsAmount)
{
	FormsStrct* forms = new FormsStrct[formsAmount]; 
	forms[0] = FormsStrct("shrubbery creation", &Intern::createSCF);
    forms[1] = FormsStrct("robotomy request", &Intern::createRRF);
    forms[2] = FormsStrct("presidential pardon", &Intern::createPPF);
	return (forms);
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
	for (int i = 0; i < this->getFormsAmount(); i++)
	{
		if (this->forms[i].formName == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*forms[i].createForm)(target));
		}
	}
	std::cout << "Form not found!\n";
	return nullptr;
}

const int Intern::getFormsAmount()
{
	return (this->formsAmount);
}

AForm* Intern::createSCF(std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::createRRF(std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::createPPF(std::string& target)
{
	return (new PresidentialPardonForm(target));
}
