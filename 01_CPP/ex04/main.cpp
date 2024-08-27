/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:16:40 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/27 18:10:21 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype> 
#include <fstream> 
using namespace std;

/* filename - holds the name for file to be opened
ifstream file - construcotr of ifstream class 
file is an object of type std::ifstream

The constructor attempts to open the file specified by filename for reading.
If the file exists and can be opened, file is connected to the file, 
and you can use it to read data from the file.
*/

int checkFile(string filename)
{
    ifstream file(filename); // Open the file

	if (!file) { // std::ifstream object file is in a failed state.
		return (cout << "Bad file." << endl, 1);
	}
	if (file.is_open())  // Check if the file was successfully opened , regardless of whether the stream has encountered other errors after opening.
        file.close();  // Close the file after reading
	else
		return (cout << "Unable to open the file." << endl, 1);
    return (0);
}

int checkValid(string file, string s1, string s2)
{
	if (file.empty() || s1.empty() || s2.empty())
		return (cout << "Parameters could not be empty\n", 1);
	if (checkFile(file))
		return (1);
	return (0);
}

int checkLine(string line, string s1)
{
	// Perform a case-sensitive search
    size_t pos;
	
	pos = line.find(s1);
    // Check if the substring was found
    if (pos != std::string::npos) {
        std::cout << "Substring \"" << s1 << "\" found at position " << pos << "." << std::endl;
    } else {
        std::cout << "Substring \"" << s1 << "\" not found." << std::endl;
    }

    return 0;
}

int replaseFile(string filename, string s1, string s2)
{
	ifstream file(filename); // Open the file
    string line;

	if (file.is_open()) { 
        while (getline(file, line)) {  // Read the file line by line
            checkLine(line, s1);
        }
        file.close(); 
	}
}

int main(int ac, char **av)
{
	if (ac != 4 || checkValid(av[1], av[2], av[3]))
		return (1);
	string file = av[1];
	string s1 = av[2];
	string s2 = av[3];

	replaseFile(file, s1, s2);
	return (0);
}