/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:35:00 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/04 14:04:06 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called\n";	
}

void ScalarConverter::convert(const std::string str)
{
	std::string::const_iterator it;
	for(it = str.begin(); it != str.end(); ++it)
	{
		if (std::isspace(*it))
			return ;
	}
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" \
		|| str == "+inff" || str == "-inff")
	{
		std::cout << "char: impossible\nint: impossible\n";
		if (str == "nan" || str == "nanf")
			std::cout << "float: nanf\ndouble: nan\n";
		else if (str[0] == '+')
			std::cout << "float: +inff\ndouble: +inf\n";
		else
			std::cout << "float: -inff\ndouble: -inf\n";
		return ;
	}
	try 
	{
		int intValue = std::stoi(str); //if str is bigger than max int or if it contain '.' or chars,
			//the exception will be thrown. 
		if (std::to_string(intValue).length() != str.length())
			throw("invalid");
		if (intValue < 32 || intValue > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
		std::cout << "int: '" << intValue << "'" << std::endl;
		std::cout << std::fixed << std::showpoint << std::setprecision(1);
		std::cout << "float: '" << static_cast<float>(intValue) << "f'" << std::endl;
		std::cout << "double: '" << static_cast<double>(intValue) << "'" << std::endl;
	}
    catch (...) // Handle floats and doubles
	{
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
	return ;
}
