/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/29 18:31:45 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook(int contacts, int width, int firstIndex)
{
	setContactsAmount(contacts);
	setTableWidth(width);
	currentIndex = firstIndex;
}

int suggestACmd(PhoneBook book)
{
	string input;

	while (1)
	{
		cout << YELLOW << "Enter your comand: " << DEFAULT;
		cin >> input;
		if (input == "ADD")
			book = addCmd(book);
		else if (input == "SEARCH")
			book = searchCmd(book);
		else if (input == "EXIT")
			exitCmd();
		else
			printWarning();
	}
	return (0);
}

int main()
{
	PhoneBook book(8, 10, 0);
	printGreeting();
	suggestACmd(book);
	return (0);
}