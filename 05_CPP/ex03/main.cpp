/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 17:35:32 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		std::cout << "------- test 1 -------\n";
		Bureaucrat bob("Bob", 31);
		std::cout << bob << std::endl;

		std::cout << "------- test 5 -------\n";
		{
			Intern someRandomIntern;
			AForm* rrf = someRandomIntern.makeForm("robotomy request", "Bender");;
			RobotomyRequestForm* robotomyForm = dynamic_cast<RobotomyRequestForm*>(rrf);

    		if (robotomyForm) {
    		    robotomyForm->beSigned(bob);
				bob.signForm(*robotomyForm);
				bob.executeForm(*robotomyForm);
    		} else {
    		    std::cout << "Error: Could not cast to RobotomyRequestForm!" << std::endl;
    		}
			delete robotomyForm;
		}
	}
	catch (std::exception& e) {
		std::cout << RED << "Caught an exception: " << e.what() << DEF << std::endl;
	}
	return (0);
}