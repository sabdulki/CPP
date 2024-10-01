/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/01 18:29:45 by sabdulki         ###   ########.fr       */
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
		Bureaucrat b1("Bob", 1);
		Form f1("form1", 30, 5);
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;

		std::cout << "------- test 2 -------\n";
		f1.beSigned(b1);
		b1.signForm(f1);
	
		// std::cout << "------- test 3 -------\n";
		// Bureaucrat b3("Mohammad", 151);
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	return (0);
}