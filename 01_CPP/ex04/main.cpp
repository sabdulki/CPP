/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:16:40 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 01:06:52 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string replaceLines(std::ifstream& fileObj, string s1, string s2)
{
    size_t pos;
	size_t start;
    size_t s1Len;
	string line;
	string result;
	
	s1Len = s1.length();
	while (getline(fileObj, line))
	{
		pos = 0;
		start = 0;
		while ((pos = line.find(s1, start)) != std::string::npos) 
		{
        	result.append(line, start, pos - start);
        	result.append(s2);
			start = pos+s1Len;
    	}
		result.append(line.substr(start));
		result.append("\n");
	}
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (cout << "Not valid number of arguments.\n", 1);

	string fileName = av[1];
	string s1 = av[2];
	string s2 = av[3];
	string result;
	if (fileName.empty() || s1.empty() || s2.empty())
		return (cout << "Parameters could not be empty\n", 1);

	ifstream fileRead(fileName);
	if (!fileRead.is_open())
		return (cout << "Unable to open the file." << endl, 1);

	ofstream fileWrite(fileName.append(".replace"));
	if (!fileWrite.is_open())
		return (cout << "Unable to open the file." << endl, 1);

	result = replaceLines(fileRead, s1, s2);
	fileWrite << result;
	fileWrite.close();
	return (0);
}