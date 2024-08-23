/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/23 18:23:41 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

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
	PhoneBook book;

	//do the constructor
	book.setContactsAmount(8);
	book.setTableWidth(10);
	book.currentIndex = 0;

	printGreeting();
	suggestACmd(book);
	return (0);
}