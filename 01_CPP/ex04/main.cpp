/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:16:40 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/28 20:59:37 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //cin, cout 
#include <string>
#include <cctype> 
#include <fstream>  //
using namespace std;

/* filename - holds the name for file to be opened
ifstream file - construcotr of ifstream class 
file is an object of type std::ifstream

The constructor attempts to open the file specified by filename for reading.
If the file exists and can be opened, file is connected to the file, 
and you can use it to read data from the file.
*/

// std::ifstream readOpenFile(string filename)
// {
//     std::ifstream fileObj(filename); // Open the file and create instance of ifstream class
 
// 	if (!fileObj) { // std::ifstream object file is in a failed state.
// 		cout << "Bad file." << endl; //some error occurred. it could be fail, bad, or eof states.
// 	}
// 	if (!fileObj.is_open()) // or file.fail()
// 		cout << "Unable to open the file." << endl;
//     return (fileObj);
// }

// std::ofstream  writeOpenFile(string filename)
// {
//     std::ofstream fileObj(filename); // Open the file and create instance of ifstream class
 
// 	if (!fileObj) { // std::ifstream object file is in a failed state.
// 		return (cout << "Bad file." << endl, fileObj); //some error occurred. it could be fail, bad, or eof states.
// 	}
// 	if (!fileObj.is_open()) // or file.fail()
// 		return (cout << "Unable to open the file." << endl, fileObj);
//     return (fileObj);
// }

string replaceLines(std::ifstream& fileObj, string s1, string s2)
{
	std::string result;
    size_t pos;
    size_t s1Len = s1.length();
	std::string line;
    
	
    // Loop through the content and replace s1 with s2
	while (getline(fileObj, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) 
		{
        	result.append(line, 0, pos);     // Append the part before s1
        	result.append(s2);                 // Append s2
        	pos += s1Len;                      // Move past the last occurrence
    	}
		result.append(line, pos, std::string::npos);
	}
   
    
    // result.append(content, pos, std::string::npos); // Append the remaining part of the content
    return result;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return (cout << "Not valid number of arguments.\n", 1);
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string result;
	if (fileName.empty() || s1.empty() || s2.empty())
		return (cout << "Parameters could not be empty\n", 1);
	// std::ifstream fileObj = readOpenFile(fileName);
	// if (fileObj.fail())
	// 	return (1);

	std::ifstream fileRead(fileName); // Open the file and create instance of ifstream class
 
	if (!fileRead) { // std::ifstream object file is in a failed state.
		return (cout << "Bad file." << endl, 1); //some error occurred. it could be fail, bad, or eof states.
	}
	if (!fileRead.is_open()) // or file.fail()
		return (cout << "Unable to open the file." << endl, 1);

	// std::ofstream fileReplace = writeOpenFile(fileName.append(".replace"));
	// if (fileReplace.fail())
	// 	return (1);

	std::ofstream fileWrite(fileName.append(".replace")); // Open the file and create instance of ifstream class
 
	if (!fileWrite) { // std::ifstream object file is in a failed state.
		return (cout << "Bad file." << endl, 1); //some error occurred. it could be fail, bad, or eof states.
	}
	if (!fileWrite.is_open()) // or file.fail()
		return (cout << "Unable to open the file." << endl, 1);

	result = replaceLines(fileRead, s1, s2);
	fileWrite << result;
	fileWrite.close();
	return (0);
}