/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:20:27 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/04 15:02:21 by sabdulki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook()
{
	contactsAmount = 8;
	tableWidth = 10;
	currentIndex = 0;
}

PhoneBook::~PhoneBook() {}

int PhoneBook::getContactsAmount() {
	return (contactsAmount);
}

int PhoneBook::getTableWidth() {
	return (tableWidth);
}

Contact& PhoneBook::getContact(int index) {
	return allContacts[index];
}

void PhoneBook::setContact(Contact& newContact, int index) {
	allContacts[index] = newContact;
}

int PhoneBook::checkInRange(int index)
{
	if (index < 1 || index > indexGetSet(GET) || index > this->getContactsAmount())
	{
		std::cout << RED << "Index is out of range: " << index << DEFAULT << std::endl;
		std::cout << "Try again.\n";
		return (1);
	}
	return (0);
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
	std::cout << "| index      | first name | last name  | nickname   |\n";
	std::cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	if (index == 0)
		return (1);
	for (i = 0; i < index && i < this->getContactsAmount(); i++)
	{
		std::cout << "| ";
		this->printField(std::to_string(i+1));
		this->printContactInfo(i);
		std::cout << std::endl;
	}
	std::cout << "| ---------- | ---------- | ---------- | ---------- |\n";
	return (0);
}

void PhoneBook::printField(std::string data)
{
	int spacesLen;
	std::string newData;
	
	spacesLen = this->getTableWidth() - data.length();
	if (spacesLen >= 0) //print spaces
	{
		for (int i = 0; i < spacesLen; i++)
			std::cout << " "; 
		std::cout << data;
	}
	else if (spacesLen < 0) //truncate string
	{
		newData = data.substr(0, this->getTableWidth() - 1);
		std::cout << newData << ".";
	}
	std::cout << " | ";
}

void PhoneBook::printCertainInfo(int index)
{
	std::cout << "1) First Name: " << this->getContact(index).getField(1) << std::endl;
	std::cout << "2) Last Name: " << this->getContact(index).getField(2) << std::endl;
	std::cout << "3) Nickname:  " << this->getContact(index).getField(3) << std::endl;
	std::cout << "4) Phone Number: " << this->getContact(index).getField(4) << std::endl;
	std::cout << "5) Darkest secret: " << this->getContact(index).getField(5) << std::endl;
}