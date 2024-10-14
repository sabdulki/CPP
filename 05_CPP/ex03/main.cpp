/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/14 13:49:42 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//if an exception occured, the constructor stops ->
//the instant of class wasn't create.
//since that, destructor cannot be called.

// void test1()
// {
	
// }

// void test2()
// {
	
// }

// void test3()
// {
	
// }

// void test4()
// {
	
// }

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
			AForm* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			std::cout << rrf << std::endl;
			RobotomyRequestForm* robotomyForm = dynamic_cast<RobotomyRequestForm*>(rrf);
			std::cout << robotomyForm << std::endl;

    		if (robotomyForm) {
    		    // Success: You can now use RobotomyRequestForm-specific methods
    		    robotomyForm->beSigned(bob);
				bob.signForm(*robotomyForm);
				bob.executeForm(*robotomyForm);
    		} else {
    		    // Failed cast: rrf was not actually a RobotomyRequestForm
    		    std::cout << "Error: Could not cast to RobotomyRequestForm!" << std::endl;
    		}
		}
		
	}
	catch (std::exception& e) {
		std::cout << RED << "Caught an exception: " << e.what() << DEF << std::endl;
	}
	return (0);
}