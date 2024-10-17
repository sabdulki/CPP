/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/16 15:16:24 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <fstream>

#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>

class ScalarConverter 
{
	private:
		ScalarConverter();
	public:
		static void convert(const std::string str);
};

/*
• char -> using first index of the string
• int -> stoi()
• float -> stof()
• double -> 
*/

	

#endif