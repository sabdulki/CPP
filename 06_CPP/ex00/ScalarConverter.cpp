/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:00 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/16 15:18:51 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called\n";	
}


void ScalarConverter::convert(const std::string str) // "0"
{
	//firstly detect the type of the literal passed as parameter, 
	// convert it from string to its actual type.
	try 
	{
		std::cout << "Integer\n";
		int intValue = std::stoi(str);
		if (intValue < 32 || intValue > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
		std::cout << "int: '" << intValue << "'" << std::endl;
		std::cout << "float: '" << static_cast<float>(intValue) << "f'" << std::endl;
		std::cout << "double: '" << static_cast<double>(intValue) << "'" << std::endl;
	}
    catch (...) 
	{
        // Handle floats and doubles
		std::cout << "Float or double\n";
        try 
		{
            float floatValue = std::stof(str);
			if (floatValue < 32 || floatValue > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: '" << static_cast<char>(floatValue) << "'" << std::endl;
            std::cout << "int: " << static_cast<int>(floatValue) << std::endl;
            std::cout << "float: " << floatValue << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(floatValue) << std::endl;
        }
		catch(...) 
		{
			std::cout << "Some exception";
		}
	}
} 