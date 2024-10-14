/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:59:32 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/14 13:32:19 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "default.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class AForm;
struct FormsStrct;

		
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
		Intern& operator&(Intern& other);
		~Intern();

		FormsStrct *forms;
		FormsStrct* createForms(const int formsAmount);
		const int getFormsAmount();
		AForm* makeForm(std::string formName, std::string target);

};

struct FormsStrct 
{
	std::string formName;
	AForm* (Intern::*createForm)(std::string&);  // Pointer to member function

	FormsStrct() {};
	FormsStrct(std::string name, AForm* (Intern::*func)(std::string&))
        : formName(name), createForm(func) {}
};

// extern FormsStrct forms[3];

#endif