/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:16:40 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 14:02:24 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceLines(std::ifstream& fileObj, std::string s1, std::string s2)
{
    size_t pos;
	size_t start;
    size_t s1Len;
	std::string line;
	std::string result;
	
	s1Len = s1.length();
	while (getline(fileObj, line))
	{
		pos = 0;
		start = 0;
		while ((pos = line.find(s1, start)) != std::string::npos)
		{
        	result.append(line, start, pos - start);
        	result.append(s2);
			start = pos + s1Len;
    	}
		result.append(line.substr(start));
		result.append("\n");
	}
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Not valid number of arguments.\n", 1);

	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string result;
	if (fileName.empty() || s1.empty() || s2.empty())
		return (std::cout << "Parameters could not be empty\n", 1);

	std::ifstream fileRead(fileName);
	if (!fileRead.is_open())
		return (std::cout << "Unable to open " << fileName << std::endl, 1);

	std::ofstream fileWrite(fileName.append(".replace"));
	if (!fileWrite.is_open())
		return (std::cout << "Unable to open " << fileName.append(".replace") << std::endl, 1);

	result = replaceLines(fileRead, s1, s2);
	fileWrite << result;
	fileWrite.close();
	return (0);
}
