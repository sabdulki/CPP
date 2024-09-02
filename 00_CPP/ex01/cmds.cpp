/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/02 22:47:52 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int indexGetSet(int flag)
{
	static int	index;

	if (flag == SET)
		index += 1;
	return (index);
}

int PhoneBook::checkInRange(int index)
{
	if (index < 1 || index > indexGetSet(GET) || index > this->getContactsAmount())
	{
		cout << RED << "Index is out of range: " << index << DEFAULT << endl;
		cout << "Try again.\n";
		return (1);
	}
	return (0);
}

bool Contact::setField(int fieldIndex, string data)
{
	if (data.empty())
		return (false);
	switch (fieldIndex)
	{
		case 1:
			this->firstName = data;
			break;
		case 2:
			this->lastName = data;
			break;
		case 3:
			this->nickname = data;
			break;
		case 4:
			this->phoneNumber = data;
			break;
		case 5:
			this->darkestSecret = data;
			break;
		default:
			cout << "Wrong index\n";
			return (false);
	}
	return (true);
}

string Contact::getField(int fieldIndex)
{
	switch (fieldIndex)
	{
		case 1:
			return (this->firstName);
		case 2:
			return (this->lastName);
		case 3:
			return (this->nickname);
		case 4:
			return (this->phoneNumber);
		case 5:
			return (this->darkestSecret);
		default:
			cout << "Wrong index\n";
			return ("");
	}
	return ("");
}

void PhoneBook::addCmd()
{
	Contact newContact;

	cout << "Please fill 5 fields.\n";
	if (!newContact.setField(1, printOption(1, "First Name: ")) || \
		!newContact.setField(2, printOption(2, "Last Name: ")) || \
		!newContact.setField(3, printOption(3, "Nickname: ")) || \
		!newContact.setField(4, printOption(4, "Phone Number: ")) || \
		!newContact.setField(5, printOption(5, "Darkest secret: ")))
		return ;
	this->currentIndex = indexGetSet(GET);
	if (this->currentIndex >= this->getContactsAmount())
	{
		this->currentIndex = this->currentIndex % this->getContactsAmount();
	}
	this->setContact(newContact, this->currentIndex);
	indexGetSet(SET);
	cout << GREEN << "New contact was successfully added to the Phone Book!\n" << DEFAULT;
	return ;
}

void PhoneBook::printContactInfo(int i)
{
	printField(this->getContact(i).getField(1));
	printField(this->getContact(i).getField(2));
	printField(this->getContact(i).getField(3));
}

int PhoneBook::displayTable()
{
	int i;
	int index;

	index = indexGetSet(GET);
	cout << "| index      | first name | last name  | nickname   |\n";
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	if (index == 0)
		return (1);
	for (i = 0; i < index && i < this->getContactsAmount(); i++)
	{
		cout << "| ";
		this->printField(to_string(i+1));
		this->printContactInfo(i);
		cout << endl;
	}
	cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	return (0);
}

void PhoneBook::searchCmd()
{
	int iTry;
	int index;
	int maxTry;
	string strIndex;

	iTry = 0;
	maxTry = 3;
	if (this->displayTable())
	{
		cout << RED << "The Phone Book is empty!" << DEFAULT << " Add a contact.\n";
		return ;
	}
	while (iTry < maxTry)
	{
		cout << YELLOW << "Enter the index: " << DEFAULT;
		strIndex = safeCin();
		if (checkOnlyInt(strIndex, "Invalid index. "))
		{
			iTry++; 
			continue ;
		}
		index = stoi(strIndex);
		if (this->checkInRange(index))
		{
			iTry++; 
			continue ;
		}
		break ;
	}
	if (iTry == maxTry)
	{
		cout << RED << "Failed to enter an index." << DEFAULT << endl;
		return ;
	}
	this->printCertainInfo(index - 1);
	return ;
}

void exitCmd()
{
	cout << GREEN << "Program successfully exited.\n" << DEFAULT;
	cout << "--------------------------------------------------------------------------------------------\n";
	exit (0);
}
