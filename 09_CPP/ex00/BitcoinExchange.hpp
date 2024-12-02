/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:22:50 by sabdulki          #+#    #+#             */
/*   Updated: 2024/12/02 17:42:59 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

# include <map>
# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <sys/stat.h>
# include <iomanip>

class BitcoinExchange 
{
	private:
		std::map<std::string, float> dataBase;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange& other);
		BitcoinExchange& operator=(BitcoinExchange& other);

		void exchange(const std::string &fileName, const std::string &format) const;
		void writeCsvToMap(const std::string &file, const std::string &format);
		void checkIsFileValid(std::ifstream &infile, const std::string &fileName, const std::string ext) const;
		bool isValidDateString(const std::string &date) const;
		bool isLeapYear(int year) const;
		bool isValidDate(int year, int month, int day) const;
};

#endif