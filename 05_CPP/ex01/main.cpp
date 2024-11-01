/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:17:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

//if an exception occured, the constructor stops ->
//the instant of class wasn't create.
//since that, destructor cannot be called.

int main()
{
	try
	{
		std::cout << "------- test 1 -------\n";
		Bureaucrat bob("Bob", 150);
		Form f1("form1", 30, 5);
		std::cout << bob << std::endl;
		f1.beSigned(bob);
		bob.signForm(f1);
		std::cout << f1 << std::endl;

		std::cout << "------- test 2 -------\n";
		Form f2("form2", 60, 5);
		f2.beSigned(bob);
		std::cout << f2 << std::endl;
	
		std::cout << "------- test 3 -------\n";
		Bureaucrat b3("Mohammad", 150);
	}
	catch (std::exception& e) {
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	return (0);
}