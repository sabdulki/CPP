/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 17:18:43 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 11:45:31 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string strOriginal = "HI THIS IS BRAIN";
	std::string* stringPTR = &strOriginal;
	std::string &stringREF = strOriginal;

	std::cout << "Memory address of the string variable: " << &strOriginal << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "-------------------------------------------------------------\n";
	std::cout << "The value of the string variable: " << strOriginal << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}