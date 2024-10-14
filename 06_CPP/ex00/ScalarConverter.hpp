/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/14 15:57:38 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <iostream>
#include <fstream>

class ScalarConverter 
{
	private:
		ScalarConverter();
	public:
		// ScalarConverter(ScalarConverter& other);
		// ScalarConverter& operator=(ScalarConverter& other);
		~ScalarConverter();
		static void convert(const std::string str);
};

void ScalarConverter::convert(const std::string str)
{
	
}

#endif