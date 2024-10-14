/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:45:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/14 15:58:06 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Invalid number of argumnets\n";	
		return (1);
	}
	std::string str = av[1];
	if (str.empty())
	{
		std::cout << "Invalid argument. It cannot be empty\n";	
		return (1);
	}
	// ScalarConverter converter1;
	// converter1.convert(str);
}