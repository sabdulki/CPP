/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:07:19 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/28 21:13:27 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//if an exception occured, r=the constructor stops ->
//the instant of class wasn't create.
//since that, destructor cannot be called.

//deep copy?
int main()
{
	// Bureaucrat b1;
	// try
	// {
	// 	Bureaucrat b2("Jeff", 2);
	// 	b1 = b2;
	// }
	// catch (const std::out_of_range& e)
	// {
	// 	std::cout << "Caught an exception: " << e.what() << std::endl;
	// }
	// b1.incrementGrade();

	Bureaucrat b3;
	try
	{
		Bureaucrat b4("Bob", 150);
		b3 = b4;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	b3.decrementGrade();
	return (0);
}