/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:27:14 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/04 23:03:05 by sabdulki         ###   ########.fr       */
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
	
	/* how to correctly print map's all element, keys and values? */
	std::string fileName = av[1];
	try {
		BitcoinExchange btc;
		btc.writeCsvToMap("data.csv", ".csv");
		btc.exchange(fileName, ".csv");
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}