/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:59:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:51:43 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "default.hpp"
#include "FormsStruct.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class AForm;
// struct FormsStruct;
		
class Intern
{
	private:
		const int formsAmount;
		AForm* createSCF(std::string& target);
		AForm* createRRF(std::string& target);
		AForm* createPPF(std::string& target);
	public:
		Intern();
		Intern(Intern& other);
		Intern& operator=(Intern& other);
		~Intern();

		FormsStruct* forms;
		FormsStruct* createForms(const int formsAmount);
		int getFormsAmount() const;
		AForm* makeForm(std::string formName, std::string target);
};

#endif