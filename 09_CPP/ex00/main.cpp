/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:14 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/04 15:55:29 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//i'll use std::map.
//do not forgt to check the acces to the input and output files
/* i will loop through the file, fill the std::map with the key and values.
check if the date and value are valid. 
if not - throw an error.
if they are valid - search for the same date in the over database and return it's value */ 

int main (int ac, char** av)
{
	if (ac != 2 || !av[1])
		return (1);
	std::string fileName = av[1];
	std::ifstream fileRead(fileName);
	if (!fileRead.is_open())
		return (std::cout << "Unable to open " << fileName << std::endl, 1);

	

	// std::ofstream fileWrite("over");
	// if (!fileWrite.is_open())
	// 	return (std::cout << "Unable to open " << fileName.append(".replace") << std::endl, 1);
}