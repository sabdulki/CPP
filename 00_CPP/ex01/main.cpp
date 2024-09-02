/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:57:44 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/02 16:26:49 by sabdulki         ###   ########.fr       */
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
		input = safeCin();
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

// PhoneBook& test(PhoneBook& book)
// {
// 	for(int i = 0; i < book.getContactsAmount(); i++)
// 	{
// 		Contact newContact;
// 		if (i == 0)
// 		{
// 			newContact.firstName = "FIRST";
// 			newContact.lastName = "FIRST";
// 			newContact.nickname = "FIRST";
// 			newContact.phoneNumber = "1";
// 			newContact.darkestSecret = "FIRST";
// 		}
// 		else if (i == 7)
// 		{
// 			newContact.firstName = "LAST";
// 			newContact.lastName = "LAST";
// 			newContact.nickname = "LAST";
// 			newContact.phoneNumber = "8";
// 			newContact.darkestSecret = "LAST";
// 		}
// 		else
// 		{
// 			newContact.firstName = "middle";
// 			newContact.lastName = "middle";
// 			newContact.nickname = "middle";
// 			newContact.phoneNumber = "middle";
// 			newContact.darkestSecret = "middle";
// 		}
// 		indexGetSet(SET);
// 		book.setContact(book, newContact, i);
// 	}
// 	return (book);
// }
