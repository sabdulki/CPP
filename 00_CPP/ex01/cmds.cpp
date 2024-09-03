/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulki <sabdulki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:33:21 by sabdulki          #+#    #+#             */
/*   Updated: 2024/09/03 17:20:10 by sabdulki         ###   ########.fr       */
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

void PhoneBook::addCmd()
{
	Contact newContact;

	std::cout << "Please fill 5 fields.\n";
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
	std::cout << GREEN << "New contact was successfully added to the Phone Book!\n" << DEFAULT;
	return ;
}

void PhoneBook::searchCmd()
{
	int iTry;
	int index;
	int maxTry;
	std::string strIndex;

	iTry = 0;
	maxTry = 3;
	if (this->displayTable())
	{
		std::cout << RED << "The Phone Book is empty!" << DEFAULT << " Add a contact.\n";
		return ;
	}
	while (iTry < maxTry)
	{
		std::cout << YELLOW << "Enter the index: " << DEFAULT;
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
		std::cout << RED << "Failed to enter an index." << DEFAULT << std::endl;
		return ;
	}
	this->printCertainInfo(index - 1);
	return ;
}

void exitCmd()
{
	std::cout << GREEN << "Program successfully exited.\n" << DEFAULT;
	std::cout << "--------------------------------------------------------------------------------------------\n";
	exit (0);
}
