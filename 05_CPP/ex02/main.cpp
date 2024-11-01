/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:21:07 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		std::cout << "------- test 1 -------\n";
		Bureaucrat bob("Bob", 31);
		std::cout << bob << std::endl;

		std::cout << "------- test 2 -------\n";
		ShrubberyCreationForm shrForm("home");
		shrForm.beSigned(bob);
		bob.signForm(shrForm);
		bob.executeForm(shrForm);
		
		std::cout << "------- test 3 -------\n";
		Bureaucrat mohamed("Mohammad", 71);
		Bureaucrat ahmed("Ahmed", 25);
		RobotomyRequestForm robForm("dog");
		robForm.beSigned(mohamed);
		mohamed.signForm(robForm);
		ahmed.executeForm(robForm);
		std::cout << "------- test 4 -------\n";
		PresidentialPardonForm pardonForm("Jack");
		Bureaucrat Sheikh("Mr. President", 1);
		// pardonForm.beSigned(mohamed);
		pardonForm.beSigned(ahmed);
		ahmed.signForm(pardonForm);
		Sheikh.executeForm(pardonForm);

		
	}
	catch (std::exception& e) {
		std::cout << RED << "Caught an exception: " << e.what() << DEF << std::endl;
	}
	return (0);
}