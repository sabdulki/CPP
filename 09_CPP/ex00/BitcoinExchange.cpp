/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:23:31 by sabdulki          #+#    #+#             */
/*   Updated: 2024/11/25 15:05:06 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange& other) 
{
	if (this != &other)
		*this = other;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& other) 
{
	if (this != &other)
		this->dataBase = other.dataBase;
	return (*this);
}

void BitcoinExchange::checkIsFileValid(std::ifstream &infile, const std::string &inFileName, const std::string ext) const
{
	struct stat fileInfo;	

	if (ext != "") {
		if (inFileName.substr(inFileName.length() - 4) != ext) {
			throw (std::runtime_error("Error: Wrong file format, must be '.csv'"));
		}
	} 
	if (stat(inFileName.c_str(), &fileInfo) != 0) {
		throw (std::runtime_error("Error: Failed to get file information"));
    }
	// Check if the passed file is a folder..
	if (S_ISREG(fileInfo.st_mode) == false) {
		throw (std::runtime_error("Error: The file seems to be a folder..."));
	}
	infile.open(inFileName.c_str(), std::ifstream::in);
	// Check if file opened successfully
	if (!infile.is_open()) {
		throw (std::runtime_error("Error: Failed to open the file for reading"));
	}
	// Check if the file is readable
	if (!infile.good()) {
		throw (std::runtime_error("Error: Failed reading file"));
	}
	// Move the file pointer to the end
	infile.seekg(0, std::ios::end);
	// Get the current position is the file
	std::streampos fileSize = infile.tellg();
	if (fileSize == 0) {
		throw (std::runtime_error("Error: input file is empty"));
	}
	// Move the file pointer back to the start
	infile.seekg(0, std::ios::beg);
	
}

void BitcoinExchange::writeCsvToMap(const std::string &file, const std::string &format)
{
	std::ifstream inputData;
	std::string line;

	try 
	{
		checkIsFileValid(inputData, file, format);
		std::getline(inputData, line);
		while(std::getline(inputData, line))
		{
			float	floatValue;
			size_t pos = line.find(",");
			std::string key = line.substr(0, pos);
			std::string valueStr = line.substr(pos + 1);
			std::stringstream ss(valueStr);
			ss >> floatValue;
			this->dataBase[key] = floatValue;
		}
	}
	catch (std::exception &e) {
		throw ;
	}
}

void BitcoinExchange::exchange(const std::string &filePath, const std::string &format) const
{
	std::ifstream	inData;
	std::string		line;

	try {
		if (dataBase.empty()) {
			throw (std::runtime_error("Error: Database is empty! Import database first"));
		}
		checkIsFileValid(inData, filePath, format);
		do {
			std::getline(inData, line);
		} while (line.empty());
		if (line != "date | value") {
			throw (std::runtime_error("Error: The header row of the input file must be \"date | value\" "));
		}
		std::getline(inData, line);
		do {
			if (line.empty()) {
				std::cout << "Error: empty record" << std::endl; 
				continue ;
			}
			std::string dateStr, valueStr, delim;
			float value;
			dateStr = line.substr(0, 10);
			if (!isValidDateString(dateStr)) {
				std::cout << "Error: bad input => " << dateStr << std::endl;
				continue ;
			}
			
			delim = line.substr(10, 3);
			if (delim != " | ") {
				std::cout << "Error: record is out of format" << " => " << line << std::endl;
				continue ;
			}

			valueStr = line.substr(13);
			std::stringstream ss(valueStr);
			if (!(ss >> value)) {
				std::cout << "Error: record is out of format" << " => " << line << std::endl;
				continue ;
			}
			if (value <= 0) {
				std::cout << "Error: not a positive number" << std::endl;
				continue ;
			}
			if (value >= 1000) {
				std::cout << "Error: too large a number" << std::endl;
				continue ;
			}
			
			std::map<std::string, float>::const_iterator it = dataBase.find(dateStr);
			if (it == dataBase.end()) {
				it = dataBase.lower_bound(dateStr);
				if (it == dataBase.end() || it == dataBase.begin()) {
					std::cout << "Error: out of range" << " => " << dateStr << std::endl;
					continue ;
				}
				--it;
			}
			std::cout << it->first << " => " << value << " = " << it->second * value << std::endl;
		} while (std::getline(inData, line));
	} catch (std::exception &e) {
		throw ;
	}
}

bool BitcoinExchange::isLeapYear(int year) const 
{
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    if (year % 400 != 0) return false;
    return true;
}

bool BitcoinExchange::isValidDate(int year, int month, int day) const
{
    if (month < 1 || month > 12) return false;
    
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(year)) daysInMonth[1] = 29;
    
    return day > 0 && day <= daysInMonth[month - 1];
}

bool BitcoinExchange::isValidDateString(const std::string& date) const
{
    if (date.length() != 10) return false;
    if (date[4] != '-' || date[7] != '-') return false;

    int year, month, day;
    char dash1, dash2;
    std::istringstream iss(date);
    if (!(iss >> year >> dash1 >> month >> dash2 >> day)) return false;
    if (dash1 != '-' || dash2 != '-') return false;
    return isValidDate(year, month, day);
}