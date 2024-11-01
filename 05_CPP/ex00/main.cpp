/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/01 16:15:58 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//if an exception occured, the constructor stops ->
//the instant of class wasn't create.
//since that, destructor cannot be called.

int main()
{
	try
	{
		std::cout << "------- test 1 -------\n";
		Bureaucrat b1("Bob", 1);
		b1.incrementGrade();
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.decrementGrade();
		std::cout << b1 << std::endl;

		std::cout << "------- test 2 -------\n";
		Bureaucrat b2("Ahmed", 150);
		std::cout << b2.getName() << std::endl;
		std::cout << b2.getGrade() << std::endl;
	
		std::cout << "------- test 3 -------\n";
		Bureaucrat sara("Sara", 50);
		std::cout << sara << std::endl;
	
		std::cout << "------- test 4 -------\n";
		Bureaucrat b3("Mohammad", 1111);
		std::cout << b3 << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << "Too low exception: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << "Too high exception: " << e.what() << std::endl;
	}
	return (0);
}