/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/08 16:28:18 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//if an exception occured, the constructor stops ->
//the instant of class wasn't create.
//since that, destructor cannot be called.

int main()
{
	try
	{
		std::cout << "------- test 1 -------\n";
		Bureaucrat bob("Bob", 31);
		AForm f1("form1", 30, 5);
		AForm f2("form2", 60, 5);
		std::cout << bob << std::endl;
		std::cout << f1 << std::endl;

		std::cout << "------- test 2 -------\n";
		f2.beSigned(bob);
		f1.beSigned(bob);
		bob.signForm(f1);

		ShrubberyCreationForm shrForm("home");
		std::cout << "------- test 3 -------\n";
		Bureaucrat b3("Mohammad", 15);

		std::cout << "------- test 4 -------\n";
		b3.executeForm(shrForm);
	}
	catch (std::exception& e) {
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	return (0);
}