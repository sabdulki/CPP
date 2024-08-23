/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/08/23 18:32:47 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int indexGetSet(int flag)
{
	static int	index;

	if (flag == SET && index < 8)
		index += 1;
	if (flag == SET_ZERO)
		index = 0;
	return (index);
}

int checkInRange(int index, PhoneBook book)
{
	if (index < 1 || index > indexGetSet(GET))
	{
		cout << RED << "Index is out of range: " << index << DEFAULT << endl;
		cout << "Try again.\n";
		return (1);
	}
	return (0);
}

PhoneBook addCmd(PhoneBook book)
{
	Contact newContact;

	cout << "Please fill 5 fields.\n";
	if ((newContact.firstName = printOption(1, "First Name: ")).empty())
		return (book);
	if ((newContact.lastName = printOption(2, "Last Name: ")).empty())
		return (book);
	if ((newContact.nickname = printOption(3, "Nickname: ")).empty())
		return (book);
	if ((newContact.phoneNumber = printOption(4, "Phone Number: ")).empty())
		return (book);
	if ((newContact.darkestSecret = printOption(5, "Darkest secret: ")).empty())
		return (book);
	book.currentIndex = indexGetSet(GET);
	if (book.currentIndex >= book.getContactsAmount())
		book.currentIndex = 7;
	book.allContacts[book.currentIndex] = newContact;
	book.currentIndex = indexGetSet(SET);
	cout << GREEN << "New contact was successfully added to the Phone Book!\n" << DEFAULT;
	return (book);
}

int displayTable(PhoneBook book)
{
	int i;
	int index;

	index = indexGetSet(GET);
	cout << "| index      | first name | last name  | nickname   |\n";
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	if (index == 0)
		return (1);
	for (i = 0; i < index; i++)
	{
		cout << "| ";
		printField(book, to_string(i+1)); //with " | "
		printField(book, book.allContacts[i].firstName);
		printField(book, book.allContacts[i].lastName);
		printField(book, book.allContacts[i].nickname);
		cout << endl;
	}
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	return (0);
}

PhoneBook searchCmd(PhoneBook book)
{
	int iTry;
	int index;
	int maxTry;
	string strIndex;

	iTry = 0;
	maxTry = 3;
	if (displayTable(book))
		return (cout << RED << "The Phone Book is empty!" << DEFAULT << " Add a contact.\n", book);
	while (iTry < maxTry)
	{
		cout << YELLOW << "Enter the index: " << DEFAULT;
		cin >> strIndex;
		if (checkOnlyInt(strIndex, "Invalid index. "))
			iTry++; continue ;
		index = stoi(strIndex);
		if (checkInRange(index, book))
			iTry++; continue ;
		break ;
	}
	if (iTry == maxTry)
		return (cout << RED << "Failed to enter an index." << DEFAULT << endl, book);
	printCertainInfo(book, index - 1);
	return (book);
}

int exitCmd()
{
	cout << GREEN << "Program successfully exited.\n" << DEFAULT;
	cout << "--------------------------------------------------------------------------------------------\n";
	exit (0);
}
