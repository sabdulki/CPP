/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:34:58 by sabdulki          #+#    #+#             */
/*   Updated: 2024/10/17 19:07:02 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <fstream>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <cmath>
#include <iomanip>  // For std::setprecision

class ScalarConverter 
{
	private:
		ScalarConverter();
	public:
		static void convert(const std::string str);
};

#endif