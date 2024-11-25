/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:14 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/25 15:07:33 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//i'll use std::map.
//do not forget to check the acces to the input and output files
/* i will loop through the file, fill the std::map with the key and values.
check if the date and value are valid. 
if not - throw an error.
if they are valid - search for the same date in the over database and return it's value */ 


/* std::map<>
a lot of parsing 
value more than 1000 or less than 0
invalid date
too early date
no values at all

accept any type of file
if no data found, take the closest one (yesterday)
*/

int main (int ac, char** av)
{
	if (ac != 2 || !av[1])
		return (std::cerr << "Invalid arguments" << std::endl, 1);
	
	std::string fileName = av[1];
	// std::ifstream fileRead(fileName);
	// if (!fileRead.is_open())
	// 	return (std::cerr << "Unable to open " << fileName << std::endl, 1);
	
	// write_csv();

	try {
		BitcoinExchange btc;
		btc.writeCsvToMap("data.csv", ".csv");
		btc.exchange(fileName, ".csv");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
	
	// std::ofstream fileWrite("over");
	// if (!fileWrite.is_open())
	// 	return (std::cout << "Unable to open " << fileName.append(".replace") << std::endl, 1);
}