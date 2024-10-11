/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:59:16 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/11 17:09:49 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called\n";
}

Intern::Intern(Intern& other)
{
	
}

Intern& Intern::operator&(Intern& other)
{
	
}

Intern::~Intern()
{
	std::cout << "Intern Default Destructor called\n";
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
	// AForm 
}
