/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/22 16:40:41 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void printGreeting()
{
	cout << "--------------------------------------------------------------------------------------------\n";
	cout << "Hello! This is a small phone book. Now it's empty.\n";
	cout << "You have " << BOLD_WHITE << "3" << DEFAULT << " options to work with:\n";
	cout << "1) Type " << GREEN << "ADD" << DEFAULT << " to find data about specific person.\n";
	cout << "2) Type " << GREEN << "SEARCH" << DEFAULT << " to add a contact.\n";
	cout << "3) Type " << GREEN << "EXIT" << DEFAULT << " if you want to quit the program.\n";
	cout << "Please " << YELLOW << "note " << DEFAULT "that all the contacts will be automatically deleted after quitting.";
	cout << " Enjoy!\n";
}

void printWarning()
{
	cout << RED << "Wrong command!\n" << DEFAULT;
	cout << "Let me remind you that you are allowed to use only ";
	cout << "'" << GREEN << "ADD" << DEFAULT << "', ";
	cout << "'" << GREEN << "SEARCH" << DEFAULT << "' or ";
	cout << "'" << GREEN << "EXIT" << DEFAULT << "'. ";
	cout << "Try one of them.\n";
}

int suggestACmd(PhoneBook book)
{
	string input;

	while (1)
	{
		cout << YELLOW << "Enter your comand: " << DEFAULT;
		cin >> input;
		if (input == "ADD")
			addCmd(book);
		else if (input == "SEARCH")
			searchCmd(book);
		else if (input == "EXIT")
			exitCmd();
		else
			printWarning();
	}
}

int main()
{
	PhoneBook book;

	//do the constructor
	book.setContactsAmount(8);
	book.currentIndex = 0;

	printGreeting();
	suggestACmd(book);
	
	return (0);
}