/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/21 22:19:53 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void printGreeting()
{
	ifstream file("greeting.txt");  // Open the file
    string line;

    if (file.is_open()) {  // Check if the file was successfully opened
        while (getline(file, line)) {  // Read the file line by line
            cout << line << endl;  // Print each line to the console
        }
        file.close();  // Close the file after reading
    } else {
        std::cout << "Unable to open the file." << std::endl;
    }

    return;
}

int main()
{
	string input;
	printGreeting();
	while (1)
	{
		cout << "Enter your comand: ";
		cin >> input;
		if (input == "ADD")
			addCmd();
		else if (input == "SEARCH")
			searchCmd();
		else if (input == "EXIT")
			exitCmd();
		else
			cout << "Wrong command!\nLet me remind you that you are allowed to use only 'ADD', 'SEARCH' or 'EXIT'. Try one of them.\n";
	}
	
}